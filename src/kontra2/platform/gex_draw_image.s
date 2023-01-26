        ;; gex_draw_image.s
        ;; 
        ;; quickly draw raster image 256 x 128
        ;; this function ignores current color and 
        ;; leaves pen down and color set i.e. in an
        ;; inconsistent state!
        ;;
        ;; MIT License (see: LICENSE)
        ;; copyright (c) 2023 tomaz stih
        ;;
        ;; 24.01.2023    tstih
        .module gex_draw_image

        .globl  _gex_draw_image

        .equ    EF9367_CMD_DMOD_SET,    0x00    ; select pen (set bit 1 of CR1)
        .equ    EF9367_CMD_DMOD_CLR,    0x01    ; select eraser (clr bit 1 of CR1)
        .equ    EF9367_CMD_PEN_DOWN,    0x02    ; pen/eraser down
        .equ    EF9367_CMD_PEN_UP,      0x03    ; pen/eraser up

        .area   _CODE        

        ;; ----- void gex_draw_image(void *img, coord x, coord y); ------------
_gex_draw_image:
        ;; get img into hl and...
        pop     bc                      ; bc=ret address
        pop     hl                      ; hl=img
        exx
        pop     hl                      ; hl'=x
        pop     de                      ; de'=y
        ;; ...restore stack
        push    de
        push    hl
        exx
        push    hl
        push    bc
        ;; gotoxy
        exx
        call    gdp_set_xy
        exx
        ;; pen down
        ld      a,#EF9367_CMD_PEN_DOWN  ; pen down
        call    gdp_exec_cmd
        ;; and start the walk
        ld      a,#128                  ; rows
gdi_loop_row:
        push    af
        ld      b,#32                   ; 32 bytes per column
gdi_loop_col:
        ld      a,(hl)                  ; get byte
        inc     hl                      ; next byte
        call    gdi_draw_byte
        ;; loop col
        djnz    gdi_loop_col
        ;; loop row
        exx
        inc     de                      ; y=y+1
        call    gdp_set_xy              ; next row
        exx
        pop     af                      ; get row counter
        dec     a                       ; minus 1
        jr      nz,gdi_loop_row         ; if not yer, repeat
        ;; pen set on exit
        ld      a,#EF9367_CMD_DMOD_SET  ; pen set
        call    gdp_exec_cmd
        ;; clr stack
        ret
gdi_draw_byte:
        ld      c,b                     ; store b
        ld      b,#8                    ; 8 bits
gdb_loop_bits:
        sla     a                       ; get bit from a
        push    af                      ; store a
        jr      nc,gdi_clr_pixel        ; no bit!
        ;; if we are here set pen 
        ld      a,#EF9367_CMD_DMOD_CLR
        call    gdp_exec_cmd
gdp_eloop_bits:
        ld      a,#0b11000001           ; pixel len=2
        call    gdp_exec_cmd            ; and draw
        pop     af
        djnz    gdb_loop_bits           ; next bit
        ld      b,c                     ; restore b
        ret
gdi_clr_pixel:
        ;; set eraser
        ld      a,#EF9367_CMD_DMOD_SET
        call    gdp_exec_cmd
        jr      gdp_eloop_bits          ; and re-loop