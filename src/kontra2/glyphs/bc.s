        ;;  bc.s
        ;;  
        ;;  bc_font
        ;; 
        ;;  notes: see font.h for format details
        ;;  
        ;;  MIT License (see: LICENSE)
        ;;  copyright(c) 2021 tomaz stih
        ;;  
        ;;  24.01.2023   tstih
        .module bc_font

        .globl _bc_font

        .area _CODE
_bc_font::
        ;; font header
        .db 130                 ; font flags
        .db 23                  ; width (max width for proportional)
        .db 11                  ; height
        .db 32                  ; first ascii
        .db 127                 ; last ascii

        ;; glpyh offsets
        .dw 0x00C5, 0x00C9, 0x00DD, 0x00EA, 0x0115, 0x0131, 0x0155, 0x0176
        .dw 0x017F, 0x0193, 0x01A8, 0x01BF, 0x01D1, 0x01DB, 0x01E4, 0x01EB
        .dw 0x01FD, 0x021B, 0x0233, 0x024D, 0x026D, 0x028C, 0x02AB, 0x02C8
        .dw 0x02E1, 0x0303, 0x0323, 0x032D, 0x0339, 0x034C, 0x0359, 0x036D
        .dw 0x0383, 0x03B3, 0x03D6, 0x03FC, 0x041A, 0x043A, 0x0457, 0x0470
        .dw 0x0490, 0x04B1, 0x04C9, 0x04E6, 0x0503, 0x051B, 0x0542, 0x0562
        .dw 0x0584, 0x059E, 0x05C8, 0x05EA, 0x060C, 0x0629, 0x064B, 0x066B
        .dw 0x068F, 0x06BC, 0x06D6, 0x06F3, 0x0706, 0x0717, 0x072C, 0x073B
        .dw 0x0746, 0x0750, 0x0769, 0x0785, 0x079E, 0x07B9, 0x07D6, 0x07ED
        .dw 0x0812, 0x082E, 0x0841, 0x0857, 0x0875, 0x088A, 0x08AB, 0x08C5
        .dw 0x08DC, 0x08F7, 0x0917, 0x0929, 0x0941, 0x0958, 0x0971, 0x098C
        .dw 0x09AD, 0x09C7, 0x09DF, 0x09F7, 0x0A0E, 0x0A25, 0x0A3E, 0x0A4F

        ;; ascii 32: ' '
        .db 32                  ; class(bits 5-7)
        .db 3                   ; width
        .db 11                  ; height
        .db 0                   ; # moves
        ;; ascii 33: '!'
        .db 32                  ; class(bits 5-7)
        .db 1                   ; width
        .db 11                  ; height
        .db 16                  ; # moves
        .db 0                   ; x origin
        .db 1                   ; y origin
        .db 160                 ; move dx=1, dy=0, color=fore (set)
        .db 170                 ; move dx=-1, dy=1, color=fore (set)
        .db 160                 ; move dx=1, dy=0, color=fore (set)
        .db 170                 ; move dx=-1, dy=1, color=fore (set)
        .db 160                 ; move dx=1, dy=0, color=fore (set)
        .db 170                 ; move dx=-1, dy=1, color=fore (set)
        .db 160                 ; move dx=1, dy=0, color=fore (set)
        .db 170                 ; move dx=-1, dy=1, color=fore (set)
        .db 160                 ; move dx=1, dy=0, color=fore (set)
        .db 170                 ; move dx=-1, dy=1, color=fore (set)
        .db 160                 ; move dx=1, dy=0, color=fore (set)
        .db 42                  ; move dx=-1, dy=1, color=none (move only!)
        .db 8                   ; move dx=0, dy=1, color=none (move only!)
        .db 160                 ; move dx=1, dy=0, color=fore (set)
        ;; ascii 34: '"'
        .db 32                  ; class(bits 5-7)
        .db 5                   ; width
        .db 11                  ; height
        .db 9                   ; # moves
        .db 1                   ; x origin
        .db 2                   ; y origin
        .db 162                 ; move dx=-1, dy=0, color=fore (set)
        .db 140                 ; move dx=0, dy=-1, color=fore (set)
        .db 160                 ; move dx=1, dy=0, color=fore (set)
        .db 96                  ; move dx=3, dy=0, color=none (move only!)
        .db 160                 ; move dx=1, dy=0, color=fore (set)
        .db 170                 ; move dx=-1, dy=1, color=fore (set)
        .db 160                 ; move dx=1, dy=0, color=fore (set)
        ;; ascii 35: '#'
        .db 32                  ; class(bits 5-7)
        .db 11                  ; width
        .db 11                  ; height
        .db 39                  ; # moves
        .db 11                  ; x origin
        .db 6                   ; y origin
        .db 162                 ; move dx=-1, dy=0, color=fore (set)
        .db 174                 ; move dx=-1, dy=-1, color=fore (set)
        .db 162                 ; move dx=-1, dy=0, color=fore (set)
        .db 172                 ; move dx=1, dy=-1, color=fore (set)
        .db 162                 ; move dx=-1, dy=0, color=fore (set)
        .db 172                 ; move dx=1, dy=-1, color=fore (set)
        .db 192                 ; move dx=2, dy=0, color=fore (set)
        .db 46                  ; move dx=-1, dy=-1, color=none (move only!)
        .db 34                  ; move dx=-1, dy=0, color=none (move only!)
        .db 140                 ; move dx=0, dy=-1, color=fore (set)
        .db 162                 ; move dx=-1, dy=0, color=fore (set)
        .db 144                 ; move dx=0, dy=2, color=fore (set)
        .db 226                 ; move dx=-3, dy=0, color=fore (set)
        .db 162                 ; move dx=-1, dy=0, color=fore (set)
        .db 214                 ; move dx=-2, dy=-2, color=fore (set)
        .db 160                 ; move dx=1, dy=0, color=fore (set)
        .db 170                 ; move dx=-1, dy=1, color=fore (set)
        .db 42                  ; move dx=-1, dy=1, color=none (move only!)
        .db 34                  ; move dx=-1, dy=0, color=none (move only!)
        .db 224                 ; move dx=3, dy=0, color=fore (set)
        .db 170                 ; move dx=-1, dy=1, color=fore (set)
        .db 160                 ; move dx=1, dy=0, color=fore (set)
        .db 170                 ; move dx=-1, dy=1, color=fore (set)
        .db 160                 ; move dx=1, dy=0, color=fore (set)
        .db 170                 ; move dx=-1, dy=1, color=fore (set)
        .db 194                 ; move dx=-2, dy=0, color=fore (set)
        .db 40                  ; move dx=1, dy=1, color=none (move only!)
        .db 32                  ; move dx=1, dy=0, color=none (move only!)
        .db 136                 ; move dx=0, dy=1, color=fore (set)
        .db 160                 ; move dx=1, dy=0, color=fore (set)
        .db 148                 ; move dx=0, dy=-2, color=fore (set)
        .db 224                 ; move dx=3, dy=0, color=fore (set)
        .db 224                 ; move dx=3, dy=0, color=fore (set)
        .db 170                 ; move dx=-1, dy=1, color=fore (set)
        .db 160                 ; move dx=1, dy=0, color=fore (set)
        .db 170                 ; move dx=-1, dy=1, color=fore (set)
        .db 160                 ; move dx=1, dy=0, color=fore (set)
        ;; ascii 36: '$'
        .db 32                  ; class(bits 5-7)
        .db 9                   ; width
        .db 11                  ; height
        .db 24                  ; # moves
        .db 5                   ; x origin
        .db 1                   ; y origin
        .db 162                 ; move dx=-1, dy=0, color=fore (set)
        .db 42                  ; move dx=-1, dy=1, color=none (move only!)
        .db 34                  ; move dx=-1, dy=0, color=none (move only!)
        .db 224                 ; move dx=3, dy=0, color=fore (set)
        .db 192                 ; move dx=2, dy=0, color=fore (set)
        .db 80                  ; move dx=2, dy=2, color=none (move only!)
        .db 8                   ; move dx=0, dy=1, color=none (move only!)
        .db 170                 ; move dx=-1, dy=1, color=fore (set)
        .db 160                 ; move dx=1, dy=0, color=fore (set)
        .db 214                 ; move dx=-2, dy=-2, color=fore (set)
        .db 226                 ; move dx=-3, dy=0, color=fore (set)
        .db 194                 ; move dx=-2, dy=0, color=fore (set)
        .db 174                 ; move dx=-1, dy=-1, color=fore (set)
        .db 162                 ; move dx=-1, dy=0, color=fore (set)
        .db 24                  ; move dx=0, dy=3, color=none (move only!)
        .db 160                 ; move dx=1, dy=0, color=fore (set)
        .db 168                 ; move dx=1, dy=1, color=fore (set)
        .db 224                 ; move dx=3, dy=0, color=fore (set)
        .db 192                 ; move dx=2, dy=0, color=fore (set)
        .db 42                  ; move dx=-1, dy=1, color=none (move only!)
        .db 66                  ; move dx=-2, dy=0, color=none (move only!)
        .db 160                 ; move dx=1, dy=0, color=fore (set)
        ;; ascii 37: '%'
        .db 32                  ; class(bits 5-7)
        .db 15                  ; width
        .db 11                  ; height
        .db 32                  ; # moves
        .db 2                   ; x origin
        .db 7                   ; y origin
        .db 160                 ; move dx=1, dy=0, color=fore (set)
        .db 172                 ; move dx=1, dy=-1, color=fore (set)
        .db 160                 ; move dx=1, dy=0, color=fore (set)
        .db 172                 ; move dx=1, dy=-1, color=fore (set)
        .db 160                 ; move dx=1, dy=0, color=fore (set)
        .db 168                 ; move dx=1, dy=1, color=fore (set)
        .db 46                  ; move dx=-1, dy=-1, color=none (move only!)
        .db 28                  ; move dx=0, dy=-3, color=none (move only!)
        .db 210                 ; move dx=-2, dy=2, color=fore (set)
        .db 226                 ; move dx=-3, dy=0, color=fore (set)
        .db 214                 ; move dx=-2, dy=-2, color=fore (set)
        .db 136                 ; move dx=0, dy=1, color=fore (set)
        .db 212                 ; move dx=2, dy=-2, color=fore (set)
        .db 224                 ; move dx=3, dy=0, color=fore (set)
        .db 248                 ; move dx=3, dy=3, color=fore (set)
        .db 160                 ; move dx=1, dy=0, color=fore (set)
        .db 172                 ; move dx=1, dy=-1, color=fore (set)
        .db 160                 ; move dx=1, dy=0, color=fore (set)
        .db 172                 ; move dx=1, dy=-1, color=fore (set)
        .db 160                 ; move dx=1, dy=0, color=fore (set)
        .db 80                  ; move dx=2, dy=2, color=none (move only!)
        .db 16                  ; move dx=0, dy=2, color=none (move only!)
        .db 170                 ; move dx=-1, dy=1, color=fore (set)
        .db 160                 ; move dx=1, dy=0, color=fore (set)
        .db 214                 ; move dx=-2, dy=-2, color=fore (set)
        .db 226                 ; move dx=-3, dy=0, color=fore (set)
        .db 210                 ; move dx=-2, dy=2, color=fore (set)
        .db 160                 ; move dx=1, dy=0, color=fore (set)
        .db 168                 ; move dx=1, dy=1, color=fore (set)
        .db 224                 ; move dx=3, dy=0, color=fore (set)
        ;; ascii 38: '&'
        .db 32                  ; class(bits 5-7)
        .db 13                  ; width
        .db 11                  ; height
        .db 29                  ; # moves
        .db 8                   ; x origin
        .db 6                   ; y origin
        .db 224                 ; move dx=3, dy=0, color=fore (set)
        .db 172                 ; move dx=1, dy=-1, color=fore (set)
        .db 160                 ; move dx=1, dy=0, color=fore (set)
        .db 126                 ; move dx=-3, dy=-3, color=none (move only!)
        .db 34                  ; move dx=-1, dy=0, color=none (move only!)
        .db 170                 ; move dx=-1, dy=1, color=fore (set)
        .db 160                 ; move dx=1, dy=0, color=fore (set)
        .db 214                 ; move dx=-2, dy=-2, color=fore (set)
        .db 226                 ; move dx=-3, dy=0, color=fore (set)
        .db 210                 ; move dx=-2, dy=2, color=fore (set)
        .db 140                 ; move dx=0, dy=-1, color=fore (set)
        .db 208                 ; move dx=2, dy=2, color=fore (set)
        .db 224                 ; move dx=3, dy=0, color=fore (set)
        .db 136                 ; move dx=0, dy=1, color=fore (set)
        .db 162                 ; move dx=-1, dy=0, color=fore (set)
        .db 98                  ; move dx=-3, dy=0, color=none (move only!)
        .db 162                 ; move dx=-1, dy=0, color=fore (set)
        .db 210                 ; move dx=-2, dy=2, color=fore (set)
        .db 140                 ; move dx=0, dy=-1, color=fore (set)
        .db 208                 ; move dx=2, dy=2, color=fore (set)
        .db 224                 ; move dx=3, dy=0, color=fore (set)
        .db 224                 ; move dx=3, dy=0, color=fore (set)
        .db 160                 ; move dx=1, dy=0, color=fore (set)
        .db 172                 ; move dx=1, dy=-1, color=fore (set)
        .db 160                 ; move dx=1, dy=0, color=fore (set)
        .db 168                 ; move dx=1, dy=1, color=fore (set)
        .db 160                 ; move dx=1, dy=0, color=fore (set)
        ;; ascii 39: '''
        .db 32                  ; class(bits 5-7)
        .db 1                   ; width
        .db 11                  ; height
        .db 5                   ; # moves
        .db 0                   ; x origin
        .db 1                   ; y origin
        .db 160                 ; move dx=1, dy=0, color=fore (set)
        .db 170                 ; move dx=-1, dy=1, color=fore (set)
        .db 160                 ; move dx=1, dy=0, color=fore (set)
        ;; ascii 40: '('
        .db 32                  ; class(bits 5-7)
        .db 5                   ; width
        .db 11                  ; height
        .db 16                  ; # moves
        .db 5                   ; x origin
        .db 1                   ; y origin
        .db 162                 ; move dx=-1, dy=0, color=fore (set)
        .db 170                 ; move dx=-1, dy=1, color=fore (set)
        .db 162                 ; move dx=-1, dy=0, color=fore (set)
        .db 210                 ; move dx=-2, dy=2, color=fore (set)
        .db 140                 ; move dx=0, dy=-1, color=fore (set)
        .db 168                 ; move dx=1, dy=1, color=fore (set)
        .db 170                 ; move dx=-1, dy=1, color=fore (set)
        .db 160                 ; move dx=1, dy=0, color=fore (set)
        .db 170                 ; move dx=-1, dy=1, color=fore (set)
        .db 160                 ; move dx=1, dy=0, color=fore (set)
        .db 168                 ; move dx=1, dy=1, color=fore (set)
        .db 160                 ; move dx=1, dy=0, color=fore (set)
        .db 168                 ; move dx=1, dy=1, color=fore (set)
        .db 160                 ; move dx=1, dy=0, color=fore (set)
        ;; ascii 41: ')'
        .db 32                  ; class(bits 5-7)
        .db 5                   ; width
        .db 11                  ; height
        .db 17                  ; # moves
        .db 0                   ; x origin
        .db 1                   ; y origin
        .db 160                 ; move dx=1, dy=0, color=fore (set)
        .db 168                 ; move dx=1, dy=1, color=fore (set)
        .db 160                 ; move dx=1, dy=0, color=fore (set)
        .db 168                 ; move dx=1, dy=1, color=fore (set)
        .db 160                 ; move dx=1, dy=0, color=fore (set)
        .db 170                 ; move dx=-1, dy=1, color=fore (set)
        .db 136                 ; move dx=0, dy=1, color=fore (set)
        .db 172                 ; move dx=1, dy=-1, color=fore (set)
        .db 144                 ; move dx=0, dy=2, color=fore (set)
        .db 162                 ; move dx=-1, dy=0, color=fore (set)
        .db 170                 ; move dx=-1, dy=1, color=fore (set)
        .db 162                 ; move dx=-1, dy=0, color=fore (set)
        .db 42                  ; move dx=-1, dy=1, color=none (move only!)
        .db 34                  ; move dx=-1, dy=0, color=none (move only!)
        .db 160                 ; move dx=1, dy=0, color=fore (set)
        ;; ascii 42: '*'
        .db 32                  ; class(bits 5-7)
        .db 9                   ; width
        .db 11                  ; height
        .db 19                  ; # moves
        .db 0                   ; x origin
        .db 3                   ; y origin
        .db 160                 ; move dx=1, dy=0, color=fore (set)
        .db 168                 ; move dx=1, dy=1, color=fore (set)
        .db 160                 ; move dx=1, dy=0, color=fore (set)
        .db 122                 ; move dx=-3, dy=3, color=none (move only!)
        .db 160                 ; move dx=1, dy=0, color=fore (set)
        .db 172                 ; move dx=1, dy=-1, color=fore (set)
        .db 160                 ; move dx=1, dy=0, color=fore (set)
        .db 172                 ; move dx=1, dy=-1, color=fore (set)
        .db 160                 ; move dx=1, dy=0, color=fore (set)
        .db 172                 ; move dx=1, dy=-1, color=fore (set)
        .db 160                 ; move dx=1, dy=0, color=fore (set)
        .db 172                 ; move dx=1, dy=-1, color=fore (set)
        .db 160                 ; move dx=1, dy=0, color=fore (set)
        .db 122                 ; move dx=-3, dy=3, color=none (move only!)
        .db 160                 ; move dx=1, dy=0, color=fore (set)
        .db 168                 ; move dx=1, dy=1, color=fore (set)
        .db 160                 ; move dx=1, dy=0, color=fore (set)
        ;; ascii 43: '+'
        .db 32                  ; class(bits 5-7)
        .db 9                   ; width
        .db 11                  ; height
        .db 14                  ; # moves
        .db 9                   ; x origin
        .db 5                   ; y origin
        .db 226                 ; move dx=-3, dy=0, color=fore (set)
        .db 214                 ; move dx=-2, dy=-2, color=fore (set)
        .db 160                 ; move dx=1, dy=0, color=fore (set)
        .db 170                 ; move dx=-1, dy=1, color=fore (set)
        .db 42                  ; move dx=-1, dy=1, color=none (move only!)
        .db 98                  ; move dx=-3, dy=0, color=none (move only!)
        .db 224                 ; move dx=3, dy=0, color=fore (set)
        .db 192                 ; move dx=2, dy=0, color=fore (set)
        .db 170                 ; move dx=-1, dy=1, color=fore (set)
        .db 160                 ; move dx=1, dy=0, color=fore (set)
        .db 170                 ; move dx=-1, dy=1, color=fore (set)
        .db 160                 ; move dx=1, dy=0, color=fore (set)
        ;; ascii 44: ','
        .db 32                  ; class(bits 5-7)
        .db 3                   ; width
        .db 11                  ; height
        .db 6                   ; # moves
        .db 3                   ; x origin
        .db 8                   ; y origin
        .db 162                 ; move dx=-1, dy=0, color=fore (set)
        .db 42                  ; move dx=-1, dy=1, color=none (move only!)
        .db 34                  ; move dx=-1, dy=0, color=none (move only!)
        .db 160                 ; move dx=1, dy=0, color=fore (set)
        ;; ascii 45: '-'
        .db 32                  ; class(bits 5-7)
        .db 7                   ; width
        .db 11                  ; height
        .db 5                   ; # moves
        .db 0                   ; x origin
        .db 5                   ; y origin
        .db 224                 ; move dx=3, dy=0, color=fore (set)
        .db 224                 ; move dx=3, dy=0, color=fore (set)
        .db 160                 ; move dx=1, dy=0, color=fore (set)
        ;; ascii 46: '.'
        .db 32                  ; class(bits 5-7)
        .db 1                   ; width
        .db 11                  ; height
        .db 3                   ; # moves
        .db 0                   ; x origin
        .db 8                   ; y origin
        .db 160                 ; move dx=1, dy=0, color=fore (set)
        ;; ascii 47: '/'
        .db 32                  ; class(bits 5-7)
        .db 11                  ; width
        .db 11                  ; height
        .db 14                  ; # moves
        .db 11                  ; x origin
        .db 2                   ; y origin
        .db 162                 ; move dx=-1, dy=0, color=fore (set)
        .db 170                 ; move dx=-1, dy=1, color=fore (set)
        .db 162                 ; move dx=-1, dy=0, color=fore (set)
        .db 170                 ; move dx=-1, dy=1, color=fore (set)
        .db 162                 ; move dx=-1, dy=0, color=fore (set)
        .db 170                 ; move dx=-1, dy=1, color=fore (set)
        .db 162                 ; move dx=-1, dy=0, color=fore (set)
        .db 170                 ; move dx=-1, dy=1, color=fore (set)
        .db 162                 ; move dx=-1, dy=0, color=fore (set)
        .db 42                  ; move dx=-1, dy=1, color=none (move only!)
        .db 34                  ; move dx=-1, dy=0, color=none (move only!)
        .db 160                 ; move dx=1, dy=0, color=fore (set)
        ;; ascii 48: '0'
        .db 32                  ; class(bits 5-7)
        .db 11                  ; width
        .db 11                  ; height
        .db 26                  ; # moves
        .db 8                   ; x origin
        .db 7                   ; y origin
        .db 160                 ; move dx=1, dy=0, color=fore (set)
        .db 212                 ; move dx=2, dy=-2, color=fore (set)
        .db 136                 ; move dx=0, dy=1, color=fore (set)
        .db 174                 ; move dx=-1, dy=-1, color=fore (set)
        .db 140                 ; move dx=0, dy=-1, color=fore (set)
        .db 172                 ; move dx=1, dy=-1, color=fore (set)
        .db 136                 ; move dx=0, dy=1, color=fore (set)
        .db 214                 ; move dx=-2, dy=-2, color=fore (set)
        .db 162                 ; move dx=-1, dy=0, color=fore (set)
        .db 174                 ; move dx=-1, dy=-1, color=fore (set)
        .db 226                 ; move dx=-3, dy=0, color=fore (set)
        .db 170                 ; move dx=-1, dy=1, color=fore (set)
        .db 162                 ; move dx=-1, dy=0, color=fore (set)
        .db 210                 ; move dx=-2, dy=2, color=fore (set)
        .db 140                 ; move dx=0, dy=-1, color=fore (set)
        .db 168                 ; move dx=1, dy=1, color=fore (set)
        .db 170                 ; move dx=-1, dy=1, color=fore (set)
        .db 160                 ; move dx=1, dy=0, color=fore (set)
        .db 170                 ; move dx=-1, dy=1, color=fore (set)
        .db 160                 ; move dx=1, dy=0, color=fore (set)
        .db 168                 ; move dx=1, dy=1, color=fore (set)
        .db 160                 ; move dx=1, dy=0, color=fore (set)
        .db 168                 ; move dx=1, dy=1, color=fore (set)
        .db 224                 ; move dx=3, dy=0, color=fore (set)
        ;; ascii 49: '1'
        .db 32                  ; class(bits 5-7)
        .db 9                   ; width
        .db 11                  ; height
        .db 20                  ; # moves
        .db 5                   ; x origin
        .db 1                   ; y origin
        .db 162                 ; move dx=-1, dy=0, color=fore (set)
        .db 42                  ; move dx=-1, dy=1, color=none (move only!)
        .db 98                  ; move dx=-3, dy=0, color=none (move only!)
        .db 224                 ; move dx=3, dy=0, color=fore (set)
        .db 192                 ; move dx=2, dy=0, color=fore (set)
        .db 170                 ; move dx=-1, dy=1, color=fore (set)
        .db 160                 ; move dx=1, dy=0, color=fore (set)
        .db 136                 ; move dx=0, dy=1, color=fore (set)
        .db 162                 ; move dx=-1, dy=0, color=fore (set)
        .db 144                 ; move dx=0, dy=2, color=fore (set)
        .db 172                 ; move dx=1, dy=-1, color=fore (set)
        .db 144                 ; move dx=0, dy=2, color=fore (set)
        .db 162                 ; move dx=-1, dy=0, color=fore (set)
        .db 42                  ; move dx=-1, dy=1, color=none (move only!)
        .db 98                  ; move dx=-3, dy=0, color=none (move only!)
        .db 224                 ; move dx=3, dy=0, color=fore (set)
        .db 224                 ; move dx=3, dy=0, color=fore (set)
        .db 224                 ; move dx=3, dy=0, color=fore (set)
        ;; ascii 50: '2'
        .db 32                  ; class(bits 5-7)
        .db 11                  ; width
        .db 11                  ; height
        .db 22                  ; # moves
        .db 0                   ; x origin
        .db 2                   ; y origin
        .db 160                 ; move dx=1, dy=0, color=fore (set)
        .db 172                 ; move dx=1, dy=-1, color=fore (set)
        .db 224                 ; move dx=3, dy=0, color=fore (set)
        .db 224                 ; move dx=3, dy=0, color=fore (set)
        .db 160                 ; move dx=1, dy=0, color=fore (set)
        .db 208                 ; move dx=2, dy=2, color=fore (set)
        .db 140                 ; move dx=0, dy=-1, color=fore (set)
        .db 210                 ; move dx=-2, dy=2, color=fore (set)
        .db 226                 ; move dx=-3, dy=0, color=fore (set)
        .db 194                 ; move dx=-2, dy=0, color=fore (set)
        .db 170                 ; move dx=-1, dy=1, color=fore (set)
        .db 162                 ; move dx=-1, dy=0, color=fore (set)
        .db 210                 ; move dx=-2, dy=2, color=fore (set)
        .db 140                 ; move dx=0, dy=-1, color=fore (set)
        .db 168                 ; move dx=1, dy=1, color=fore (set)
        .db 170                 ; move dx=-1, dy=1, color=fore (set)
        .db 224                 ; move dx=3, dy=0, color=fore (set)
        .db 224                 ; move dx=3, dy=0, color=fore (set)
        .db 224                 ; move dx=3, dy=0, color=fore (set)
        .db 192                 ; move dx=2, dy=0, color=fore (set)
        ;; ascii 51: '3'
        .db 32                  ; class(bits 5-7)
        .db 11                  ; width
        .db 11                  ; height
        .db 28                  ; # moves
        .db 11                  ; x origin
        .db 2                   ; y origin
        .db 170                 ; move dx=-1, dy=1, color=fore (set)
        .db 160                 ; move dx=1, dy=0, color=fore (set)
        .db 214                 ; move dx=-2, dy=-2, color=fore (set)
        .db 226                 ; move dx=-3, dy=0, color=fore (set)
        .db 226                 ; move dx=-3, dy=0, color=fore (set)
        .db 162                 ; move dx=-1, dy=0, color=fore (set)
        .db 170                 ; move dx=-1, dy=1, color=fore (set)
        .db 162                 ; move dx=-1, dy=0, color=fore (set)
        .db 80                  ; move dx=2, dy=2, color=none (move only!)
        .db 64                  ; move dx=2, dy=0, color=none (move only!)
        .db 224                 ; move dx=3, dy=0, color=fore (set)
        .db 192                 ; move dx=2, dy=0, color=fore (set)
        .db 168                 ; move dx=1, dy=1, color=fore (set)
        .db 136                 ; move dx=0, dy=1, color=fore (set)
        .db 172                 ; move dx=1, dy=-1, color=fore (set)
        .db 144                 ; move dx=0, dy=2, color=fore (set)
        .db 162                 ; move dx=-1, dy=0, color=fore (set)
        .db 98                  ; move dx=-3, dy=0, color=none (move only!)
        .db 98                  ; move dx=-3, dy=0, color=none (move only!)
        .db 98                  ; move dx=-3, dy=0, color=none (move only!)
        .db 34                  ; move dx=-1, dy=0, color=none (move only!)
        .db 160                 ; move dx=1, dy=0, color=fore (set)
        .db 168                 ; move dx=1, dy=1, color=fore (set)
        .db 224                 ; move dx=3, dy=0, color=fore (set)
        .db 224                 ; move dx=3, dy=0, color=fore (set)
        .db 160                 ; move dx=1, dy=0, color=fore (set)
        ;; ascii 52: '4'
        .db 32                  ; class(bits 5-7)
        .db 11                  ; width
        .db 11                  ; height
        .db 27                  ; # moves
        .db 11                  ; x origin
        .db 5                   ; y origin
        .db 162                 ; move dx=-1, dy=0, color=fore (set)
        .db 174                 ; move dx=-1, dy=-1, color=fore (set)
        .db 162                 ; move dx=-1, dy=0, color=fore (set)
        .db 172                 ; move dx=1, dy=-1, color=fore (set)
        .db 162                 ; move dx=-1, dy=0, color=fore (set)
        .db 172                 ; move dx=1, dy=-1, color=fore (set)
        .db 162                 ; move dx=-1, dy=0, color=fore (set)
        .db 172                 ; move dx=1, dy=-1, color=fore (set)
        .db 226                 ; move dx=-3, dy=0, color=fore (set)
        .db 170                 ; move dx=-1, dy=1, color=fore (set)
        .db 162                 ; move dx=-1, dy=0, color=fore (set)
        .db 170                 ; move dx=-1, dy=1, color=fore (set)
        .db 162                 ; move dx=-1, dy=0, color=fore (set)
        .db 170                 ; move dx=-1, dy=1, color=fore (set)
        .db 162                 ; move dx=-1, dy=0, color=fore (set)
        .db 136                 ; move dx=0, dy=1, color=fore (set)
        .db 224                 ; move dx=3, dy=0, color=fore (set)
        .db 224                 ; move dx=3, dy=0, color=fore (set)
        .db 224                 ; move dx=3, dy=0, color=fore (set)
        .db 170                 ; move dx=-1, dy=1, color=fore (set)
        .db 160                 ; move dx=1, dy=0, color=fore (set)
        .db 170                 ; move dx=-1, dy=1, color=fore (set)
        .db 160                 ; move dx=1, dy=0, color=fore (set)
        .db 170                 ; move dx=-1, dy=1, color=fore (set)
        .db 160                 ; move dx=1, dy=0, color=fore (set)
        ;; ascii 53: '5'
        .db 32                  ; class(bits 5-7)
        .db 11                  ; width
        .db 11                  ; height
        .db 27                  ; # moves
        .db 11                  ; x origin
        .db 1                   ; y origin
        .db 226                 ; move dx=-3, dy=0, color=fore (set)
        .db 226                 ; move dx=-3, dy=0, color=fore (set)
        .db 226                 ; move dx=-3, dy=0, color=fore (set)
        .db 194                 ; move dx=-2, dy=0, color=fore (set)
        .db 144                 ; move dx=0, dy=2, color=fore (set)
        .db 172                 ; move dx=1, dy=-1, color=fore (set)
        .db 136                 ; move dx=0, dy=1, color=fore (set)
        .db 170                 ; move dx=-1, dy=1, color=fore (set)
        .db 224                 ; move dx=3, dy=0, color=fore (set)
        .db 224                 ; move dx=3, dy=0, color=fore (set)
        .db 224                 ; move dx=3, dy=0, color=fore (set)
        .db 168                 ; move dx=1, dy=1, color=fore (set)
        .db 136                 ; move dx=0, dy=1, color=fore (set)
        .db 172                 ; move dx=1, dy=-1, color=fore (set)
        .db 144                 ; move dx=0, dy=2, color=fore (set)
        .db 162                 ; move dx=-1, dy=0, color=fore (set)
        .db 98                  ; move dx=-3, dy=0, color=none (move only!)
        .db 98                  ; move dx=-3, dy=0, color=none (move only!)
        .db 98                  ; move dx=-3, dy=0, color=none (move only!)
        .db 34                  ; move dx=-1, dy=0, color=none (move only!)
        .db 160                 ; move dx=1, dy=0, color=fore (set)
        .db 168                 ; move dx=1, dy=1, color=fore (set)
        .db 224                 ; move dx=3, dy=0, color=fore (set)
        .db 224                 ; move dx=3, dy=0, color=fore (set)
        .db 160                 ; move dx=1, dy=0, color=fore (set)
        ;; ascii 54: '6'
        .db 32                  ; class(bits 5-7)
        .db 11                  ; width
        .db 11                  ; height
        .db 25                  ; # moves
        .db 0                   ; x origin
        .db 7                   ; y origin
        .db 156                 ; move dx=0, dy=-3, color=fore (set)
        .db 140                 ; move dx=0, dy=-1, color=fore (set)
        .db 160                 ; move dx=1, dy=0, color=fore (set)
        .db 172                 ; move dx=1, dy=-1, color=fore (set)
        .db 160                 ; move dx=1, dy=0, color=fore (set)
        .db 172                 ; move dx=1, dy=-1, color=fore (set)
        .db 224                 ; move dx=3, dy=0, color=fore (set)
        .db 192                 ; move dx=2, dy=0, color=fore (set)
        .db 80                  ; move dx=2, dy=2, color=none (move only!)
        .db 16                  ; move dx=0, dy=2, color=none (move only!)
        .db 170                 ; move dx=-1, dy=1, color=fore (set)
        .db 168                 ; move dx=1, dy=1, color=fore (set)
        .db 162                 ; move dx=-1, dy=0, color=fore (set)
        .db 172                 ; move dx=1, dy=-1, color=fore (set)
        .db 214                 ; move dx=-2, dy=-2, color=fore (set)
        .db 226                 ; move dx=-3, dy=0, color=fore (set)
        .db 226                 ; move dx=-3, dy=0, color=fore (set)
        .db 194                 ; move dx=-2, dy=0, color=fore (set)
        .db 152                 ; move dx=0, dy=3, color=fore (set)
        .db 168                 ; move dx=1, dy=1, color=fore (set)
        .db 224                 ; move dx=3, dy=0, color=fore (set)
        .db 224                 ; move dx=3, dy=0, color=fore (set)
        .db 160                 ; move dx=1, dy=0, color=fore (set)
        ;; ascii 55: '7'
        .db 32                  ; class(bits 5-7)
        .db 11                  ; width
        .db 11                  ; height
        .db 21                  ; # moves
        .db 1                   ; x origin
        .db 2                   ; y origin
        .db 162                 ; move dx=-1, dy=0, color=fore (set)
        .db 140                 ; move dx=0, dy=-1, color=fore (set)
        .db 224                 ; move dx=3, dy=0, color=fore (set)
        .db 224                 ; move dx=3, dy=0, color=fore (set)
        .db 224                 ; move dx=3, dy=0, color=fore (set)
        .db 160                 ; move dx=1, dy=0, color=fore (set)
        .db 136                 ; move dx=0, dy=1, color=fore (set)
        .db 172                 ; move dx=1, dy=-1, color=fore (set)
        .db 144                 ; move dx=0, dy=2, color=fore (set)
        .db 162                 ; move dx=-1, dy=0, color=fore (set)
        .db 170                 ; move dx=-1, dy=1, color=fore (set)
        .db 162                 ; move dx=-1, dy=0, color=fore (set)
        .db 170                 ; move dx=-1, dy=1, color=fore (set)
        .db 162                 ; move dx=-1, dy=0, color=fore (set)
        .db 210                 ; move dx=-2, dy=2, color=fore (set)
        .db 140                 ; move dx=0, dy=-1, color=fore (set)
        .db 168                 ; move dx=1, dy=1, color=fore (set)
        .db 170                 ; move dx=-1, dy=1, color=fore (set)
        .db 160                 ; move dx=1, dy=0, color=fore (set)
        ;; ascii 56: '8'
        .db 32                  ; class(bits 5-7)
        .db 11                  ; width
        .db 11                  ; height
        .db 30                  ; # moves
        .db 11                  ; x origin
        .db 7                   ; y origin
        .db 162                 ; move dx=-1, dy=0, color=fore (set)
        .db 172                 ; move dx=1, dy=-1, color=fore (set)
        .db 162                 ; move dx=-1, dy=0, color=fore (set)
        .db 172                 ; move dx=1, dy=-1, color=fore (set)
        .db 162                 ; move dx=-1, dy=0, color=fore (set)
        .db 174                 ; move dx=-1, dy=-1, color=fore (set)
        .db 212                 ; move dx=2, dy=-2, color=fore (set)
        .db 136                 ; move dx=0, dy=1, color=fore (set)
        .db 214                 ; move dx=-2, dy=-2, color=fore (set)
        .db 226                 ; move dx=-3, dy=0, color=fore (set)
        .db 226                 ; move dx=-3, dy=0, color=fore (set)
        .db 162                 ; move dx=-1, dy=0, color=fore (set)
        .db 210                 ; move dx=-2, dy=2, color=fore (set)
        .db 140                 ; move dx=0, dy=-1, color=fore (set)
        .db 208                 ; move dx=2, dy=2, color=fore (set)
        .db 224                 ; move dx=3, dy=0, color=fore (set)
        .db 224                 ; move dx=3, dy=0, color=fore (set)
        .db 42                  ; move dx=-1, dy=1, color=none (move only!)
        .db 98                  ; move dx=-3, dy=0, color=none (move only!)
        .db 98                  ; move dx=-3, dy=0, color=none (move only!)
        .db 162                 ; move dx=-1, dy=0, color=fore (set)
        .db 144                 ; move dx=0, dy=2, color=fore (set)
        .db 172                 ; move dx=1, dy=-1, color=fore (set)
        .db 136                 ; move dx=0, dy=1, color=fore (set)
        .db 168                 ; move dx=1, dy=1, color=fore (set)
        .db 224                 ; move dx=3, dy=0, color=fore (set)
        .db 224                 ; move dx=3, dy=0, color=fore (set)
        .db 160                 ; move dx=1, dy=0, color=fore (set)
        ;; ascii 57: '9'
        .db 32                  ; class(bits 5-7)
        .db 11                  ; width
        .db 11                  ; height
        .db 28                  ; # moves
        .db 11                  ; x origin
        .db 4                   ; y origin
        .db 162                 ; move dx=-1, dy=0, color=fore (set)
        .db 140                 ; move dx=0, dy=-1, color=fore (set)
        .db 172                 ; move dx=1, dy=-1, color=fore (set)
        .db 136                 ; move dx=0, dy=1, color=fore (set)
        .db 214                 ; move dx=-2, dy=-2, color=fore (set)
        .db 226                 ; move dx=-3, dy=0, color=fore (set)
        .db 226                 ; move dx=-3, dy=0, color=fore (set)
        .db 162                 ; move dx=-1, dy=0, color=fore (set)
        .db 210                 ; move dx=-2, dy=2, color=fore (set)
        .db 140                 ; move dx=0, dy=-1, color=fore (set)
        .db 168                 ; move dx=1, dy=1, color=fore (set)
        .db 170                 ; move dx=-1, dy=1, color=fore (set)
        .db 160                 ; move dx=1, dy=0, color=fore (set)
        .db 168                 ; move dx=1, dy=1, color=fore (set)
        .db 224                 ; move dx=3, dy=0, color=fore (set)
        .db 224                 ; move dx=3, dy=0, color=fore (set)
        .db 224                 ; move dx=3, dy=0, color=fore (set)
        .db 136                 ; move dx=0, dy=1, color=fore (set)
        .db 162                 ; move dx=-1, dy=0, color=fore (set)
        .db 170                 ; move dx=-1, dy=1, color=fore (set)
        .db 162                 ; move dx=-1, dy=0, color=fore (set)
        .db 42                  ; move dx=-1, dy=1, color=none (move only!)
        .db 98                  ; move dx=-3, dy=0, color=none (move only!)
        .db 66                  ; move dx=-2, dy=0, color=none (move only!)
        .db 224                 ; move dx=3, dy=0, color=fore (set)
        .db 192                 ; move dx=2, dy=0, color=fore (set)
        ;; ascii 58: ':'
        .db 32                  ; class(bits 5-7)
        .db 1                   ; width
        .db 11                  ; height
        .db 6                   ; # moves
        .db 0                   ; x origin
        .db 4                   ; y origin
        .db 160                 ; move dx=1, dy=0, color=fore (set)
        .db 42                  ; move dx=-1, dy=1, color=none (move only!)
        .db 16                  ; move dx=0, dy=2, color=none (move only!)
        .db 160                 ; move dx=1, dy=0, color=fore (set)
        ;; ascii 59: ';'
        .db 32                  ; class(bits 5-7)
        .db 3                   ; width
        .db 11                  ; height
        .db 8                   ; # moves
        .db 2                   ; x origin
        .db 4                   ; y origin
        .db 160                 ; move dx=1, dy=0, color=fore (set)
        .db 24                  ; move dx=0, dy=3, color=none (move only!)
        .db 162                 ; move dx=-1, dy=0, color=fore (set)
        .db 42                  ; move dx=-1, dy=1, color=none (move only!)
        .db 34                  ; move dx=-1, dy=0, color=none (move only!)
        .db 160                 ; move dx=1, dy=0, color=fore (set)
        ;; ascii 60: '<'
        .db 32                  ; class(bits 5-7)
        .db 7                   ; width
        .db 11                  ; height
        .db 15                  ; # moves
        .db 7                   ; x origin
        .db 1                   ; y origin
        .db 162                 ; move dx=-1, dy=0, color=fore (set)
        .db 170                 ; move dx=-1, dy=1, color=fore (set)
        .db 162                 ; move dx=-1, dy=0, color=fore (set)
        .db 170                 ; move dx=-1, dy=1, color=fore (set)
        .db 162                 ; move dx=-1, dy=0, color=fore (set)
        .db 210                 ; move dx=-2, dy=2, color=fore (set)
        .db 140                 ; move dx=0, dy=-1, color=fore (set)
        .db 208                 ; move dx=2, dy=2, color=fore (set)
        .db 160                 ; move dx=1, dy=0, color=fore (set)
        .db 168                 ; move dx=1, dy=1, color=fore (set)
        .db 160                 ; move dx=1, dy=0, color=fore (set)
        .db 168                 ; move dx=1, dy=1, color=fore (set)
        .db 160                 ; move dx=1, dy=0, color=fore (set)
        ;; ascii 61: '='
        .db 32                  ; class(bits 5-7)
        .db 9                   ; width
        .db 11                  ; height
        .db 9                   ; # moves
        .db 9                   ; x origin
        .db 3                   ; y origin
        .db 226                 ; move dx=-3, dy=0, color=fore (set)
        .db 226                 ; move dx=-3, dy=0, color=fore (set)
        .db 226                 ; move dx=-3, dy=0, color=fore (set)
        .db 24                  ; move dx=0, dy=3, color=none (move only!)
        .db 224                 ; move dx=3, dy=0, color=fore (set)
        .db 224                 ; move dx=3, dy=0, color=fore (set)
        .db 224                 ; move dx=3, dy=0, color=fore (set)
        ;; ascii 62: '>'
        .db 32                  ; class(bits 5-7)
        .db 7                   ; width
        .db 11                  ; height
        .db 16                  ; # moves
        .db 0                   ; x origin
        .db 1                   ; y origin
        .db 160                 ; move dx=1, dy=0, color=fore (set)
        .db 168                 ; move dx=1, dy=1, color=fore (set)
        .db 160                 ; move dx=1, dy=0, color=fore (set)
        .db 168                 ; move dx=1, dy=1, color=fore (set)
        .db 160                 ; move dx=1, dy=0, color=fore (set)
        .db 208                 ; move dx=2, dy=2, color=fore (set)
        .db 140                 ; move dx=0, dy=-1, color=fore (set)
        .db 210                 ; move dx=-2, dy=2, color=fore (set)
        .db 162                 ; move dx=-1, dy=0, color=fore (set)
        .db 170                 ; move dx=-1, dy=1, color=fore (set)
        .db 162                 ; move dx=-1, dy=0, color=fore (set)
        .db 42                  ; move dx=-1, dy=1, color=none (move only!)
        .db 34                  ; move dx=-1, dy=0, color=none (move only!)
        .db 160                 ; move dx=1, dy=0, color=fore (set)
        ;; ascii 63: '?'
        .db 32                  ; class(bits 5-7)
        .db 11                  ; width
        .db 11                  ; height
        .db 18                  ; # moves
        .db 0                   ; x origin
        .db 2                   ; y origin
        .db 160                 ; move dx=1, dy=0, color=fore (set)
        .db 172                 ; move dx=1, dy=-1, color=fore (set)
        .db 224                 ; move dx=3, dy=0, color=fore (set)
        .db 224                 ; move dx=3, dy=0, color=fore (set)
        .db 160                 ; move dx=1, dy=0, color=fore (set)
        .db 168                 ; move dx=1, dy=1, color=fore (set)
        .db 136                 ; move dx=0, dy=1, color=fore (set)
        .db 172                 ; move dx=1, dy=-1, color=fore (set)
        .db 144                 ; move dx=0, dy=2, color=fore (set)
        .db 162                 ; move dx=-1, dy=0, color=fore (set)
        .db 170                 ; move dx=-1, dy=1, color=fore (set)
        .db 226                 ; move dx=-3, dy=0, color=fore (set)
        .db 170                 ; move dx=-1, dy=1, color=fore (set)
        .db 162                 ; move dx=-1, dy=0, color=fore (set)
        .db 16                  ; move dx=0, dy=2, color=none (move only!)
        .db 160                 ; move dx=1, dy=0, color=fore (set)
        ;; ascii 64: '@'
        .db 32                  ; class(bits 5-7)
        .db 17                  ; width
        .db 11                  ; height
        .db 44                  ; # moves
        .db 10                  ; x origin
        .db 4                   ; y origin
        .db 208                 ; move dx=2, dy=2, color=fore (set)
        .db 160                 ; move dx=1, dy=0, color=fore (set)
        .db 168                 ; move dx=1, dy=1, color=fore (set)
        .db 160                 ; move dx=1, dy=0, color=fore (set)
        .db 44                  ; move dx=1, dy=-1, color=none (move only!)
        .db 32                  ; move dx=1, dy=0, color=none (move only!)
        .db 162                 ; move dx=-1, dy=0, color=fore (set)
        .db 174                 ; move dx=-1, dy=-1, color=fore (set)
        .db 140                 ; move dx=0, dy=-1, color=fore (set)
        .db 170                 ; move dx=-1, dy=1, color=fore (set)
        .db 148                 ; move dx=0, dy=-2, color=fore (set)
        .db 172                 ; move dx=1, dy=-1, color=fore (set)
        .db 136                 ; move dx=0, dy=1, color=fore (set)
        .db 214                 ; move dx=-2, dy=-2, color=fore (set)
        .db 226                 ; move dx=-3, dy=0, color=fore (set)
        .db 226                 ; move dx=-3, dy=0, color=fore (set)
        .db 226                 ; move dx=-3, dy=0, color=fore (set)
        .db 170                 ; move dx=-1, dy=1, color=fore (set)
        .db 162                 ; move dx=-1, dy=0, color=fore (set)
        .db 210                 ; move dx=-2, dy=2, color=fore (set)
        .db 140                 ; move dx=0, dy=-1, color=fore (set)
        .db 168                 ; move dx=1, dy=1, color=fore (set)
        .db 170                 ; move dx=-1, dy=1, color=fore (set)
        .db 160                 ; move dx=1, dy=0, color=fore (set)
        .db 170                 ; move dx=-1, dy=1, color=fore (set)
        .db 160                 ; move dx=1, dy=0, color=fore (set)
        .db 168                 ; move dx=1, dy=1, color=fore (set)
        .db 84                  ; move dx=2, dy=-2, color=none (move only!)
        .db 12                  ; move dx=0, dy=-1, color=none (move only!)
        .db 208                 ; move dx=2, dy=2, color=fore (set)
        .db 224                 ; move dx=3, dy=0, color=fore (set)
        .db 212                 ; move dx=2, dy=-2, color=fore (set)
        .db 140                 ; move dx=0, dy=-1, color=fore (set)
        .db 226                 ; move dx=-3, dy=0, color=fore (set)
        .db 194                 ; move dx=-2, dy=0, color=fore (set)
        .db 210                 ; move dx=-2, dy=2, color=fore (set)
        .db 42                  ; move dx=-1, dy=1, color=none (move only!)
        .db 8                   ; move dx=0, dy=1, color=none (move only!)
        .db 168                 ; move dx=1, dy=1, color=fore (set)
        .db 224                 ; move dx=3, dy=0, color=fore (set)
        .db 224                 ; move dx=3, dy=0, color=fore (set)
        .db 224                 ; move dx=3, dy=0, color=fore (set)
        ;; ascii 65: 'A'
        .db 32                  ; class(bits 5-7)
        .db 15                  ; width
        .db 11                  ; height
        .db 31                  ; # moves
        .db 13                  ; x origin
        .db 3                   ; y origin
        .db 170                 ; move dx=-1, dy=1, color=fore (set)
        .db 160                 ; move dx=1, dy=0, color=fore (set)
        .db 214                 ; move dx=-2, dy=-2, color=fore (set)
        .db 162                 ; move dx=-1, dy=0, color=fore (set)
        .db 174                 ; move dx=-1, dy=-1, color=fore (set)
        .db 226                 ; move dx=-3, dy=0, color=fore (set)
        .db 170                 ; move dx=-1, dy=1, color=fore (set)
        .db 162                 ; move dx=-1, dy=0, color=fore (set)
        .db 170                 ; move dx=-1, dy=1, color=fore (set)
        .db 162                 ; move dx=-1, dy=0, color=fore (set)
        .db 168                 ; move dx=1, dy=1, color=fore (set)
        .db 162                 ; move dx=-1, dy=0, color=fore (set)
        .db 170                 ; move dx=-1, dy=1, color=fore (set)
        .db 162                 ; move dx=-1, dy=0, color=fore (set)
        .db 152                 ; move dx=0, dy=3, color=fore (set)
        .db 160                 ; move dx=1, dy=0, color=fore (set)
        .db 148                 ; move dx=0, dy=-2, color=fore (set)
        .db 224                 ; move dx=3, dy=0, color=fore (set)
        .db 224                 ; move dx=3, dy=0, color=fore (set)
        .db 224                 ; move dx=3, dy=0, color=fore (set)
        .db 224                 ; move dx=3, dy=0, color=fore (set)
        .db 160                 ; move dx=1, dy=0, color=fore (set)
        .db 172                 ; move dx=1, dy=-1, color=fore (set)
        .db 162                 ; move dx=-1, dy=0, color=fore (set)
        .db 168                 ; move dx=1, dy=1, color=fore (set)
        .db 170                 ; move dx=-1, dy=1, color=fore (set)
        .db 160                 ; move dx=1, dy=0, color=fore (set)
        .db 170                 ; move dx=-1, dy=1, color=fore (set)
        .db 160                 ; move dx=1, dy=0, color=fore (set)
        ;; ascii 66: 'B'
        .db 32                  ; class(bits 5-7)
        .db 15                  ; width
        .db 11                  ; height
        .db 34                  ; # moves
        .db 3                   ; x origin
        .db 4                   ; y origin
        .db 224                 ; move dx=3, dy=0, color=fore (set)
        .db 224                 ; move dx=3, dy=0, color=fore (set)
        .db 224                 ; move dx=3, dy=0, color=fore (set)
        .db 160                 ; move dx=1, dy=0, color=fore (set)
        .db 168                 ; move dx=1, dy=1, color=fore (set)
        .db 144                 ; move dx=0, dy=2, color=fore (set)
        .db 160                 ; move dx=1, dy=0, color=fore (set)
        .db 148                 ; move dx=0, dy=-2, color=fore (set)
        .db 126                 ; move dx=-3, dy=-3, color=none (move only!)
        .db 34                  ; move dx=-1, dy=0, color=none (move only!)
        .db 170                 ; move dx=-1, dy=1, color=fore (set)
        .db 160                 ; move dx=1, dy=0, color=fore (set)
        .db 214                 ; move dx=-2, dy=-2, color=fore (set)
        .db 226                 ; move dx=-3, dy=0, color=fore (set)
        .db 226                 ; move dx=-3, dy=0, color=fore (set)
        .db 226                 ; move dx=-3, dy=0, color=fore (set)
        .db 144                 ; move dx=0, dy=2, color=fore (set)
        .db 172                 ; move dx=1, dy=-1, color=fore (set)
        .db 136                 ; move dx=0, dy=1, color=fore (set)
        .db 170                 ; move dx=-1, dy=1, color=fore (set)
        .db 192                 ; move dx=2, dy=0, color=fore (set)
        .db 210                 ; move dx=-2, dy=2, color=fore (set)
        .db 140                 ; move dx=0, dy=-1, color=fore (set)
        .db 168                 ; move dx=1, dy=1, color=fore (set)
        .db 170                 ; move dx=-1, dy=1, color=fore (set)
        .db 160                 ; move dx=1, dy=0, color=fore (set)
        .db 170                 ; move dx=-1, dy=1, color=fore (set)
        .db 224                 ; move dx=3, dy=0, color=fore (set)
        .db 224                 ; move dx=3, dy=0, color=fore (set)
        .db 224                 ; move dx=3, dy=0, color=fore (set)
        .db 224                 ; move dx=3, dy=0, color=fore (set)
        .db 160                 ; move dx=1, dy=0, color=fore (set)
        ;; ascii 67: 'C'
        .db 32                  ; class(bits 5-7)
        .db 15                  ; width
        .db 11                  ; height
        .db 26                  ; # moves
        .db 15                  ; x origin
        .db 7                   ; y origin
        .db 162                 ; move dx=-1, dy=0, color=fore (set)
        .db 44                  ; move dx=1, dy=-1, color=none (move only!)
        .db 28                  ; move dx=0, dy=-3, color=none (move only!)
        .db 12                  ; move dx=0, dy=-1, color=none (move only!)
        .db 162                 ; move dx=-1, dy=0, color=fore (set)
        .db 174                 ; move dx=-1, dy=-1, color=fore (set)
        .db 226                 ; move dx=-3, dy=0, color=fore (set)
        .db 226                 ; move dx=-3, dy=0, color=fore (set)
        .db 226                 ; move dx=-3, dy=0, color=fore (set)
        .db 170                 ; move dx=-1, dy=1, color=fore (set)
        .db 162                 ; move dx=-1, dy=0, color=fore (set)
        .db 210                 ; move dx=-2, dy=2, color=fore (set)
        .db 140                 ; move dx=0, dy=-1, color=fore (set)
        .db 168                 ; move dx=1, dy=1, color=fore (set)
        .db 170                 ; move dx=-1, dy=1, color=fore (set)
        .db 160                 ; move dx=1, dy=0, color=fore (set)
        .db 170                 ; move dx=-1, dy=1, color=fore (set)
        .db 160                 ; move dx=1, dy=0, color=fore (set)
        .db 168                 ; move dx=1, dy=1, color=fore (set)
        .db 160                 ; move dx=1, dy=0, color=fore (set)
        .db 168                 ; move dx=1, dy=1, color=fore (set)
        .db 224                 ; move dx=3, dy=0, color=fore (set)
        .db 224                 ; move dx=3, dy=0, color=fore (set)
        .db 224                 ; move dx=3, dy=0, color=fore (set)
        ;; ascii 68: 'D'
        .db 32                  ; class(bits 5-7)
        .db 15                  ; width
        .db 11                  ; height
        .db 28                  ; # moves
        .db 15                  ; x origin
        .db 3                   ; y origin
        .db 152                 ; move dx=0, dy=3, color=fore (set)
        .db 136                 ; move dx=0, dy=1, color=fore (set)
        .db 162                 ; move dx=-1, dy=0, color=fore (set)
        .db 156                 ; move dx=0, dy=-3, color=fore (set)
        .db 140                 ; move dx=0, dy=-1, color=fore (set)
        .db 174                 ; move dx=-1, dy=-1, color=fore (set)
        .db 162                 ; move dx=-1, dy=0, color=fore (set)
        .db 174                 ; move dx=-1, dy=-1, color=fore (set)
        .db 226                 ; move dx=-3, dy=0, color=fore (set)
        .db 226                 ; move dx=-3, dy=0, color=fore (set)
        .db 226                 ; move dx=-3, dy=0, color=fore (set)
        .db 194                 ; move dx=-2, dy=0, color=fore (set)
        .db 144                 ; move dx=0, dy=2, color=fore (set)
        .db 172                 ; move dx=1, dy=-1, color=fore (set)
        .db 144                 ; move dx=0, dy=2, color=fore (set)
        .db 162                 ; move dx=-1, dy=0, color=fore (set)
        .db 144                 ; move dx=0, dy=2, color=fore (set)
        .db 172                 ; move dx=1, dy=-1, color=fore (set)
        .db 144                 ; move dx=0, dy=2, color=fore (set)
        .db 162                 ; move dx=-1, dy=0, color=fore (set)
        .db 136                 ; move dx=0, dy=1, color=fore (set)
        .db 224                 ; move dx=3, dy=0, color=fore (set)
        .db 224                 ; move dx=3, dy=0, color=fore (set)
        .db 224                 ; move dx=3, dy=0, color=fore (set)
        .db 224                 ; move dx=3, dy=0, color=fore (set)
        .db 160                 ; move dx=1, dy=0, color=fore (set)
        ;; ascii 69: 'E'
        .db 32                  ; class(bits 5-7)
        .db 13                  ; width
        .db 11                  ; height
        .db 25                  ; # moves
        .db 1                   ; x origin
        .db 3                   ; y origin
        .db 174                 ; move dx=-1, dy=-1, color=fore (set)
        .db 136                 ; move dx=0, dy=1, color=fore (set)
        .db 212                 ; move dx=2, dy=-2, color=fore (set)
        .db 224                 ; move dx=3, dy=0, color=fore (set)
        .db 224                 ; move dx=3, dy=0, color=fore (set)
        .db 224                 ; move dx=3, dy=0, color=fore (set)
        .db 192                 ; move dx=2, dy=0, color=fore (set)
        .db 82                  ; move dx=-2, dy=2, color=none (move only!)
        .db 8                   ; move dx=0, dy=1, color=none (move only!)
        .db 226                 ; move dx=-3, dy=0, color=fore (set)
        .db 226                 ; move dx=-3, dy=0, color=fore (set)
        .db 226                 ; move dx=-3, dy=0, color=fore (set)
        .db 194                 ; move dx=-2, dy=0, color=fore (set)
        .db 144                 ; move dx=0, dy=2, color=fore (set)
        .db 172                 ; move dx=1, dy=-1, color=fore (set)
        .db 136                 ; move dx=0, dy=1, color=fore (set)
        .db 170                 ; move dx=-1, dy=1, color=fore (set)
        .db 160                 ; move dx=1, dy=0, color=fore (set)
        .db 168                 ; move dx=1, dy=1, color=fore (set)
        .db 224                 ; move dx=3, dy=0, color=fore (set)
        .db 224                 ; move dx=3, dy=0, color=fore (set)
        .db 224                 ; move dx=3, dy=0, color=fore (set)
        .db 192                 ; move dx=2, dy=0, color=fore (set)
        ;; ascii 70: 'F'
        .db 32                  ; class(bits 5-7)
        .db 13                  ; width
        .db 11                  ; height
        .db 21                  ; # moves
        .db 1                   ; x origin
        .db 3                   ; y origin
        .db 174                 ; move dx=-1, dy=-1, color=fore (set)
        .db 136                 ; move dx=0, dy=1, color=fore (set)
        .db 212                 ; move dx=2, dy=-2, color=fore (set)
        .db 224                 ; move dx=3, dy=0, color=fore (set)
        .db 224                 ; move dx=3, dy=0, color=fore (set)
        .db 224                 ; move dx=3, dy=0, color=fore (set)
        .db 192                 ; move dx=2, dy=0, color=fore (set)
        .db 82                  ; move dx=-2, dy=2, color=none (move only!)
        .db 8                   ; move dx=0, dy=1, color=none (move only!)
        .db 226                 ; move dx=-3, dy=0, color=fore (set)
        .db 226                 ; move dx=-3, dy=0, color=fore (set)
        .db 226                 ; move dx=-3, dy=0, color=fore (set)
        .db 194                 ; move dx=-2, dy=0, color=fore (set)
        .db 144                 ; move dx=0, dy=2, color=fore (set)
        .db 172                 ; move dx=1, dy=-1, color=fore (set)
        .db 144                 ; move dx=0, dy=2, color=fore (set)
        .db 162                 ; move dx=-1, dy=0, color=fore (set)
        .db 136                 ; move dx=0, dy=1, color=fore (set)
        .db 160                 ; move dx=1, dy=0, color=fore (set)
        ;; ascii 71: 'G'
        .db 32                  ; class(bits 5-7)
        .db 15                  ; width
        .db 11                  ; height
        .db 28                  ; # moves
        .db 15                  ; x origin
        .db 7                   ; y origin
        .db 162                 ; move dx=-1, dy=0, color=fore (set)
        .db 172                 ; move dx=1, dy=-1, color=fore (set)
        .db 162                 ; move dx=-1, dy=0, color=fore (set)
        .db 172                 ; move dx=1, dy=-1, color=fore (set)
        .db 162                 ; move dx=-1, dy=0, color=fore (set)
        .db 172                 ; move dx=1, dy=-1, color=fore (set)
        .db 226                 ; move dx=-3, dy=0, color=fore (set)
        .db 194                 ; move dx=-2, dy=0, color=fore (set)
        .db 124                 ; move dx=3, dy=-3, color=none (move only!)
        .db 226                 ; move dx=-3, dy=0, color=fore (set)
        .db 226                 ; move dx=-3, dy=0, color=fore (set)
        .db 226                 ; move dx=-3, dy=0, color=fore (set)
        .db 170                 ; move dx=-1, dy=1, color=fore (set)
        .db 162                 ; move dx=-1, dy=0, color=fore (set)
        .db 170                 ; move dx=-1, dy=1, color=fore (set)
        .db 136                 ; move dx=0, dy=1, color=fore (set)
        .db 174                 ; move dx=-1, dy=-1, color=fore (set)
        .db 152                 ; move dx=0, dy=3, color=fore (set)
        .db 172                 ; move dx=1, dy=-1, color=fore (set)
        .db 136                 ; move dx=0, dy=1, color=fore (set)
        .db 168                 ; move dx=1, dy=1, color=fore (set)
        .db 160                 ; move dx=1, dy=0, color=fore (set)
        .db 168                 ; move dx=1, dy=1, color=fore (set)
        .db 224                 ; move dx=3, dy=0, color=fore (set)
        .db 224                 ; move dx=3, dy=0, color=fore (set)
        .db 224                 ; move dx=3, dy=0, color=fore (set)
        ;; ascii 72: 'H'
        .db 32                  ; class(bits 5-7)
        .db 13                  ; width
        .db 11                  ; height
        .db 29                  ; # moves
        .db 1                   ; x origin
        .db 3                   ; y origin
        .db 148                 ; move dx=0, dy=-2, color=fore (set)
        .db 162                 ; move dx=-1, dy=0, color=fore (set)
        .db 152                 ; move dx=0, dy=3, color=fore (set)
        .db 152                 ; move dx=0, dy=3, color=fore (set)
        .db 136                 ; move dx=0, dy=1, color=fore (set)
        .db 160                 ; move dx=1, dy=0, color=fore (set)
        .db 156                 ; move dx=0, dy=-3, color=fore (set)
        .db 140                 ; move dx=0, dy=-1, color=fore (set)
        .db 224                 ; move dx=3, dy=0, color=fore (set)
        .db 224                 ; move dx=3, dy=0, color=fore (set)
        .db 224                 ; move dx=3, dy=0, color=fore (set)
        .db 160                 ; move dx=1, dy=0, color=fore (set)
        .db 212                 ; move dx=2, dy=-2, color=fore (set)
        .db 174                 ; move dx=-1, dy=-1, color=fore (set)
        .db 160                 ; move dx=1, dy=0, color=fore (set)
        .db 170                 ; move dx=-1, dy=1, color=fore (set)
        .db 168                 ; move dx=1, dy=1, color=fore (set)
        .db 170                 ; move dx=-1, dy=1, color=fore (set)
        .db 160                 ; move dx=1, dy=0, color=fore (set)
        .db 170                 ; move dx=-1, dy=1, color=fore (set)
        .db 160                 ; move dx=1, dy=0, color=fore (set)
        .db 170                 ; move dx=-1, dy=1, color=fore (set)
        .db 160                 ; move dx=1, dy=0, color=fore (set)
        .db 170                 ; move dx=-1, dy=1, color=fore (set)
        .db 160                 ; move dx=1, dy=0, color=fore (set)
        .db 170                 ; move dx=-1, dy=1, color=fore (set)
        .db 160                 ; move dx=1, dy=0, color=fore (set)
        ;; ascii 73: 'I'
        .db 32                  ; class(bits 5-7)
        .db 9                   ; width
        .db 11                  ; height
        .db 20                  ; # moves
        .db 9                   ; x origin
        .db 1                   ; y origin
        .db 226                 ; move dx=-3, dy=0, color=fore (set)
        .db 226                 ; move dx=-3, dy=0, color=fore (set)
        .db 226                 ; move dx=-3, dy=0, color=fore (set)
        .db 40                  ; move dx=1, dy=1, color=none (move only!)
        .db 96                  ; move dx=3, dy=0, color=none (move only!)
        .db 136                 ; move dx=0, dy=1, color=fore (set)
        .db 172                 ; move dx=1, dy=-1, color=fore (set)
        .db 144                 ; move dx=0, dy=2, color=fore (set)
        .db 162                 ; move dx=-1, dy=0, color=fore (set)
        .db 144                 ; move dx=0, dy=2, color=fore (set)
        .db 172                 ; move dx=1, dy=-1, color=fore (set)
        .db 144                 ; move dx=0, dy=2, color=fore (set)
        .db 162                 ; move dx=-1, dy=0, color=fore (set)
        .db 42                  ; move dx=-1, dy=1, color=none (move only!)
        .db 98                  ; move dx=-3, dy=0, color=none (move only!)
        .db 224                 ; move dx=3, dy=0, color=fore (set)
        .db 224                 ; move dx=3, dy=0, color=fore (set)
        .db 224                 ; move dx=3, dy=0, color=fore (set)
        ;; ascii 74: 'J'
        .db 32                  ; class(bits 5-7)
        .db 11                  ; width
        .db 11                  ; height
        .db 25                  ; # moves
        .db 11                  ; x origin
        .db 7                   ; y origin
        .db 162                 ; move dx=-1, dy=0, color=fore (set)
        .db 172                 ; move dx=1, dy=-1, color=fore (set)
        .db 162                 ; move dx=-1, dy=0, color=fore (set)
        .db 172                 ; move dx=1, dy=-1, color=fore (set)
        .db 162                 ; move dx=-1, dy=0, color=fore (set)
        .db 172                 ; move dx=1, dy=-1, color=fore (set)
        .db 162                 ; move dx=-1, dy=0, color=fore (set)
        .db 172                 ; move dx=1, dy=-1, color=fore (set)
        .db 162                 ; move dx=-1, dy=0, color=fore (set)
        .db 172                 ; move dx=1, dy=-1, color=fore (set)
        .db 162                 ; move dx=-1, dy=0, color=fore (set)
        .db 172                 ; move dx=1, dy=-1, color=fore (set)
        .db 226                 ; move dx=-3, dy=0, color=fore (set)
        .db 226                 ; move dx=-3, dy=0, color=fore (set)
        .db 226                 ; move dx=-3, dy=0, color=fore (set)
        .db 82                  ; move dx=-2, dy=2, color=none (move only!)
        .db 24                  ; move dx=0, dy=3, color=none (move only!)
        .db 8                   ; move dx=0, dy=1, color=none (move only!)
        .db 160                 ; move dx=1, dy=0, color=fore (set)
        .db 168                 ; move dx=1, dy=1, color=fore (set)
        .db 224                 ; move dx=3, dy=0, color=fore (set)
        .db 224                 ; move dx=3, dy=0, color=fore (set)
        .db 160                 ; move dx=1, dy=0, color=fore (set)
        ;; ascii 75: 'K'
        .db 32                  ; class(bits 5-7)
        .db 11                  ; width
        .db 11                  ; height
        .db 25                  ; # moves
        .db 1                   ; x origin
        .db 3                   ; y origin
        .db 148                 ; move dx=0, dy=-2, color=fore (set)
        .db 162                 ; move dx=-1, dy=0, color=fore (set)
        .db 152                 ; move dx=0, dy=3, color=fore (set)
        .db 152                 ; move dx=0, dy=3, color=fore (set)
        .db 136                 ; move dx=0, dy=1, color=fore (set)
        .db 160                 ; move dx=1, dy=0, color=fore (set)
        .db 156                 ; move dx=0, dy=-3, color=fore (set)
        .db 140                 ; move dx=0, dy=-1, color=fore (set)
        .db 224                 ; move dx=3, dy=0, color=fore (set)
        .db 224                 ; move dx=3, dy=0, color=fore (set)
        .db 172                 ; move dx=1, dy=-1, color=fore (set)
        .db 160                 ; move dx=1, dy=0, color=fore (set)
        .db 212                 ; move dx=2, dy=-2, color=fore (set)
        .db 162                 ; move dx=-1, dy=0, color=fore (set)
        .db 168                 ; move dx=1, dy=1, color=fore (set)
        .db 122                 ; move dx=-3, dy=3, color=none (move only!)
        .db 160                 ; move dx=1, dy=0, color=fore (set)
        .db 168                 ; move dx=1, dy=1, color=fore (set)
        .db 160                 ; move dx=1, dy=0, color=fore (set)
        .db 170                 ; move dx=-1, dy=1, color=fore (set)
        .db 160                 ; move dx=1, dy=0, color=fore (set)
        .db 170                 ; move dx=-1, dy=1, color=fore (set)
        .db 160                 ; move dx=1, dy=0, color=fore (set)
        ;; ascii 76: 'L'
        .db 32                  ; class(bits 5-7)
        .db 11                  ; width
        .db 11                  ; height
        .db 20                  ; # moves
        .db 0                   ; x origin
        .db 1                   ; y origin
        .db 160                 ; move dx=1, dy=0, color=fore (set)
        .db 170                 ; move dx=-1, dy=1, color=fore (set)
        .db 160                 ; move dx=1, dy=0, color=fore (set)
        .db 170                 ; move dx=-1, dy=1, color=fore (set)
        .db 160                 ; move dx=1, dy=0, color=fore (set)
        .db 170                 ; move dx=-1, dy=1, color=fore (set)
        .db 160                 ; move dx=1, dy=0, color=fore (set)
        .db 170                 ; move dx=-1, dy=1, color=fore (set)
        .db 160                 ; move dx=1, dy=0, color=fore (set)
        .db 170                 ; move dx=-1, dy=1, color=fore (set)
        .db 160                 ; move dx=1, dy=0, color=fore (set)
        .db 170                 ; move dx=-1, dy=1, color=fore (set)
        .db 160                 ; move dx=1, dy=0, color=fore (set)
        .db 170                 ; move dx=-1, dy=1, color=fore (set)
        .db 224                 ; move dx=3, dy=0, color=fore (set)
        .db 224                 ; move dx=3, dy=0, color=fore (set)
        .db 224                 ; move dx=3, dy=0, color=fore (set)
        .db 192                 ; move dx=2, dy=0, color=fore (set)
        ;; ascii 77: 'M'
        .db 32                  ; class(bits 5-7)
        .db 17                  ; width
        .db 11                  ; height
        .db 35                  ; # moves
        .db 1                   ; x origin
        .db 2                   ; y origin
        .db 152                 ; move dx=0, dy=3, color=fore (set)
        .db 152                 ; move dx=0, dy=3, color=fore (set)
        .db 162                 ; move dx=-1, dy=0, color=fore (set)
        .db 156                 ; move dx=0, dy=-3, color=fore (set)
        .db 156                 ; move dx=0, dy=-3, color=fore (set)
        .db 140                 ; move dx=0, dy=-1, color=fore (set)
        .db 224                 ; move dx=3, dy=0, color=fore (set)
        .db 168                 ; move dx=1, dy=1, color=fore (set)
        .db 160                 ; move dx=1, dy=0, color=fore (set)
        .db 168                 ; move dx=1, dy=1, color=fore (set)
        .db 136                 ; move dx=0, dy=1, color=fore (set)
        .db 172                 ; move dx=1, dy=-1, color=fore (set)
        .db 136                 ; move dx=0, dy=1, color=fore (set)
        .db 208                 ; move dx=2, dy=2, color=fore (set)
        .db 162                 ; move dx=-1, dy=0, color=fore (set)
        .db 212                 ; move dx=2, dy=-2, color=fore (set)
        .db 160                 ; move dx=1, dy=0, color=fore (set)
        .db 174                 ; move dx=-1, dy=-1, color=fore (set)
        .db 160                 ; move dx=1, dy=0, color=fore (set)
        .db 172                 ; move dx=1, dy=-1, color=fore (set)
        .db 160                 ; move dx=1, dy=0, color=fore (set)
        .db 172                 ; move dx=1, dy=-1, color=fore (set)
        .db 224                 ; move dx=3, dy=0, color=fore (set)
        .db 152                 ; move dx=0, dy=3, color=fore (set)
        .db 136                 ; move dx=0, dy=1, color=fore (set)
        .db 46                  ; move dx=-1, dy=-1, color=none (move only!)
        .db 20                  ; move dx=0, dy=-2, color=none (move only!)
        .db 152                 ; move dx=0, dy=3, color=fore (set)
        .db 144                 ; move dx=0, dy=2, color=fore (set)
        .db 172                 ; move dx=1, dy=-1, color=fore (set)
        .db 136                 ; move dx=0, dy=1, color=fore (set)
        .db 170                 ; move dx=-1, dy=1, color=fore (set)
        .db 160                 ; move dx=1, dy=0, color=fore (set)
        ;; ascii 78: 'N'
        .db 32                  ; class(bits 5-7)
        .db 13                  ; width
        .db 11                  ; height
        .db 28                  ; # moves
        .db 1                   ; x origin
        .db 2                   ; y origin
        .db 152                 ; move dx=0, dy=3, color=fore (set)
        .db 152                 ; move dx=0, dy=3, color=fore (set)
        .db 162                 ; move dx=-1, dy=0, color=fore (set)
        .db 156                 ; move dx=0, dy=-3, color=fore (set)
        .db 156                 ; move dx=0, dy=-3, color=fore (set)
        .db 140                 ; move dx=0, dy=-1, color=fore (set)
        .db 224                 ; move dx=3, dy=0, color=fore (set)
        .db 168                 ; move dx=1, dy=1, color=fore (set)
        .db 160                 ; move dx=1, dy=0, color=fore (set)
        .db 168                 ; move dx=1, dy=1, color=fore (set)
        .db 160                 ; move dx=1, dy=0, color=fore (set)
        .db 170                 ; move dx=-1, dy=1, color=fore (set)
        .db 160                 ; move dx=1, dy=0, color=fore (set)
        .db 208                 ; move dx=2, dy=2, color=fore (set)
        .db 162                 ; move dx=-1, dy=0, color=fore (set)
        .db 172                 ; move dx=1, dy=-1, color=fore (set)
        .db 40                  ; move dx=1, dy=1, color=none (move only!)
        .db 64                  ; move dx=2, dy=0, color=none (move only!)
        .db 156                 ; move dx=0, dy=-3, color=fore (set)
        .db 148                 ; move dx=0, dy=-2, color=fore (set)
        .db 160                 ; move dx=1, dy=0, color=fore (set)
        .db 152                 ; move dx=0, dy=3, color=fore (set)
        .db 152                 ; move dx=0, dy=3, color=fore (set)
        .db 226                 ; move dx=-3, dy=0, color=fore (set)
        .db 136                 ; move dx=0, dy=1, color=fore (set)
        .db 224                 ; move dx=3, dy=0, color=fore (set)
        ;; ascii 79: 'O'
        .db 32                  ; class(bits 5-7)
        .db 15                  ; width
        .db 11                  ; height
        .db 30                  ; # moves
        .db 12                  ; x origin
        .db 7                   ; y origin
        .db 160                 ; move dx=1, dy=0, color=fore (set)
        .db 212                 ; move dx=2, dy=-2, color=fore (set)
        .db 136                 ; move dx=0, dy=1, color=fore (set)
        .db 174                 ; move dx=-1, dy=-1, color=fore (set)
        .db 140                 ; move dx=0, dy=-1, color=fore (set)
        .db 172                 ; move dx=1, dy=-1, color=fore (set)
        .db 136                 ; move dx=0, dy=1, color=fore (set)
        .db 214                 ; move dx=-2, dy=-2, color=fore (set)
        .db 162                 ; move dx=-1, dy=0, color=fore (set)
        .db 174                 ; move dx=-1, dy=-1, color=fore (set)
        .db 226                 ; move dx=-3, dy=0, color=fore (set)
        .db 226                 ; move dx=-3, dy=0, color=fore (set)
        .db 162                 ; move dx=-1, dy=0, color=fore (set)
        .db 170                 ; move dx=-1, dy=1, color=fore (set)
        .db 162                 ; move dx=-1, dy=0, color=fore (set)
        .db 210                 ; move dx=-2, dy=2, color=fore (set)
        .db 140                 ; move dx=0, dy=-1, color=fore (set)
        .db 168                 ; move dx=1, dy=1, color=fore (set)
        .db 170                 ; move dx=-1, dy=1, color=fore (set)
        .db 160                 ; move dx=1, dy=0, color=fore (set)
        .db 170                 ; move dx=-1, dy=1, color=fore (set)
        .db 160                 ; move dx=1, dy=0, color=fore (set)
        .db 168                 ; move dx=1, dy=1, color=fore (set)
        .db 160                 ; move dx=1, dy=0, color=fore (set)
        .db 168                 ; move dx=1, dy=1, color=fore (set)
        .db 224                 ; move dx=3, dy=0, color=fore (set)
        .db 224                 ; move dx=3, dy=0, color=fore (set)
        .db 160                 ; move dx=1, dy=0, color=fore (set)
        ;; ascii 80: 'P'
        .db 32                  ; class(bits 5-7)
        .db 13                  ; width
        .db 11                  ; height
        .db 22                  ; # moves
        .db 1                   ; x origin
        .db 3                   ; y origin
        .db 140                 ; move dx=0, dy=-1, color=fore (set)
        .db 170                 ; move dx=-1, dy=1, color=fore (set)
        .db 148                 ; move dx=0, dy=-2, color=fore (set)
        .db 224                 ; move dx=3, dy=0, color=fore (set)
        .db 224                 ; move dx=3, dy=0, color=fore (set)
        .db 224                 ; move dx=3, dy=0, color=fore (set)
        .db 192                 ; move dx=2, dy=0, color=fore (set)
        .db 208                 ; move dx=2, dy=2, color=fore (set)
        .db 140                 ; move dx=0, dy=-1, color=fore (set)
        .db 210                 ; move dx=-2, dy=2, color=fore (set)
        .db 226                 ; move dx=-3, dy=0, color=fore (set)
        .db 226                 ; move dx=-3, dy=0, color=fore (set)
        .db 226                 ; move dx=-3, dy=0, color=fore (set)
        .db 194                 ; move dx=-2, dy=0, color=fore (set)
        .db 144                 ; move dx=0, dy=2, color=fore (set)
        .db 172                 ; move dx=1, dy=-1, color=fore (set)
        .db 144                 ; move dx=0, dy=2, color=fore (set)
        .db 162                 ; move dx=-1, dy=0, color=fore (set)
        .db 136                 ; move dx=0, dy=1, color=fore (set)
        .db 160                 ; move dx=1, dy=0, color=fore (set)
        ;; ascii 81: 'Q'
        .db 32                  ; class(bits 5-7)
        .db 17                  ; width
        .db 11                  ; height
        .db 38                  ; # moves
        .db 8                   ; x origin
        .db 6                   ; y origin
        .db 224                 ; move dx=3, dy=0, color=fore (set)
        .db 168                 ; move dx=1, dy=1, color=fore (set)
        .db 160                 ; move dx=1, dy=0, color=fore (set)
        .db 42                  ; move dx=-1, dy=1, color=none (move only!)
        .db 34                  ; move dx=-1, dy=0, color=none (move only!)
        .db 226                 ; move dx=-3, dy=0, color=fore (set)
        .db 226                 ; move dx=-3, dy=0, color=fore (set)
        .db 162                 ; move dx=-1, dy=0, color=fore (set)
        .db 174                 ; move dx=-1, dy=-1, color=fore (set)
        .db 162                 ; move dx=-1, dy=0, color=fore (set)
        .db 174                 ; move dx=-1, dy=-1, color=fore (set)
        .db 162                 ; move dx=-1, dy=0, color=fore (set)
        .db 172                 ; move dx=1, dy=-1, color=fore (set)
        .db 140                 ; move dx=0, dy=-1, color=fore (set)
        .db 170                 ; move dx=-1, dy=1, color=fore (set)
        .db 148                 ; move dx=0, dy=-2, color=fore (set)
        .db 160                 ; move dx=1, dy=0, color=fore (set)
        .db 172                 ; move dx=1, dy=-1, color=fore (set)
        .db 160                 ; move dx=1, dy=0, color=fore (set)
        .db 172                 ; move dx=1, dy=-1, color=fore (set)
        .db 224                 ; move dx=3, dy=0, color=fore (set)
        .db 224                 ; move dx=3, dy=0, color=fore (set)
        .db 160                 ; move dx=1, dy=0, color=fore (set)
        .db 168                 ; move dx=1, dy=1, color=fore (set)
        .db 160                 ; move dx=1, dy=0, color=fore (set)
        .db 168                 ; move dx=1, dy=1, color=fore (set)
        .db 160                 ; move dx=1, dy=0, color=fore (set)
        .db 170                 ; move dx=-1, dy=1, color=fore (set)
        .db 160                 ; move dx=1, dy=0, color=fore (set)
        .db 170                 ; move dx=-1, dy=1, color=fore (set)
        .db 160                 ; move dx=1, dy=0, color=fore (set)
        .db 170                 ; move dx=-1, dy=1, color=fore (set)
        .db 160                 ; move dx=1, dy=0, color=fore (set)
        .db 42                  ; move dx=-1, dy=1, color=none (move only!)
        .db 8                   ; move dx=0, dy=1, color=none (move only!)
        .db 224                 ; move dx=3, dy=0, color=fore (set)
        ;; ascii 82: 'R'
        .db 32                  ; class(bits 5-7)
        .db 13                  ; width
        .db 11                  ; height
        .db 30                  ; # moves
        .db 13                  ; x origin
        .db 2                   ; y origin
        .db 170                 ; move dx=-1, dy=1, color=fore (set)
        .db 160                 ; move dx=1, dy=0, color=fore (set)
        .db 214                 ; move dx=-2, dy=-2, color=fore (set)
        .db 226                 ; move dx=-3, dy=0, color=fore (set)
        .db 226                 ; move dx=-3, dy=0, color=fore (set)
        .db 226                 ; move dx=-3, dy=0, color=fore (set)
        .db 194                 ; move dx=-2, dy=0, color=fore (set)
        .db 144                 ; move dx=0, dy=2, color=fore (set)
        .db 172                 ; move dx=1, dy=-1, color=fore (set)
        .db 144                 ; move dx=0, dy=2, color=fore (set)
        .db 162                 ; move dx=-1, dy=0, color=fore (set)
        .db 152                 ; move dx=0, dy=3, color=fore (set)
        .db 136                 ; move dx=0, dy=1, color=fore (set)
        .db 160                 ; move dx=1, dy=0, color=fore (set)
        .db 156                 ; move dx=0, dy=-3, color=fore (set)
        .db 172                 ; move dx=1, dy=-1, color=fore (set)
        .db 224                 ; move dx=3, dy=0, color=fore (set)
        .db 224                 ; move dx=3, dy=0, color=fore (set)
        .db 224                 ; move dx=3, dy=0, color=fore (set)
        .db 42                  ; move dx=-1, dy=1, color=none (move only!)
        .db 66                  ; move dx=-2, dy=0, color=none (move only!)
        .db 160                 ; move dx=1, dy=0, color=fore (set)
        .db 168                 ; move dx=1, dy=1, color=fore (set)
        .db 160                 ; move dx=1, dy=0, color=fore (set)
        .db 168                 ; move dx=1, dy=1, color=fore (set)
        .db 160                 ; move dx=1, dy=0, color=fore (set)
        .db 170                 ; move dx=-1, dy=1, color=fore (set)
        .db 160                 ; move dx=1, dy=0, color=fore (set)
        ;; ascii 83: 'S'
        .db 32                  ; class(bits 5-7)
        .db 15                  ; width
        .db 11                  ; height
        .db 30                  ; # moves
        .db 15                  ; x origin
        .db 2                   ; y origin
        .db 162                 ; move dx=-1, dy=0, color=fore (set)
        .db 174                 ; move dx=-1, dy=-1, color=fore (set)
        .db 226                 ; move dx=-3, dy=0, color=fore (set)
        .db 226                 ; move dx=-3, dy=0, color=fore (set)
        .db 226                 ; move dx=-3, dy=0, color=fore (set)
        .db 194                 ; move dx=-2, dy=0, color=fore (set)
        .db 210                 ; move dx=-2, dy=2, color=fore (set)
        .db 140                 ; move dx=0, dy=-1, color=fore (set)
        .db 208                 ; move dx=2, dy=2, color=fore (set)
        .db 224                 ; move dx=3, dy=0, color=fore (set)
        .db 224                 ; move dx=3, dy=0, color=fore (set)
        .db 224                 ; move dx=3, dy=0, color=fore (set)
        .db 168                 ; move dx=1, dy=1, color=fore (set)
        .db 160                 ; move dx=1, dy=0, color=fore (set)
        .db 208                 ; move dx=2, dy=2, color=fore (set)
        .db 140                 ; move dx=0, dy=-1, color=fore (set)
        .db 170                 ; move dx=-1, dy=1, color=fore (set)
        .db 98                  ; move dx=-3, dy=0, color=none (move only!)
        .db 98                  ; move dx=-3, dy=0, color=none (move only!)
        .db 98                  ; move dx=-3, dy=0, color=none (move only!)
        .db 98                  ; move dx=-3, dy=0, color=none (move only!)
        .db 66                  ; move dx=-2, dy=0, color=none (move only!)
        .db 160                 ; move dx=1, dy=0, color=fore (set)
        .db 168                 ; move dx=1, dy=1, color=fore (set)
        .db 224                 ; move dx=3, dy=0, color=fore (set)
        .db 224                 ; move dx=3, dy=0, color=fore (set)
        .db 224                 ; move dx=3, dy=0, color=fore (set)
        .db 192                 ; move dx=2, dy=0, color=fore (set)
        ;; ascii 84: 'T'
        .db 32                  ; class(bits 5-7)
        .db 17                  ; width
        .db 11                  ; height
        .db 25                  ; # moves
        .db 17                  ; x origin
        .db 1                   ; y origin
        .db 226                 ; move dx=-3, dy=0, color=fore (set)
        .db 226                 ; move dx=-3, dy=0, color=fore (set)
        .db 226                 ; move dx=-3, dy=0, color=fore (set)
        .db 226                 ; move dx=-3, dy=0, color=fore (set)
        .db 226                 ; move dx=-3, dy=0, color=fore (set)
        .db 194                 ; move dx=-2, dy=0, color=fore (set)
        .db 40                  ; move dx=1, dy=1, color=none (move only!)
        .db 96                  ; move dx=3, dy=0, color=none (move only!)
        .db 96                  ; move dx=3, dy=0, color=none (move only!)
        .db 32                  ; move dx=1, dy=0, color=none (move only!)
        .db 160                 ; move dx=1, dy=0, color=fore (set)
        .db 170                 ; move dx=-1, dy=1, color=fore (set)
        .db 160                 ; move dx=1, dy=0, color=fore (set)
        .db 170                 ; move dx=-1, dy=1, color=fore (set)
        .db 160                 ; move dx=1, dy=0, color=fore (set)
        .db 170                 ; move dx=-1, dy=1, color=fore (set)
        .db 160                 ; move dx=1, dy=0, color=fore (set)
        .db 170                 ; move dx=-1, dy=1, color=fore (set)
        .db 160                 ; move dx=1, dy=0, color=fore (set)
        .db 170                 ; move dx=-1, dy=1, color=fore (set)
        .db 160                 ; move dx=1, dy=0, color=fore (set)
        .db 170                 ; move dx=-1, dy=1, color=fore (set)
        .db 160                 ; move dx=1, dy=0, color=fore (set)
        ;; ascii 85: 'U'
        .db 32                  ; class(bits 5-7)
        .db 15                  ; width
        .db 11                  ; height
        .db 30                  ; # moves
        .db 14                  ; x origin
        .db 1                   ; y origin
        .db 136                 ; move dx=0, dy=1, color=fore (set)
        .db 172                 ; move dx=1, dy=-1, color=fore (set)
        .db 144                 ; move dx=0, dy=2, color=fore (set)
        .db 162                 ; move dx=-1, dy=0, color=fore (set)
        .db 144                 ; move dx=0, dy=2, color=fore (set)
        .db 172                 ; move dx=1, dy=-1, color=fore (set)
        .db 144                 ; move dx=0, dy=2, color=fore (set)
        .db 162                 ; move dx=-1, dy=0, color=fore (set)
        .db 170                 ; move dx=-1, dy=1, color=fore (set)
        .db 162                 ; move dx=-1, dy=0, color=fore (set)
        .db 126                 ; move dx=-3, dy=-3, color=none (move only!)
        .db 126                 ; move dx=-3, dy=-3, color=none (move only!)
        .db 98                  ; move dx=-3, dy=0, color=none (move only!)
        .db 66                  ; move dx=-2, dy=0, color=none (move only!)
        .db 162                 ; move dx=-1, dy=0, color=fore (set)
        .db 144                 ; move dx=0, dy=2, color=fore (set)
        .db 172                 ; move dx=1, dy=-1, color=fore (set)
        .db 144                 ; move dx=0, dy=2, color=fore (set)
        .db 162                 ; move dx=-1, dy=0, color=fore (set)
        .db 144                 ; move dx=0, dy=2, color=fore (set)
        .db 172                 ; move dx=1, dy=-1, color=fore (set)
        .db 136                 ; move dx=0, dy=1, color=fore (set)
        .db 168                 ; move dx=1, dy=1, color=fore (set)
        .db 160                 ; move dx=1, dy=0, color=fore (set)
        .db 168                 ; move dx=1, dy=1, color=fore (set)
        .db 224                 ; move dx=3, dy=0, color=fore (set)
        .db 224                 ; move dx=3, dy=0, color=fore (set)
        .db 160                 ; move dx=1, dy=0, color=fore (set)
        ;; ascii 86: 'V'
        .db 32                  ; class(bits 5-7)
        .db 15                  ; width
        .db 11                  ; height
        .db 28                  ; # moves
        .db 15                  ; x origin
        .db 4                   ; y origin
        .db 156                 ; move dx=0, dy=-3, color=fore (set)
        .db 162                 ; move dx=-1, dy=0, color=fore (set)
        .db 152                 ; move dx=0, dy=3, color=fore (set)
        .db 170                 ; move dx=-1, dy=1, color=fore (set)
        .db 162                 ; move dx=-1, dy=0, color=fore (set)
        .db 168                 ; move dx=1, dy=1, color=fore (set)
        .db 162                 ; move dx=-1, dy=0, color=fore (set)
        .db 170                 ; move dx=-1, dy=1, color=fore (set)
        .db 162                 ; move dx=-1, dy=0, color=fore (set)
        .db 126                 ; move dx=-3, dy=-3, color=none (move only!)
        .db 126                 ; move dx=-3, dy=-3, color=none (move only!)
        .db 98                  ; move dx=-3, dy=0, color=none (move only!)
        .db 162                 ; move dx=-1, dy=0, color=fore (set)
        .db 144                 ; move dx=0, dy=2, color=fore (set)
        .db 172                 ; move dx=1, dy=-1, color=fore (set)
        .db 136                 ; move dx=0, dy=1, color=fore (set)
        .db 170                 ; move dx=-1, dy=1, color=fore (set)
        .db 160                 ; move dx=1, dy=0, color=fore (set)
        .db 168                 ; move dx=1, dy=1, color=fore (set)
        .db 160                 ; move dx=1, dy=0, color=fore (set)
        .db 170                 ; move dx=-1, dy=1, color=fore (set)
        .db 160                 ; move dx=1, dy=0, color=fore (set)
        .db 168                 ; move dx=1, dy=1, color=fore (set)
        .db 160                 ; move dx=1, dy=0, color=fore (set)
        .db 168                 ; move dx=1, dy=1, color=fore (set)
        .db 224                 ; move dx=3, dy=0, color=fore (set)
        ;; ascii 87: 'W'
        .db 32                  ; class(bits 5-7)
        .db 17                  ; width
        .db 11                  ; height
        .db 32                  ; # moves
        .db 0                   ; x origin
        .db 1                   ; y origin
        .db 160                 ; move dx=1, dy=0, color=fore (set)
        .db 170                 ; move dx=-1, dy=1, color=fore (set)
        .db 160                 ; move dx=1, dy=0, color=fore (set)
        .db 170                 ; move dx=-1, dy=1, color=fore (set)
        .db 160                 ; move dx=1, dy=0, color=fore (set)
        .db 170                 ; move dx=-1, dy=1, color=fore (set)
        .db 160                 ; move dx=1, dy=0, color=fore (set)
        .db 168                 ; move dx=1, dy=1, color=fore (set)
        .db 160                 ; move dx=1, dy=0, color=fore (set)
        .db 170                 ; move dx=-1, dy=1, color=fore (set)
        .db 160                 ; move dx=1, dy=0, color=fore (set)
        .db 168                 ; move dx=1, dy=1, color=fore (set)
        .db 160                 ; move dx=1, dy=0, color=fore (set)
        .db 168                 ; move dx=1, dy=1, color=fore (set)
        .db 160                 ; move dx=1, dy=0, color=fore (set)
        .db 172                 ; move dx=1, dy=-1, color=fore (set)
        .db 160                 ; move dx=1, dy=0, color=fore (set)
        .db 212                 ; move dx=2, dy=-2, color=fore (set)
        .db 174                 ; move dx=-1, dy=-1, color=fore (set)
        .db 172                 ; move dx=1, dy=-1, color=fore (set)
        .db 162                 ; move dx=-1, dy=0, color=fore (set)
        .db 168                 ; move dx=1, dy=1, color=fore (set)
        .db 170                 ; move dx=-1, dy=1, color=fore (set)
        .db 208                 ; move dx=2, dy=2, color=fore (set)
        .db 160                 ; move dx=1, dy=0, color=fore (set)
        .db 168                 ; move dx=1, dy=1, color=fore (set)
        .db 44                  ; move dx=1, dy=-1, color=none (move only!)
        .db 64                  ; move dx=2, dy=0, color=none (move only!)
        .db 162                 ; move dx=-1, dy=0, color=fore (set)
        .db 170                 ; move dx=-1, dy=1, color=fore (set)
        ;; ascii 88: 'X'
        .db 32                  ; class(bits 5-7)
        .db 19                  ; width
        .db 11                  ; height
        .db 41                  ; # moves
        .db 19                  ; x origin
        .db 1                   ; y origin
        .db 162                 ; move dx=-1, dy=0, color=fore (set)
        .db 170                 ; move dx=-1, dy=1, color=fore (set)
        .db 162                 ; move dx=-1, dy=0, color=fore (set)
        .db 170                 ; move dx=-1, dy=1, color=fore (set)
        .db 162                 ; move dx=-1, dy=0, color=fore (set)
        .db 170                 ; move dx=-1, dy=1, color=fore (set)
        .db 162                 ; move dx=-1, dy=0, color=fore (set)
        .db 174                 ; move dx=-1, dy=-1, color=fore (set)
        .db 162                 ; move dx=-1, dy=0, color=fore (set)
        .db 174                 ; move dx=-1, dy=-1, color=fore (set)
        .db 162                 ; move dx=-1, dy=0, color=fore (set)
        .db 174                 ; move dx=-1, dy=-1, color=fore (set)
        .db 162                 ; move dx=-1, dy=0, color=fore (set)
        .db 98                  ; move dx=-3, dy=0, color=none (move only!)
        .db 162                 ; move dx=-1, dy=0, color=fore (set)
        .db 144                 ; move dx=0, dy=2, color=fore (set)
        .db 172                 ; move dx=1, dy=-1, color=fore (set)
        .db 144                 ; move dx=0, dy=2, color=fore (set)
        .db 162                 ; move dx=-1, dy=0, color=fore (set)
        .db 210                 ; move dx=-2, dy=2, color=fore (set)
        .db 140                 ; move dx=0, dy=-1, color=fore (set)
        .db 168                 ; move dx=1, dy=1, color=fore (set)
        .db 40                  ; move dx=1, dy=1, color=none (move only!)
        .db 96                  ; move dx=3, dy=0, color=none (move only!)
        .db 32                  ; move dx=1, dy=0, color=none (move only!)
        .db 168                 ; move dx=1, dy=1, color=fore (set)
        .db 162                 ; move dx=-1, dy=0, color=fore (set)
        .db 212                 ; move dx=2, dy=-2, color=fore (set)
        .db 160                 ; move dx=1, dy=0, color=fore (set)
        .db 172                 ; move dx=1, dy=-1, color=fore (set)
        .db 160                 ; move dx=1, dy=0, color=fore (set)
        .db 96                  ; move dx=3, dy=0, color=none (move only!)
        .db 160                 ; move dx=1, dy=0, color=fore (set)
        .db 168                 ; move dx=1, dy=1, color=fore (set)
        .db 160                 ; move dx=1, dy=0, color=fore (set)
        .db 168                 ; move dx=1, dy=1, color=fore (set)
        .db 160                 ; move dx=1, dy=0, color=fore (set)
        .db 170                 ; move dx=-1, dy=1, color=fore (set)
        .db 160                 ; move dx=1, dy=0, color=fore (set)
        ;; ascii 89: 'Y'
        .db 32                  ; class(bits 5-7)
        .db 13                  ; width
        .db 11                  ; height
        .db 22                  ; # moves
        .db 12                  ; x origin
        .db 1                   ; y origin
        .db 168                 ; move dx=1, dy=1, color=fore (set)
        .db 140                 ; move dx=0, dy=-1, color=fore (set)
        .db 210                 ; move dx=-2, dy=2, color=fore (set)
        .db 162                 ; move dx=-1, dy=0, color=fore (set)
        .db 170                 ; move dx=-1, dy=1, color=fore (set)
        .db 162                 ; move dx=-1, dy=0, color=fore (set)
        .db 210                 ; move dx=-2, dy=2, color=fore (set)
        .db 126                 ; move dx=-3, dy=-3, color=none (move only!)
        .db 86                  ; move dx=-2, dy=-2, color=none (move only!)
        .db 170                 ; move dx=-1, dy=1, color=fore (set)
        .db 140                 ; move dx=0, dy=-1, color=fore (set)
        .db 208                 ; move dx=2, dy=2, color=fore (set)
        .db 160                 ; move dx=1, dy=0, color=fore (set)
        .db 168                 ; move dx=1, dy=1, color=fore (set)
        .db 160                 ; move dx=1, dy=0, color=fore (set)
        .db 208                 ; move dx=2, dy=2, color=fore (set)
        .db 170                 ; move dx=-1, dy=1, color=fore (set)
        .db 160                 ; move dx=1, dy=0, color=fore (set)
        .db 170                 ; move dx=-1, dy=1, color=fore (set)
        .db 160                 ; move dx=1, dy=0, color=fore (set)
        ;; ascii 90: 'Z'
        .db 32                  ; class(bits 5-7)
        .db 15                  ; width
        .db 11                  ; height
        .db 25                  ; # moves
        .db 0                   ; x origin
        .db 1                   ; y origin
        .db 224                 ; move dx=3, dy=0, color=fore (set)
        .db 224                 ; move dx=3, dy=0, color=fore (set)
        .db 224                 ; move dx=3, dy=0, color=fore (set)
        .db 224                 ; move dx=3, dy=0, color=fore (set)
        .db 224                 ; move dx=3, dy=0, color=fore (set)
        .db 136                 ; move dx=0, dy=1, color=fore (set)
        .db 162                 ; move dx=-1, dy=0, color=fore (set)
        .db 170                 ; move dx=-1, dy=1, color=fore (set)
        .db 162                 ; move dx=-1, dy=0, color=fore (set)
        .db 170                 ; move dx=-1, dy=1, color=fore (set)
        .db 226                 ; move dx=-3, dy=0, color=fore (set)
        .db 170                 ; move dx=-1, dy=1, color=fore (set)
        .db 226                 ; move dx=-3, dy=0, color=fore (set)
        .db 170                 ; move dx=-1, dy=1, color=fore (set)
        .db 162                 ; move dx=-1, dy=0, color=fore (set)
        .db 170                 ; move dx=-1, dy=1, color=fore (set)
        .db 162                 ; move dx=-1, dy=0, color=fore (set)
        .db 136                 ; move dx=0, dy=1, color=fore (set)
        .db 224                 ; move dx=3, dy=0, color=fore (set)
        .db 224                 ; move dx=3, dy=0, color=fore (set)
        .db 224                 ; move dx=3, dy=0, color=fore (set)
        .db 224                 ; move dx=3, dy=0, color=fore (set)
        .db 224                 ; move dx=3, dy=0, color=fore (set)
        ;; ascii 91: '['
        .db 32                  ; class(bits 5-7)
        .db 5                   ; width
        .db 11                  ; height
        .db 15                  ; # moves
        .db 5                   ; x origin
        .db 1                   ; y origin
        .db 226                 ; move dx=-3, dy=0, color=fore (set)
        .db 194                 ; move dx=-2, dy=0, color=fore (set)
        .db 144                 ; move dx=0, dy=2, color=fore (set)
        .db 172                 ; move dx=1, dy=-1, color=fore (set)
        .db 144                 ; move dx=0, dy=2, color=fore (set)
        .db 162                 ; move dx=-1, dy=0, color=fore (set)
        .db 144                 ; move dx=0, dy=2, color=fore (set)
        .db 172                 ; move dx=1, dy=-1, color=fore (set)
        .db 144                 ; move dx=0, dy=2, color=fore (set)
        .db 162                 ; move dx=-1, dy=0, color=fore (set)
        .db 136                 ; move dx=0, dy=1, color=fore (set)
        .db 224                 ; move dx=3, dy=0, color=fore (set)
        .db 192                 ; move dx=2, dy=0, color=fore (set)
        ;; ascii 92: '\'
        .db 32                  ; class(bits 5-7)
        .db 11                  ; width
        .db 11                  ; height
        .db 13                  ; # moves
        .db 0                   ; x origin
        .db 2                   ; y origin
        .db 160                 ; move dx=1, dy=0, color=fore (set)
        .db 168                 ; move dx=1, dy=1, color=fore (set)
        .db 160                 ; move dx=1, dy=0, color=fore (set)
        .db 168                 ; move dx=1, dy=1, color=fore (set)
        .db 160                 ; move dx=1, dy=0, color=fore (set)
        .db 168                 ; move dx=1, dy=1, color=fore (set)
        .db 160                 ; move dx=1, dy=0, color=fore (set)
        .db 168                 ; move dx=1, dy=1, color=fore (set)
        .db 160                 ; move dx=1, dy=0, color=fore (set)
        .db 168                 ; move dx=1, dy=1, color=fore (set)
        .db 160                 ; move dx=1, dy=0, color=fore (set)
        ;; ascii 93: ']'
        .db 32                  ; class(bits 5-7)
        .db 5                   ; width
        .db 11                  ; height
        .db 17                  ; # moves
        .db 0                   ; x origin
        .db 1                   ; y origin
        .db 224                 ; move dx=3, dy=0, color=fore (set)
        .db 192                 ; move dx=2, dy=0, color=fore (set)
        .db 170                 ; move dx=-1, dy=1, color=fore (set)
        .db 136                 ; move dx=0, dy=1, color=fore (set)
        .db 172                 ; move dx=1, dy=-1, color=fore (set)
        .db 144                 ; move dx=0, dy=2, color=fore (set)
        .db 162                 ; move dx=-1, dy=0, color=fore (set)
        .db 144                 ; move dx=0, dy=2, color=fore (set)
        .db 172                 ; move dx=1, dy=-1, color=fore (set)
        .db 144                 ; move dx=0, dy=2, color=fore (set)
        .db 162                 ; move dx=-1, dy=0, color=fore (set)
        .db 42                  ; move dx=-1, dy=1, color=none (move only!)
        .db 98                  ; move dx=-3, dy=0, color=none (move only!)
        .db 224                 ; move dx=3, dy=0, color=fore (set)
        .db 192                 ; move dx=2, dy=0, color=fore (set)
        ;; ascii 94: '^'
        .db 32                  ; class(bits 5-7)
        .db 9                   ; width
        .db 11                  ; height
        .db 11                  ; # moves
        .db 0                   ; x origin
        .db 3                   ; y origin
        .db 160                 ; move dx=1, dy=0, color=fore (set)
        .db 172                 ; move dx=1, dy=-1, color=fore (set)
        .db 160                 ; move dx=1, dy=0, color=fore (set)
        .db 172                 ; move dx=1, dy=-1, color=fore (set)
        .db 160                 ; move dx=1, dy=0, color=fore (set)
        .db 168                 ; move dx=1, dy=1, color=fore (set)
        .db 160                 ; move dx=1, dy=0, color=fore (set)
        .db 168                 ; move dx=1, dy=1, color=fore (set)
        .db 160                 ; move dx=1, dy=0, color=fore (set)
        ;; ascii 95: '_'
        .db 32                  ; class(bits 5-7)
        .db 15                  ; width
        .db 11                  ; height
        .db 7                   ; # moves
        .db 0                   ; x origin
        .db 10                  ; y origin
        .db 224                 ; move dx=3, dy=0, color=fore (set)
        .db 224                 ; move dx=3, dy=0, color=fore (set)
        .db 224                 ; move dx=3, dy=0, color=fore (set)
        .db 224                 ; move dx=3, dy=0, color=fore (set)
        .db 224                 ; move dx=3, dy=0, color=fore (set)
        ;; ascii 96: '`'
        .db 32                  ; class(bits 5-7)
        .db 3                   ; width
        .db 11                  ; height
        .db 6                   ; # moves
        .db 0                   ; x origin
        .db 2                   ; y origin
        .db 172                 ; move dx=1, dy=-1, color=fore (set)
        .db 162                 ; move dx=-1, dy=0, color=fore (set)
        .db 208                 ; move dx=2, dy=2, color=fore (set)
        .db 160                 ; move dx=1, dy=0, color=fore (set)
        ;; ascii 97: 'a'
        .db 32                  ; class(bits 5-7)
        .db 13                  ; width
        .db 11                  ; height
        .db 21                  ; # moves
        .db 2                   ; x origin
        .db 3                   ; y origin
        .db 224                 ; move dx=3, dy=0, color=fore (set)
        .db 224                 ; move dx=3, dy=0, color=fore (set)
        .db 160                 ; move dx=1, dy=0, color=fore (set)
        .db 168                 ; move dx=1, dy=1, color=fore (set)
        .db 160                 ; move dx=1, dy=0, color=fore (set)
        .db 136                 ; move dx=0, dy=1, color=fore (set)
        .db 226                 ; move dx=-3, dy=0, color=fore (set)
        .db 226                 ; move dx=-3, dy=0, color=fore (set)
        .db 226                 ; move dx=-3, dy=0, color=fore (set)
        .db 210                 ; move dx=-2, dy=2, color=fore (set)
        .db 140                 ; move dx=0, dy=-1, color=fore (set)
        .db 208                 ; move dx=2, dy=2, color=fore (set)
        .db 224                 ; move dx=3, dy=0, color=fore (set)
        .db 224                 ; move dx=3, dy=0, color=fore (set)
        .db 160                 ; move dx=1, dy=0, color=fore (set)
        .db 212                 ; move dx=2, dy=-2, color=fore (set)
        .db 162                 ; move dx=-1, dy=0, color=fore (set)
        .db 208                 ; move dx=2, dy=2, color=fore (set)
        .db 160                 ; move dx=1, dy=0, color=fore (set)
        ;; ascii 98: 'b'
        .db 32                  ; class(bits 5-7)
        .db 11                  ; width
        .db 11                  ; height
        .db 24                  ; # moves
        .db 11                  ; x origin
        .db 7                   ; y origin
        .db 140                 ; move dx=0, dy=-1, color=fore (set)
        .db 170                 ; move dx=-1, dy=1, color=fore (set)
        .db 148                 ; move dx=0, dy=-2, color=fore (set)
        .db 172                 ; move dx=1, dy=-1, color=fore (set)
        .db 136                 ; move dx=0, dy=1, color=fore (set)
        .db 214                 ; move dx=-2, dy=-2, color=fore (set)
        .db 226                 ; move dx=-3, dy=0, color=fore (set)
        .db 226                 ; move dx=-3, dy=0, color=fore (set)
        .db 194                 ; move dx=-2, dy=0, color=fore (set)
        .db 148                 ; move dx=0, dy=-2, color=fore (set)
        .db 162                 ; move dx=-1, dy=0, color=fore (set)
        .db 152                 ; move dx=0, dy=3, color=fore (set)
        .db 136                 ; move dx=0, dy=1, color=fore (set)
        .db 172                 ; move dx=1, dy=-1, color=fore (set)
        .db 144                 ; move dx=0, dy=2, color=fore (set)
        .db 162                 ; move dx=-1, dy=0, color=fore (set)
        .db 136                 ; move dx=0, dy=1, color=fore (set)
        .db 160                 ; move dx=1, dy=0, color=fore (set)
        .db 170                 ; move dx=-1, dy=1, color=fore (set)
        .db 224                 ; move dx=3, dy=0, color=fore (set)
        .db 224                 ; move dx=3, dy=0, color=fore (set)
        .db 224                 ; move dx=3, dy=0, color=fore (set)
        ;; ascii 99: 'c'
        .db 32                  ; class(bits 5-7)
        .db 11                  ; width
        .db 11                  ; height
        .db 21                  ; # moves
        .db 11                  ; x origin
        .db 7                   ; y origin
        .db 162                 ; move dx=-1, dy=0, color=fore (set)
        .db 44                  ; move dx=1, dy=-1, color=none (move only!)
        .db 20                  ; move dx=0, dy=-2, color=none (move only!)
        .db 162                 ; move dx=-1, dy=0, color=fore (set)
        .db 174                 ; move dx=-1, dy=-1, color=fore (set)
        .db 226                 ; move dx=-3, dy=0, color=fore (set)
        .db 226                 ; move dx=-3, dy=0, color=fore (set)
        .db 162                 ; move dx=-1, dy=0, color=fore (set)
        .db 210                 ; move dx=-2, dy=2, color=fore (set)
        .db 140                 ; move dx=0, dy=-1, color=fore (set)
        .db 168                 ; move dx=1, dy=1, color=fore (set)
        .db 170                 ; move dx=-1, dy=1, color=fore (set)
        .db 160                 ; move dx=1, dy=0, color=fore (set)
        .db 170                 ; move dx=-1, dy=1, color=fore (set)
        .db 160                 ; move dx=1, dy=0, color=fore (set)
        .db 168                 ; move dx=1, dy=1, color=fore (set)
        .db 224                 ; move dx=3, dy=0, color=fore (set)
        .db 224                 ; move dx=3, dy=0, color=fore (set)
        .db 160                 ; move dx=1, dy=0, color=fore (set)
        ;; ascii 100: 'd'
        .db 32                  ; class(bits 5-7)
        .db 11                  ; width
        .db 11                  ; height
        .db 23                  ; # moves
        .db 10                  ; x origin
        .db 1                   ; y origin
        .db 136                 ; move dx=0, dy=1, color=fore (set)
        .db 172                 ; move dx=1, dy=-1, color=fore (set)
        .db 152                 ; move dx=0, dy=3, color=fore (set)
        .db 152                 ; move dx=0, dy=3, color=fore (set)
        .db 162                 ; move dx=-1, dy=0, color=fore (set)
        .db 156                 ; move dx=0, dy=-3, color=fore (set)
        .db 140                 ; move dx=0, dy=-1, color=fore (set)
        .db 226                 ; move dx=-3, dy=0, color=fore (set)
        .db 226                 ; move dx=-3, dy=0, color=fore (set)
        .db 194                 ; move dx=-2, dy=0, color=fore (set)
        .db 210                 ; move dx=-2, dy=2, color=fore (set)
        .db 140                 ; move dx=0, dy=-1, color=fore (set)
        .db 168                 ; move dx=1, dy=1, color=fore (set)
        .db 170                 ; move dx=-1, dy=1, color=fore (set)
        .db 160                 ; move dx=1, dy=0, color=fore (set)
        .db 170                 ; move dx=-1, dy=1, color=fore (set)
        .db 160                 ; move dx=1, dy=0, color=fore (set)
        .db 168                 ; move dx=1, dy=1, color=fore (set)
        .db 224                 ; move dx=3, dy=0, color=fore (set)
        .db 224                 ; move dx=3, dy=0, color=fore (set)
        .db 224                 ; move dx=3, dy=0, color=fore (set)
        ;; ascii 101: 'e'
        .db 32                  ; class(bits 5-7)
        .db 11                  ; width
        .db 11                  ; height
        .db 25                  ; # moves
        .db 11                  ; x origin
        .db 4                   ; y origin
        .db 162                 ; move dx=-1, dy=0, color=fore (set)
        .db 174                 ; move dx=-1, dy=-1, color=fore (set)
        .db 226                 ; move dx=-3, dy=0, color=fore (set)
        .db 226                 ; move dx=-3, dy=0, color=fore (set)
        .db 162                 ; move dx=-1, dy=0, color=fore (set)
        .db 170                 ; move dx=-1, dy=1, color=fore (set)
        .db 162                 ; move dx=-1, dy=0, color=fore (set)
        .db 152                 ; move dx=0, dy=3, color=fore (set)
        .db 160                 ; move dx=1, dy=0, color=fore (set)
        .db 148                 ; move dx=0, dy=-2, color=fore (set)
        .db 224                 ; move dx=3, dy=0, color=fore (set)
        .db 224                 ; move dx=3, dy=0, color=fore (set)
        .db 224                 ; move dx=3, dy=0, color=fore (set)
        .db 160                 ; move dx=1, dy=0, color=fore (set)
        .db 16                  ; move dx=0, dy=2, color=none (move only!)
        .db 162                 ; move dx=-1, dy=0, color=fore (set)
        .db 42                  ; move dx=-1, dy=1, color=none (move only!)
        .db 98                  ; move dx=-3, dy=0, color=none (move only!)
        .db 98                  ; move dx=-3, dy=0, color=none (move only!)
        .db 34                  ; move dx=-1, dy=0, color=none (move only!)
        .db 224                 ; move dx=3, dy=0, color=fore (set)
        .db 224                 ; move dx=3, dy=0, color=fore (set)
        .db 160                 ; move dx=1, dy=0, color=fore (set)
        ;; ascii 102: 'f'
        .db 32                  ; class(bits 5-7)
        .db 7                   ; width
        .db 11                  ; height
        .db 19                  ; # moves
        .db 7                   ; x origin
        .db 1                   ; y origin
        .db 226                 ; move dx=-3, dy=0, color=fore (set)
        .db 170                 ; move dx=-1, dy=1, color=fore (set)
        .db 162                 ; move dx=-1, dy=0, color=fore (set)
        .db 42                  ; move dx=-1, dy=1, color=none (move only!)
        .db 34                  ; move dx=-1, dy=0, color=none (move only!)
        .db 224                 ; move dx=3, dy=0, color=fore (set)
        .db 224                 ; move dx=3, dy=0, color=fore (set)
        .db 160                 ; move dx=1, dy=0, color=fore (set)
        .db 42                  ; move dx=-1, dy=1, color=none (move only!)
        .db 98                  ; move dx=-3, dy=0, color=none (move only!)
        .db 162                 ; move dx=-1, dy=0, color=fore (set)
        .db 144                 ; move dx=0, dy=2, color=fore (set)
        .db 172                 ; move dx=1, dy=-1, color=fore (set)
        .db 144                 ; move dx=0, dy=2, color=fore (set)
        .db 162                 ; move dx=-1, dy=0, color=fore (set)
        .db 136                 ; move dx=0, dy=1, color=fore (set)
        .db 160                 ; move dx=1, dy=0, color=fore (set)
        ;; ascii 103: 'g'
        .db 32                  ; class(bits 5-7)
        .db 11                  ; width
        .db 11                  ; height
        .db 33                  ; # moves
        .db 11                  ; x origin
        .db 7                   ; y origin
        .db 162                 ; move dx=-1, dy=0, color=fore (set)
        .db 172                 ; move dx=1, dy=-1, color=fore (set)
        .db 162                 ; move dx=-1, dy=0, color=fore (set)
        .db 172                 ; move dx=1, dy=-1, color=fore (set)
        .db 162                 ; move dx=-1, dy=0, color=fore (set)
        .db 172                 ; move dx=1, dy=-1, color=fore (set)
        .db 162                 ; move dx=-1, dy=0, color=fore (set)
        .db 172                 ; move dx=1, dy=-1, color=fore (set)
        .db 226                 ; move dx=-3, dy=0, color=fore (set)
        .db 226                 ; move dx=-3, dy=0, color=fore (set)
        .db 226                 ; move dx=-3, dy=0, color=fore (set)
        .db 210                 ; move dx=-2, dy=2, color=fore (set)
        .db 140                 ; move dx=0, dy=-1, color=fore (set)
        .db 168                 ; move dx=1, dy=1, color=fore (set)
        .db 170                 ; move dx=-1, dy=1, color=fore (set)
        .db 160                 ; move dx=1, dy=0, color=fore (set)
        .db 170                 ; move dx=-1, dy=1, color=fore (set)
        .db 160                 ; move dx=1, dy=0, color=fore (set)
        .db 168                 ; move dx=1, dy=1, color=fore (set)
        .db 224                 ; move dx=3, dy=0, color=fore (set)
        .db 224                 ; move dx=3, dy=0, color=fore (set)
        .db 224                 ; move dx=3, dy=0, color=fore (set)
        .db 136                 ; move dx=0, dy=1, color=fore (set)
        .db 162                 ; move dx=-1, dy=0, color=fore (set)
        .db 42                  ; move dx=-1, dy=1, color=none (move only!)
        .db 98                  ; move dx=-3, dy=0, color=none (move only!)
        .db 98                  ; move dx=-3, dy=0, color=none (move only!)
        .db 34                  ; move dx=-1, dy=0, color=none (move only!)
        .db 224                 ; move dx=3, dy=0, color=fore (set)
        .db 224                 ; move dx=3, dy=0, color=fore (set)
        .db 160                 ; move dx=1, dy=0, color=fore (set)
        ;; ascii 104: 'h'
        .db 32                  ; class(bits 5-7)
        .db 11                  ; width
        .db 11                  ; height
        .db 24                  ; # moves
        .db 1                   ; x origin
        .db 8                   ; y origin
        .db 140                 ; move dx=0, dy=-1, color=fore (set)
        .db 170                 ; move dx=-1, dy=1, color=fore (set)
        .db 148                 ; move dx=0, dy=-2, color=fore (set)
        .db 160                 ; move dx=1, dy=0, color=fore (set)
        .db 148                 ; move dx=0, dy=-2, color=fore (set)
        .db 170                 ; move dx=-1, dy=1, color=fore (set)
        .db 156                 ; move dx=0, dy=-3, color=fore (set)
        .db 140                 ; move dx=0, dy=-1, color=fore (set)
        .db 160                 ; move dx=1, dy=0, color=fore (set)
        .db 144                 ; move dx=0, dy=2, color=fore (set)
        .db 224                 ; move dx=3, dy=0, color=fore (set)
        .db 224                 ; move dx=3, dy=0, color=fore (set)
        .db 168                 ; move dx=1, dy=1, color=fore (set)
        .db 160                 ; move dx=1, dy=0, color=fore (set)
        .db 168                 ; move dx=1, dy=1, color=fore (set)
        .db 160                 ; move dx=1, dy=0, color=fore (set)
        .db 170                 ; move dx=-1, dy=1, color=fore (set)
        .db 160                 ; move dx=1, dy=0, color=fore (set)
        .db 170                 ; move dx=-1, dy=1, color=fore (set)
        .db 160                 ; move dx=1, dy=0, color=fore (set)
        .db 170                 ; move dx=-1, dy=1, color=fore (set)
        .db 160                 ; move dx=1, dy=0, color=fore (set)
        ;; ascii 105: 'i'
        .db 32                  ; class(bits 5-7)
        .db 5                   ; width
        .db 11                  ; height
        .db 15                  ; # moves
        .db 3                   ; x origin
        .db 1                   ; y origin
        .db 162                 ; move dx=-1, dy=0, color=fore (set)
        .db 82                  ; move dx=-2, dy=2, color=none (move only!)
        .db 224                 ; move dx=3, dy=0, color=fore (set)
        .db 136                 ; move dx=0, dy=1, color=fore (set)
        .db 162                 ; move dx=-1, dy=0, color=fore (set)
        .db 144                 ; move dx=0, dy=2, color=fore (set)
        .db 172                 ; move dx=1, dy=-1, color=fore (set)
        .db 144                 ; move dx=0, dy=2, color=fore (set)
        .db 162                 ; move dx=-1, dy=0, color=fore (set)
        .db 42                  ; move dx=-1, dy=1, color=none (move only!)
        .db 34                  ; move dx=-1, dy=0, color=none (move only!)
        .db 224                 ; move dx=3, dy=0, color=fore (set)
        .db 192                 ; move dx=2, dy=0, color=fore (set)
        ;; ascii 106: 'j'
        .db 32                  ; class(bits 5-7)
        .db 5                   ; width
        .db 11                  ; height
        .db 18                  ; # moves
        .db 5                   ; x origin
        .db 1                   ; y origin
        .db 162                 ; move dx=-1, dy=0, color=fore (set)
        .db 82                  ; move dx=-2, dy=2, color=none (move only!)
        .db 66                  ; move dx=-2, dy=0, color=none (move only!)
        .db 224                 ; move dx=3, dy=0, color=fore (set)
        .db 192                 ; move dx=2, dy=0, color=fore (set)
        .db 170                 ; move dx=-1, dy=1, color=fore (set)
        .db 160                 ; move dx=1, dy=0, color=fore (set)
        .db 136                 ; move dx=0, dy=1, color=fore (set)
        .db 162                 ; move dx=-1, dy=0, color=fore (set)
        .db 144                 ; move dx=0, dy=2, color=fore (set)
        .db 172                 ; move dx=1, dy=-1, color=fore (set)
        .db 144                 ; move dx=0, dy=2, color=fore (set)
        .db 162                 ; move dx=-1, dy=0, color=fore (set)
        .db 42                  ; move dx=-1, dy=1, color=none (move only!)
        .db 98                  ; move dx=-3, dy=0, color=none (move only!)
        .db 224                 ; move dx=3, dy=0, color=fore (set)
        ;; ascii 107: 'k'
        .db 32                  ; class(bits 5-7)
        .db 9                   ; width
        .db 11                  ; height
        .db 26                  ; # moves
        .db 1                   ; x origin
        .db 8                   ; y origin
        .db 140                 ; move dx=0, dy=-1, color=fore (set)
        .db 170                 ; move dx=-1, dy=1, color=fore (set)
        .db 148                 ; move dx=0, dy=-2, color=fore (set)
        .db 160                 ; move dx=1, dy=0, color=fore (set)
        .db 174                 ; move dx=-1, dy=-1, color=fore (set)
        .db 172                 ; move dx=1, dy=-1, color=fore (set)
        .db 174                 ; move dx=-1, dy=-1, color=fore (set)
        .db 172                 ; move dx=1, dy=-1, color=fore (set)
        .db 162                 ; move dx=-1, dy=0, color=fore (set)
        .db 168                 ; move dx=1, dy=1, color=fore (set)
        .db 170                 ; move dx=-1, dy=1, color=fore (set)
        .db 168                 ; move dx=1, dy=1, color=fore (set)
        .db 224                 ; move dx=3, dy=0, color=fore (set)
        .db 160                 ; move dx=1, dy=0, color=fore (set)
        .db 172                 ; move dx=1, dy=-1, color=fore (set)
        .db 160                 ; move dx=1, dy=0, color=fore (set)
        .db 172                 ; move dx=1, dy=-1, color=fore (set)
        .db 160                 ; move dx=1, dy=0, color=fore (set)
        .db 122                 ; move dx=-3, dy=3, color=none (move only!)
        .db 160                 ; move dx=1, dy=0, color=fore (set)
        .db 168                 ; move dx=1, dy=1, color=fore (set)
        .db 160                 ; move dx=1, dy=0, color=fore (set)
        .db 170                 ; move dx=-1, dy=1, color=fore (set)
        .db 160                 ; move dx=1, dy=0, color=fore (set)
        ;; ascii 108: 'l'
        .db 32                  ; class(bits 5-7)
        .db 3                   ; width
        .db 11                  ; height
        .db 17                  ; # moves
        .db 0                   ; x origin
        .db 1                   ; y origin
        .db 224                 ; move dx=3, dy=0, color=fore (set)
        .db 170                 ; move dx=-1, dy=1, color=fore (set)
        .db 160                 ; move dx=1, dy=0, color=fore (set)
        .db 170                 ; move dx=-1, dy=1, color=fore (set)
        .db 160                 ; move dx=1, dy=0, color=fore (set)
        .db 170                 ; move dx=-1, dy=1, color=fore (set)
        .db 160                 ; move dx=1, dy=0, color=fore (set)
        .db 170                 ; move dx=-1, dy=1, color=fore (set)
        .db 160                 ; move dx=1, dy=0, color=fore (set)
        .db 170                 ; move dx=-1, dy=1, color=fore (set)
        .db 160                 ; move dx=1, dy=0, color=fore (set)
        .db 170                 ; move dx=-1, dy=1, color=fore (set)
        .db 160                 ; move dx=1, dy=0, color=fore (set)
        .db 170                 ; move dx=-1, dy=1, color=fore (set)
        .db 160                 ; move dx=1, dy=0, color=fore (set)
        ;; ascii 109: 'm'
        .db 32                  ; class(bits 5-7)
        .db 17                  ; width
        .db 11                  ; height
        .db 29                  ; # moves
        .db 1                   ; x origin
        .db 8                   ; y origin
        .db 140                 ; move dx=0, dy=-1, color=fore (set)
        .db 170                 ; move dx=-1, dy=1, color=fore (set)
        .db 148                 ; move dx=0, dy=-2, color=fore (set)
        .db 160                 ; move dx=1, dy=0, color=fore (set)
        .db 148                 ; move dx=0, dy=-2, color=fore (set)
        .db 170                 ; move dx=-1, dy=1, color=fore (set)
        .db 148                 ; move dx=0, dy=-2, color=fore (set)
        .db 224                 ; move dx=3, dy=0, color=fore (set)
        .db 224                 ; move dx=3, dy=0, color=fore (set)
        .db 160                 ; move dx=1, dy=0, color=fore (set)
        .db 208                 ; move dx=2, dy=2, color=fore (set)
        .db 152                 ; move dx=0, dy=3, color=fore (set)
        .db 162                 ; move dx=-1, dy=0, color=fore (set)
        .db 156                 ; move dx=0, dy=-3, color=fore (set)
        .db 212                 ; move dx=2, dy=-2, color=fore (set)
        .db 224                 ; move dx=3, dy=0, color=fore (set)
        .db 192                 ; move dx=2, dy=0, color=fore (set)
        .db 168                 ; move dx=1, dy=1, color=fore (set)
        .db 160                 ; move dx=1, dy=0, color=fore (set)
        .db 170                 ; move dx=-1, dy=1, color=fore (set)
        .db 160                 ; move dx=1, dy=0, color=fore (set)
        .db 170                 ; move dx=-1, dy=1, color=fore (set)
        .db 160                 ; move dx=1, dy=0, color=fore (set)
        .db 170                 ; move dx=-1, dy=1, color=fore (set)
        .db 160                 ; move dx=1, dy=0, color=fore (set)
        .db 170                 ; move dx=-1, dy=1, color=fore (set)
        .db 160                 ; move dx=1, dy=0, color=fore (set)
        ;; ascii 110: 'n'
        .db 32                  ; class(bits 5-7)
        .db 11                  ; width
        .db 11                  ; height
        .db 22                  ; # moves
        .db 1                   ; x origin
        .db 8                   ; y origin
        .db 140                 ; move dx=0, dy=-1, color=fore (set)
        .db 170                 ; move dx=-1, dy=1, color=fore (set)
        .db 148                 ; move dx=0, dy=-2, color=fore (set)
        .db 160                 ; move dx=1, dy=0, color=fore (set)
        .db 148                 ; move dx=0, dy=-2, color=fore (set)
        .db 170                 ; move dx=-1, dy=1, color=fore (set)
        .db 148                 ; move dx=0, dy=-2, color=fore (set)
        .db 224                 ; move dx=3, dy=0, color=fore (set)
        .db 224                 ; move dx=3, dy=0, color=fore (set)
        .db 160                 ; move dx=1, dy=0, color=fore (set)
        .db 168                 ; move dx=1, dy=1, color=fore (set)
        .db 160                 ; move dx=1, dy=0, color=fore (set)
        .db 168                 ; move dx=1, dy=1, color=fore (set)
        .db 160                 ; move dx=1, dy=0, color=fore (set)
        .db 170                 ; move dx=-1, dy=1, color=fore (set)
        .db 160                 ; move dx=1, dy=0, color=fore (set)
        .db 170                 ; move dx=-1, dy=1, color=fore (set)
        .db 160                 ; move dx=1, dy=0, color=fore (set)
        .db 170                 ; move dx=-1, dy=1, color=fore (set)
        .db 160                 ; move dx=1, dy=0, color=fore (set)
        ;; ascii 111: 'o'
        .db 32                  ; class(bits 5-7)
        .db 13                  ; width
        .db 11                  ; height
        .db 19                  ; # moves
        .db 10                  ; x origin
        .db 7                   ; y origin
        .db 160                 ; move dx=1, dy=0, color=fore (set)
        .db 212                 ; move dx=2, dy=-2, color=fore (set)
        .db 136                 ; move dx=0, dy=1, color=fore (set)
        .db 214                 ; move dx=-2, dy=-2, color=fore (set)
        .db 162                 ; move dx=-1, dy=0, color=fore (set)
        .db 174                 ; move dx=-1, dy=-1, color=fore (set)
        .db 226                 ; move dx=-3, dy=0, color=fore (set)
        .db 194                 ; move dx=-2, dy=0, color=fore (set)
        .db 170                 ; move dx=-1, dy=1, color=fore (set)
        .db 162                 ; move dx=-1, dy=0, color=fore (set)
        .db 210                 ; move dx=-2, dy=2, color=fore (set)
        .db 140                 ; move dx=0, dy=-1, color=fore (set)
        .db 208                 ; move dx=2, dy=2, color=fore (set)
        .db 160                 ; move dx=1, dy=0, color=fore (set)
        .db 168                 ; move dx=1, dy=1, color=fore (set)
        .db 224                 ; move dx=3, dy=0, color=fore (set)
        .db 192                 ; move dx=2, dy=0, color=fore (set)
        ;; ascii 112: 'p'
        .db 32                  ; class(bits 5-7)
        .db 11                  ; width
        .db 11                  ; height
        .db 23                  ; # moves
        .db 1                   ; x origin
        .db 4                   ; y origin
        .db 152                 ; move dx=0, dy=3, color=fore (set)
        .db 136                 ; move dx=0, dy=1, color=fore (set)
        .db 224                 ; move dx=3, dy=0, color=fore (set)
        .db 224                 ; move dx=3, dy=0, color=fore (set)
        .db 192                 ; move dx=2, dy=0, color=fore (set)
        .db 172                 ; move dx=1, dy=-1, color=fore (set)
        .db 160                 ; move dx=1, dy=0, color=fore (set)
        .db 174                 ; move dx=-1, dy=-1, color=fore (set)
        .db 172                 ; move dx=1, dy=-1, color=fore (set)
        .db 136                 ; move dx=0, dy=1, color=fore (set)
        .db 214                 ; move dx=-2, dy=-2, color=fore (set)
        .db 162                 ; move dx=-1, dy=0, color=fore (set)
        .db 174                 ; move dx=-1, dy=-1, color=fore (set)
        .db 226                 ; move dx=-3, dy=0, color=fore (set)
        .db 226                 ; move dx=-3, dy=0, color=fore (set)
        .db 162                 ; move dx=-1, dy=0, color=fore (set)
        .db 152                 ; move dx=0, dy=3, color=fore (set)
        .db 152                 ; move dx=0, dy=3, color=fore (set)
        .db 136                 ; move dx=0, dy=1, color=fore (set)
        .db 172                 ; move dx=1, dy=-1, color=fore (set)
        .db 136                 ; move dx=0, dy=1, color=fore (set)
        ;; ascii 113: 'q'
        .db 32                  ; class(bits 5-7)
        .db 11                  ; width
        .db 11                  ; height
        .db 28                  ; # moves
        .db 11                  ; x origin
        .db 7                   ; y origin
        .db 162                 ; move dx=-1, dy=0, color=fore (set)
        .db 172                 ; move dx=1, dy=-1, color=fore (set)
        .db 162                 ; move dx=-1, dy=0, color=fore (set)
        .db 172                 ; move dx=1, dy=-1, color=fore (set)
        .db 162                 ; move dx=-1, dy=0, color=fore (set)
        .db 172                 ; move dx=1, dy=-1, color=fore (set)
        .db 162                 ; move dx=-1, dy=0, color=fore (set)
        .db 172                 ; move dx=1, dy=-1, color=fore (set)
        .db 226                 ; move dx=-3, dy=0, color=fore (set)
        .db 226                 ; move dx=-3, dy=0, color=fore (set)
        .db 162                 ; move dx=-1, dy=0, color=fore (set)
        .db 170                 ; move dx=-1, dy=1, color=fore (set)
        .db 162                 ; move dx=-1, dy=0, color=fore (set)
        .db 210                 ; move dx=-2, dy=2, color=fore (set)
        .db 140                 ; move dx=0, dy=-1, color=fore (set)
        .db 168                 ; move dx=1, dy=1, color=fore (set)
        .db 170                 ; move dx=-1, dy=1, color=fore (set)
        .db 160                 ; move dx=1, dy=0, color=fore (set)
        .db 168                 ; move dx=1, dy=1, color=fore (set)
        .db 224                 ; move dx=3, dy=0, color=fore (set)
        .db 224                 ; move dx=3, dy=0, color=fore (set)
        .db 224                 ; move dx=3, dy=0, color=fore (set)
        .db 170                 ; move dx=-1, dy=1, color=fore (set)
        .db 160                 ; move dx=1, dy=0, color=fore (set)
        .db 170                 ; move dx=-1, dy=1, color=fore (set)
        .db 160                 ; move dx=1, dy=0, color=fore (set)
        ;; ascii 114: 'r'
        .db 32                  ; class(bits 5-7)
        .db 9                   ; width
        .db 11                  ; height
        .db 14                  ; # moves
        .db 9                   ; x origin
        .db 4                   ; y origin
        .db 162                 ; move dx=-1, dy=0, color=fore (set)
        .db 174                 ; move dx=-1, dy=-1, color=fore (set)
        .db 226                 ; move dx=-3, dy=0, color=fore (set)
        .db 226                 ; move dx=-3, dy=0, color=fore (set)
        .db 162                 ; move dx=-1, dy=0, color=fore (set)
        .db 144                 ; move dx=0, dy=2, color=fore (set)
        .db 172                 ; move dx=1, dy=-1, color=fore (set)
        .db 144                 ; move dx=0, dy=2, color=fore (set)
        .db 162                 ; move dx=-1, dy=0, color=fore (set)
        .db 144                 ; move dx=0, dy=2, color=fore (set)
        .db 172                 ; move dx=1, dy=-1, color=fore (set)
        .db 136                 ; move dx=0, dy=1, color=fore (set)
        ;; ascii 115: 's'
        .db 32                  ; class(bits 5-7)
        .db 11                  ; width
        .db 11                  ; height
        .db 20                  ; # moves
        .db 2                   ; x origin
        .db 3                   ; y origin
        .db 224                 ; move dx=3, dy=0, color=fore (set)
        .db 224                 ; move dx=3, dy=0, color=fore (set)
        .db 224                 ; move dx=3, dy=0, color=fore (set)
        .db 24                  ; move dx=0, dy=3, color=none (move only!)
        .db 170                 ; move dx=-1, dy=1, color=fore (set)
        .db 160                 ; move dx=1, dy=0, color=fore (set)
        .db 214                 ; move dx=-2, dy=-2, color=fore (set)
        .db 226                 ; move dx=-3, dy=0, color=fore (set)
        .db 226                 ; move dx=-3, dy=0, color=fore (set)
        .db 162                 ; move dx=-1, dy=0, color=fore (set)
        .db 174                 ; move dx=-1, dy=-1, color=fore (set)
        .db 162                 ; move dx=-1, dy=0, color=fore (set)
        .db 24                  ; move dx=0, dy=3, color=none (move only!)
        .db 160                 ; move dx=1, dy=0, color=fore (set)
        .db 168                 ; move dx=1, dy=1, color=fore (set)
        .db 224                 ; move dx=3, dy=0, color=fore (set)
        .db 224                 ; move dx=3, dy=0, color=fore (set)
        .db 160                 ; move dx=1, dy=0, color=fore (set)
        ;; ascii 116: 't'
        .db 32                  ; class(bits 5-7)
        .db 9                   ; width
        .db 11                  ; height
        .db 19                  ; # moves
        .db 9                   ; x origin
        .db 3                   ; y origin
        .db 226                 ; move dx=-3, dy=0, color=fore (set)
        .db 174                 ; move dx=-1, dy=-1, color=fore (set)
        .db 162                 ; move dx=-1, dy=0, color=fore (set)
        .db 42                  ; move dx=-1, dy=1, color=none (move only!)
        .db 98                  ; move dx=-3, dy=0, color=none (move only!)
        .db 224                 ; move dx=3, dy=0, color=fore (set)
        .db 192                 ; move dx=2, dy=0, color=fore (set)
        .db 170                 ; move dx=-1, dy=1, color=fore (set)
        .db 160                 ; move dx=1, dy=0, color=fore (set)
        .db 170                 ; move dx=-1, dy=1, color=fore (set)
        .db 160                 ; move dx=1, dy=0, color=fore (set)
        .db 170                 ; move dx=-1, dy=1, color=fore (set)
        .db 160                 ; move dx=1, dy=0, color=fore (set)
        .db 170                 ; move dx=-1, dy=1, color=fore (set)
        .db 160                 ; move dx=1, dy=0, color=fore (set)
        .db 168                 ; move dx=1, dy=1, color=fore (set)
        .db 224                 ; move dx=3, dy=0, color=fore (set)
        ;; ascii 117: 'u'
        .db 32                  ; class(bits 5-7)
        .db 13                  ; width
        .db 11                  ; height
        .db 21                  ; # moves
        .db 0                   ; x origin
        .db 7                   ; y origin
        .db 156                 ; move dx=0, dy=-3, color=fore (set)
        .db 140                 ; move dx=0, dy=-1, color=fore (set)
        .db 160                 ; move dx=1, dy=0, color=fore (set)
        .db 152                 ; move dx=0, dy=3, color=fore (set)
        .db 136                 ; move dx=0, dy=1, color=fore (set)
        .db 168                 ; move dx=1, dy=1, color=fore (set)
        .db 224                 ; move dx=3, dy=0, color=fore (set)
        .db 224                 ; move dx=3, dy=0, color=fore (set)
        .db 160                 ; move dx=1, dy=0, color=fore (set)
        .db 212                 ; move dx=2, dy=-2, color=fore (set)
        .db 174                 ; move dx=-1, dy=-1, color=fore (set)
        .db 172                 ; move dx=1, dy=-1, color=fore (set)
        .db 174                 ; move dx=-1, dy=-1, color=fore (set)
        .db 160                 ; move dx=1, dy=0, color=fore (set)
        .db 170                 ; move dx=-1, dy=1, color=fore (set)
        .db 168                 ; move dx=1, dy=1, color=fore (set)
        .db 170                 ; move dx=-1, dy=1, color=fore (set)
        .db 208                 ; move dx=2, dy=2, color=fore (set)
        .db 160                 ; move dx=1, dy=0, color=fore (set)
        ;; ascii 118: 'v'
        .db 32                  ; class(bits 5-7)
        .db 13                  ; width
        .db 11                  ; height
        .db 23                  ; # moves
        .db 12                  ; x origin
        .db 3                   ; y origin
        .db 136                 ; move dx=0, dy=1, color=fore (set)
        .db 172                 ; move dx=1, dy=-1, color=fore (set)
        .db 144                 ; move dx=0, dy=2, color=fore (set)
        .db 162                 ; move dx=-1, dy=0, color=fore (set)
        .db 170                 ; move dx=-1, dy=1, color=fore (set)
        .db 162                 ; move dx=-1, dy=0, color=fore (set)
        .db 170                 ; move dx=-1, dy=1, color=fore (set)
        .db 162                 ; move dx=-1, dy=0, color=fore (set)
        .db 126                 ; move dx=-3, dy=-3, color=none (move only!)
        .db 46                  ; move dx=-1, dy=-1, color=none (move only!)
        .db 98                  ; move dx=-3, dy=0, color=none (move only!)
        .db 162                 ; move dx=-1, dy=0, color=fore (set)
        .db 144                 ; move dx=0, dy=2, color=fore (set)
        .db 172                 ; move dx=1, dy=-1, color=fore (set)
        .db 136                 ; move dx=0, dy=1, color=fore (set)
        .db 168                 ; move dx=1, dy=1, color=fore (set)
        .db 160                 ; move dx=1, dy=0, color=fore (set)
        .db 168                 ; move dx=1, dy=1, color=fore (set)
        .db 160                 ; move dx=1, dy=0, color=fore (set)
        .db 168                 ; move dx=1, dy=1, color=fore (set)
        .db 160                 ; move dx=1, dy=0, color=fore (set)
        ;; ascii 119: 'w'
        .db 32                  ; class(bits 5-7)
        .db 17                  ; width
        .db 11                  ; height
        .db 29                  ; # moves
        .db 0                   ; x origin
        .db 5                   ; y origin
        .db 148                 ; move dx=0, dy=-2, color=fore (set)
        .db 160                 ; move dx=1, dy=0, color=fore (set)
        .db 144                 ; move dx=0, dy=2, color=fore (set)
        .db 168                 ; move dx=1, dy=1, color=fore (set)
        .db 160                 ; move dx=1, dy=0, color=fore (set)
        .db 170                 ; move dx=-1, dy=1, color=fore (set)
        .db 160                 ; move dx=1, dy=0, color=fore (set)
        .db 168                 ; move dx=1, dy=1, color=fore (set)
        .db 160                 ; move dx=1, dy=0, color=fore (set)
        .db 172                 ; move dx=1, dy=-1, color=fore (set)
        .db 160                 ; move dx=1, dy=0, color=fore (set)
        .db 212                 ; move dx=2, dy=-2, color=fore (set)
        .db 162                 ; move dx=-1, dy=0, color=fore (set)
        .db 208                 ; move dx=2, dy=2, color=fore (set)
        .db 160                 ; move dx=1, dy=0, color=fore (set)
        .db 124                 ; move dx=3, dy=-3, color=none (move only!)
        .db 44                  ; move dx=1, dy=-1, color=none (move only!)
        .db 32                  ; move dx=1, dy=0, color=none (move only!)
        .db 136                 ; move dx=0, dy=1, color=fore (set)
        .db 172                 ; move dx=1, dy=-1, color=fore (set)
        .db 144                 ; move dx=0, dy=2, color=fore (set)
        .db 162                 ; move dx=-1, dy=0, color=fore (set)
        .db 210                 ; move dx=-2, dy=2, color=fore (set)
        .db 160                 ; move dx=1, dy=0, color=fore (set)
        .db 174                 ; move dx=-1, dy=-1, color=fore (set)
        .db 82                  ; move dx=-2, dy=2, color=none (move only!)
        .db 160                 ; move dx=1, dy=0, color=fore (set)
        ;; ascii 120: 'x'
        .db 32                  ; class(bits 5-7)
        .db 9                   ; width
        .db 11                  ; height
        .db 22                  ; # moves
        .db 0                   ; x origin
        .db 3                   ; y origin
        .db 160                 ; move dx=1, dy=0, color=fore (set)
        .db 168                 ; move dx=1, dy=1, color=fore (set)
        .db 160                 ; move dx=1, dy=0, color=fore (set)
        .db 122                 ; move dx=-3, dy=3, color=none (move only!)
        .db 168                 ; move dx=1, dy=1, color=fore (set)
        .db 162                 ; move dx=-1, dy=0, color=fore (set)
        .db 212                 ; move dx=2, dy=-2, color=fore (set)
        .db 160                 ; move dx=1, dy=0, color=fore (set)
        .db 172                 ; move dx=1, dy=-1, color=fore (set)
        .db 160                 ; move dx=1, dy=0, color=fore (set)
        .db 172                 ; move dx=1, dy=-1, color=fore (set)
        .db 160                 ; move dx=1, dy=0, color=fore (set)
        .db 172                 ; move dx=1, dy=-1, color=fore (set)
        .db 160                 ; move dx=1, dy=0, color=fore (set)
        .db 122                 ; move dx=-3, dy=3, color=none (move only!)
        .db 160                 ; move dx=1, dy=0, color=fore (set)
        .db 168                 ; move dx=1, dy=1, color=fore (set)
        .db 160                 ; move dx=1, dy=0, color=fore (set)
        .db 170                 ; move dx=-1, dy=1, color=fore (set)
        .db 160                 ; move dx=1, dy=0, color=fore (set)
        ;; ascii 121: 'y'
        .db 32                  ; class(bits 5-7)
        .db 11                  ; width
        .db 11                  ; height
        .db 20                  ; # moves
        .db 11                  ; x origin
        .db 6                   ; y origin
        .db 156                 ; move dx=0, dy=-3, color=fore (set)
        .db 162                 ; move dx=-1, dy=0, color=fore (set)
        .db 152                 ; move dx=0, dy=3, color=fore (set)
        .db 170                 ; move dx=-1, dy=1, color=fore (set)
        .db 162                 ; move dx=-1, dy=0, color=fore (set)
        .db 170                 ; move dx=-1, dy=1, color=fore (set)
        .db 194                 ; move dx=-2, dy=0, color=fore (set)
        .db 170                 ; move dx=-1, dy=1, color=fore (set)
        .db 160                 ; move dx=1, dy=0, color=fore (set)
        .db 214                 ; move dx=-2, dy=-2, color=fore (set)
        .db 162                 ; move dx=-1, dy=0, color=fore (set)
        .db 174                 ; move dx=-1, dy=-1, color=fore (set)
        .db 156                 ; move dx=0, dy=-3, color=fore (set)
        .db 162                 ; move dx=-1, dy=0, color=fore (set)
        .db 152                 ; move dx=0, dy=3, color=fore (set)
        .db 24                  ; move dx=0, dy=3, color=none (move only!)
        .db 8                   ; move dx=0, dy=1, color=none (move only!)
        .db 224                 ; move dx=3, dy=0, color=fore (set)
        ;; ascii 122: 'z'
        .db 32                  ; class(bits 5-7)
        .db 11                  ; width
        .db 11                  ; height
        .db 20                  ; # moves
        .db 0                   ; x origin
        .db 3                   ; y origin
        .db 224                 ; move dx=3, dy=0, color=fore (set)
        .db 224                 ; move dx=3, dy=0, color=fore (set)
        .db 224                 ; move dx=3, dy=0, color=fore (set)
        .db 192                 ; move dx=2, dy=0, color=fore (set)
        .db 42                  ; move dx=-1, dy=1, color=none (move only!)
        .db 34                  ; move dx=-1, dy=0, color=none (move only!)
        .db 162                 ; move dx=-1, dy=0, color=fore (set)
        .db 170                 ; move dx=-1, dy=1, color=fore (set)
        .db 226                 ; move dx=-3, dy=0, color=fore (set)
        .db 170                 ; move dx=-1, dy=1, color=fore (set)
        .db 162                 ; move dx=-1, dy=0, color=fore (set)
        .db 210                 ; move dx=-2, dy=2, color=fore (set)
        .db 140                 ; move dx=0, dy=-1, color=fore (set)
        .db 168                 ; move dx=1, dy=1, color=fore (set)
        .db 224                 ; move dx=3, dy=0, color=fore (set)
        .db 224                 ; move dx=3, dy=0, color=fore (set)
        .db 224                 ; move dx=3, dy=0, color=fore (set)
        .db 160                 ; move dx=1, dy=0, color=fore (set)
        ;; ascii 123: '{'
        .db 32                  ; class(bits 5-7)
        .db 7                   ; width
        .db 11                  ; height
        .db 19                  ; # moves
        .db 7                   ; x origin
        .db 0                   ; y origin
        .db 226                 ; move dx=-3, dy=0, color=fore (set)
        .db 210                 ; move dx=-2, dy=2, color=fore (set)
        .db 140                 ; move dx=0, dy=-1, color=fore (set)
        .db 168                 ; move dx=1, dy=1, color=fore (set)
        .db 136                 ; move dx=0, dy=1, color=fore (set)
        .db 162                 ; move dx=-1, dy=0, color=fore (set)
        .db 42                  ; move dx=-1, dy=1, color=none (move only!)
        .db 34                  ; move dx=-1, dy=0, color=none (move only!)
        .db 160                 ; move dx=1, dy=0, color=fore (set)
        .db 168                 ; move dx=1, dy=1, color=fore (set)
        .db 160                 ; move dx=1, dy=0, color=fore (set)
        .db 170                 ; move dx=-1, dy=1, color=fore (set)
        .db 160                 ; move dx=1, dy=0, color=fore (set)
        .db 170                 ; move dx=-1, dy=1, color=fore (set)
        .db 160                 ; move dx=1, dy=0, color=fore (set)
        .db 168                 ; move dx=1, dy=1, color=fore (set)
        .db 224                 ; move dx=3, dy=0, color=fore (set)
        ;; ascii 124: '|'
        .db 32                  ; class(bits 5-7)
        .db 1                   ; width
        .db 11                  ; height
        .db 19                  ; # moves
        .db 0                   ; x origin
        .db 0                   ; y origin
        .db 160                 ; move dx=1, dy=0, color=fore (set)
        .db 170                 ; move dx=-1, dy=1, color=fore (set)
        .db 160                 ; move dx=1, dy=0, color=fore (set)
        .db 170                 ; move dx=-1, dy=1, color=fore (set)
        .db 160                 ; move dx=1, dy=0, color=fore (set)
        .db 170                 ; move dx=-1, dy=1, color=fore (set)
        .db 160                 ; move dx=1, dy=0, color=fore (set)
        .db 170                 ; move dx=-1, dy=1, color=fore (set)
        .db 160                 ; move dx=1, dy=0, color=fore (set)
        .db 170                 ; move dx=-1, dy=1, color=fore (set)
        .db 160                 ; move dx=1, dy=0, color=fore (set)
        .db 170                 ; move dx=-1, dy=1, color=fore (set)
        .db 160                 ; move dx=1, dy=0, color=fore (set)
        .db 170                 ; move dx=-1, dy=1, color=fore (set)
        .db 160                 ; move dx=1, dy=0, color=fore (set)
        .db 170                 ; move dx=-1, dy=1, color=fore (set)
        .db 160                 ; move dx=1, dy=0, color=fore (set)
        ;; ascii 125: '}'
        .db 32                  ; class(bits 5-7)
        .db 7                   ; width
        .db 11                  ; height
        .db 21                  ; # moves
        .db 0                   ; x origin
        .db 0                   ; y origin
        .db 224                 ; move dx=3, dy=0, color=fore (set)
        .db 168                 ; move dx=1, dy=1, color=fore (set)
        .db 160                 ; move dx=1, dy=0, color=fore (set)
        .db 170                 ; move dx=-1, dy=1, color=fore (set)
        .db 160                 ; move dx=1, dy=0, color=fore (set)
        .db 170                 ; move dx=-1, dy=1, color=fore (set)
        .db 160                 ; move dx=1, dy=0, color=fore (set)
        .db 168                 ; move dx=1, dy=1, color=fore (set)
        .db 160                 ; move dx=1, dy=0, color=fore (set)
        .db 42                  ; move dx=-1, dy=1, color=none (move only!)
        .db 34                  ; move dx=-1, dy=0, color=none (move only!)
        .db 162                 ; move dx=-1, dy=0, color=fore (set)
        .db 144                 ; move dx=0, dy=2, color=fore (set)
        .db 172                 ; move dx=1, dy=-1, color=fore (set)
        .db 136                 ; move dx=0, dy=1, color=fore (set)
        .db 42                  ; move dx=-1, dy=1, color=none (move only!)
        .db 98                  ; move dx=-3, dy=0, color=none (move only!)
        .db 34                  ; move dx=-1, dy=0, color=none (move only!)
        .db 224                 ; move dx=3, dy=0, color=fore (set)
        ;; ascii 126: '~'
        .db 32                  ; class(bits 5-7)
        .db 13                  ; width
        .db 11                  ; height
        .db 13                  ; # moves
        .db 0                   ; x origin
        .db 4                   ; y origin
        .db 160                 ; move dx=1, dy=0, color=fore (set)
        .db 172                 ; move dx=1, dy=-1, color=fore (set)
        .db 224                 ; move dx=3, dy=0, color=fore (set)
        .db 168                 ; move dx=1, dy=1, color=fore (set)
        .db 160                 ; move dx=1, dy=0, color=fore (set)
        .db 168                 ; move dx=1, dy=1, color=fore (set)
        .db 192                 ; move dx=2, dy=0, color=fore (set)
        .db 44                  ; move dx=1, dy=-1, color=none (move only!)
        .db 64                  ; move dx=2, dy=0, color=none (move only!)
        .db 162                 ; move dx=-1, dy=0, color=fore (set)
        .db 170                 ; move dx=-1, dy=1, color=fore (set)
        ;; ascii 127: '<non standard>'
        .db 32                  ; class(bits 5-7)
        .db 3                   ; width
        .db 11                  ; height
        .db 0                   ; # moves
