/*
 * rules.c
 *
 * game rules header
 *
 * MIT License (see: LICENSE)
 * Copyright (c) 2022 Tomaz Stih
 *
 * 22.12.2022   tstih
 *
 */
#include <data/rules.h>

const command_t rules[] = { 
     { CMD_PROC, 0x0000,     0 }
    ,{ CMD_PROC, 0x0000,    69 }
    ,{ CMD_PROC, 0x0000,   138 }
    ,{ CMD_PROC, 0x0000,   207 }
    ,{ CMD_PROC, 0x0000,   250 }
    ,{ CMD_PROC, 0x0000,   264 }
    ,{ CMD_PROC, 0x0000,   339 }
    ,{ CMD_PROC, 0x0000,   344 }
    ,{ CMD_PROC, 0x0000,   349 }
    ,{ CMD_PROC, 0x0000,   420 }
    ,{ CMD_PROC, 0x0000,   491 }
    ,{ CMD_PROC, 0x0000,   526 }
    ,{ CMD_PROC, 0x0000,   539 }
    ,{ CMD_PROC, 0x0000,   552 }
    ,{ CMD_PROC, 0x0000,   569 }
    ,{ CMD_PROC, 0x0000,   586 }
    ,{ CMD_PROC, 0x0000,   595 }
    ,{ CMD_PROC, 0x0000,   608 }
    ,{ CMD_PROC, 0x0000,   627 }
    ,{ CMD_PROC, 0x0000,   641 }
    ,{ CMD_PROC, 0x0000,   656 }
    ,{ CMD_PROC, 0x0000,   661 }
    ,{ CMD_PROC, 0x0000,   712 }
    ,{ CMD_PROC, 0x0000,   796 }
    ,{ CMD_PROC, 0x0000,   850 }
    ,{ CMD_PROC, 0x0000,   889 }
    ,{ CMD_PROC, 0x0000,   916 }
    ,{ CMD_PROC, 0x0000,   943 }
    ,{ CMD_PROC, 0x0000,   991 }
    ,{ CMD_PROC, 0x0000,  1072 }
    ,{ CMD_PROC, 0x0000,  1086 }
    ,{ CMD_PROC, 0x0000,  1103 }
    ,{ CMD_PROC, 0x0000,  1115 }
    ,{ CMD_PROC, 0x0000,  1125 }
    ,{ CMD_PROC, 0x0000,  1136 }
    ,{ CMD_PROC, 0x0000,  1147 }
    ,{ CMD_PROC, 0x0000,  1201 }
    ,{ CMD_PROC, 0x0000,  1258 }
    ,{ CMD_PROC, 0x0000,  1271 }
    ,{ CMD_PROC, 0x0000,  1283 }
    ,{ CMD_PROC, 0x0000,  1295 }
    ,{ CMD_PROC, 0x0000,  1306 }
    ,{ CMD_PROC, 0x0000,  1315 }
    ,{ CMD_PROC, 0x0000,  1326 }
    ,{ CMD_PROC, 0x0000,  1333 }
    ,{ CMD_PROC, 0x0000,  1347 }
    ,{ CMD_PROC, 0x0000,  1354 }
    ,{ CMD_PROC, 0x0000,  1366 }
    ,{ CMD_PROC, 0x0000,  1380 }
    ,{ CMD_PROC, 0x0000,  1394 }
    ,{ CMD_PROC, 0x0000,  1402 }
    ,{ CMD_PROC, 0x0000,  1415 }
    ,{ CMD_PROC, 0x0000,  1425 }
    ,{ CMD_PROC, 0x0000,  1438 }
    ,{ CMD_PROC, 0x0000,  1446 }
    ,{ CMD_CONN, 0x0003,  1454 }     // V (0 --> 1) 
    ,{ CMD_CONN, 0x000C,  1460 }     // VEN (1 --> 2) 
    ,{ CMD_CONN, 0x0009,  1466 }     // G (2 --> 1) 
    ,{ CMD_CONN, 0x0005,  1472 }     // SV (2 --> 7) 
    ,{ CMD_CONN, 0x0003,  1478 }     // V (2 --> 28) 
    ,{ CMD_CONN, 0x0007,  1484 }     // JV (2 --> 6) 
    ,{ CMD_CONN, 0x0002,  1490 }     // J (2 --> 5) 
    ,{ CMD_CONN, 0x0008,  1496 }     // JZ (2 --> 4) 
    ,{ CMD_CONN, 0x0004,  1502 }     // Z (2 --> 3) 
    ,{ CMD_CONN, 0x0006,  1508 }     // SZ (2 --> 10) 
    ,{ CMD_CONN, 0x0003,  1514 }     // V (3 --> 2) 
    ,{ CMD_CONN, 0x0001,  1520 }     // S (3 --> 10) 
    ,{ CMD_CONN, 0x0006,  1526 }     // SZ (3 --> 11) 
    ,{ CMD_CONN, 0x0005,  1532 }     // SV (4 --> 2) 
    ,{ CMD_CONN, 0x0002,  1538 }     // J (4 --> 8) 
    ,{ CMD_CONN, 0x000A,  1544 }     // D (4 --> 29) 
    ,{ CMD_CONN, 0x0001,  1550 }     // S (5 --> 2) 
    ,{ CMD_CONN, 0x0004,  1556 }     // Z (5 --> 8) 
    ,{ CMD_CONN, 0x0008,  1562 }     // JZ (5 --> 30) 
    ,{ CMD_CONN, 0x0002,  1568 }     // J (5 --> 31) 
    ,{ CMD_CONN, 0x0003,  1574 }     // V (5 --> 28) 
    ,{ CMD_CONN, 0x0006,  1580 }     // SZ (6 --> 2) 
    ,{ CMD_CONN, 0x0008,  1586 }     // JZ (7 --> 2) 
    ,{ CMD_CONN, 0x0004,  1592 }     // Z (7 --> 20) 
    ,{ CMD_CONN, 0x0001,  1598 }     // S (7 --> 9) 
    ,{ CMD_CONN, 0x0001,  1604 }     // S (8 --> 4) 
    ,{ CMD_CONN, 0x0003,  1610 }     // V (8 --> 5) 
    ,{ CMD_CONN, 0x0001,  1616 }     // S (9 --> 20) 
    ,{ CMD_CONN, 0x0002,  1622 }     // J (9 --> 7) 
    ,{ CMD_CONN, 0x0004,  1628 }     // Z (10 --> 11) 
    ,{ CMD_CONN, 0x0002,  1634 }     // J (10 --> 3) 
    ,{ CMD_CONN, 0x0007,  1640 }     // JV (10 --> 2) 
    ,{ CMD_CONN, 0x0006,  1646 }     // SZ (10 --> 12) 
    ,{ CMD_CONN, 0x0001,  1652 }     // S (10 --> 19) 
    ,{ CMD_CONN, 0x0003,  1658 }     // V (11 --> 10) 
    ,{ CMD_CONN, 0x0007,  1664 }     // JV (11 --> 3) 
    ,{ CMD_CONN, 0x0001,  1670 }     // S (12 --> 18) 
    ,{ CMD_CONN, 0x0003,  1676 }     // V (12 --> 19) 
    ,{ CMD_CONN, 0x0007,  1682 }     // JV (12 --> 10) 
    ,{ CMD_CONN, 0x0004,  1688 }     // Z (12 --> 13) 
    ,{ CMD_CONN, 0x0003,  1694 }     // V (13 --> 12) 
    ,{ CMD_CONN, 0x0008,  1700 }     // JZ (13 --> 14) 
    ,{ CMD_CONN, 0x0005,  1706 }     // SV (14 --> 13) 
    ,{ CMD_CONN, 0x0001,  1712 }     // S (14 --> 17) 
    ,{ CMD_CONN, 0x0006,  1718 }     // SZ (14 --> 16) 
    ,{ CMD_CONN, 0x0005,  1724 }     // SV (16 --> 17) 
    ,{ CMD_CONN, 0x0007,  1730 }     // JV (16 --> 14) 
    ,{ CMD_CONN, 0x0003,  1736 }     // V (17 --> 18) 
    ,{ CMD_CONN, 0x0002,  1742 }     // J (17 --> 14) 
    ,{ CMD_CONN, 0x0008,  1748 }     // JZ (17 --> 16) 
    ,{ CMD_CONN, 0x0002,  1754 }     // J (18 --> 12) 
    ,{ CMD_CONN, 0x0004,  1760 }     // Z (18 --> 17) 
    ,{ CMD_CONN, 0x0001,  1766 }     // S (18 --> 32) 
    ,{ CMD_CONN, 0x0004,  1772 }     // Z (19 --> 12) 
    ,{ CMD_CONN, 0x0003,  1778 }     // V (19 --> 20) 
    ,{ CMD_CONN, 0x0004,  1784 }     // Z (20 --> 19) 
    ,{ CMD_CONN, 0x0003,  1790 }     // V (20 --> 21) 
    ,{ CMD_CONN, 0x0002,  1796 }     // J (20 --> 9) 
    ,{ CMD_CONN, 0x0004,  1802 }     // Z (21 --> 20) 
    ,{ CMD_CONN, 0x0003,  1808 }     // V (21 --> 22) 
    ,{ CMD_CONN, 0x0003,  1814 }     // V (22 --> 23) 
    ,{ CMD_CONN, 0x0002,  1820 }     // J (22 --> 33) 
    ,{ CMD_CONN, 0x0004,  1826 }     // Z (22 --> 21) 
    ,{ CMD_CONN, 0x0004,  1832 }     // Z (23 --> 22) 
    ,{ CMD_CONN, 0x000A,  1838 }     // D (23 --> 24) 
    ,{ CMD_CONN, 0x0009,  1844 }     // G (24 --> 23) 
    ,{ CMD_CONN, 0x0005,  1850 }     // SV (24 --> 26) 
    ,{ CMD_CONN, 0x0001,  1856 }     // S (24 --> 25) 
    ,{ CMD_CONN, 0x0004,  1862 }     // Z (24 --> 22) 
    ,{ CMD_CONN, 0x0003,  1868 }     // V (24 --> 34) 
    ,{ CMD_CONN, 0x0002,  1874 }     // J (25 --> 24) 
    ,{ CMD_CONN, 0x0008,  1880 }     // JZ (26 --> 24) 
    ,{ CMD_CONN, 0x0002,  1886 }     // J (26 --> 34) 
    ,{ CMD_CONN, 0x0005,  1892 }     // SV (26 --> 27) 
    ,{ CMD_CONN, 0x0008,  1898 }     // JZ (27 --> 26) 
    ,{ CMD_CONN, 0x0003,  1904 }     // V (28 --> 36) 
    ,{ CMD_CONN, 0x0007,  1910 }     // JV (28 --> 51) 
    ,{ CMD_CONN, 0x0008,  1916 }     // JZ (28 --> 31) 
    ,{ CMD_CONN, 0x0004,  1922 }     // Z (28 --> 5) 
    ,{ CMD_CONN, 0x0001,  1928 }     // S (28 --> 2) 
    ,{ CMD_CONN, 0x0009,  1934 }     // G (29 --> 4) 
    ,{ CMD_CONN, 0x0005,  1940 }     // SV (30 --> 5) 
    ,{ CMD_CONN, 0x0003,  1946 }     // V (30 --> 31) 
    ,{ CMD_CONN, 0x0008,  1952 }     // JZ (30 --> 61) 
    ,{ CMD_CONN, 0x0003,  1958 }     // V (31 --> 28) 
    ,{ CMD_CONN, 0x0004,  1964 }     // Z (31 --> 30) 
    ,{ CMD_CONN, 0x0001,  1970 }     // S (31 --> 5) 
    ,{ CMD_CONN, 0x0002,  1976 }     // J (32 --> 18) 
    ,{ CMD_CONN, 0x0001,  1982 }     // S (33 --> 22) 
    ,{ CMD_CONN, 0x0002,  1988 }     // J (33 --> 36) 
    ,{ CMD_CONN, 0x0001,  1994 }     // S (34 --> 26) 
    ,{ CMD_CONN, 0x0002,  2000 }     // J (34 --> 38) 
    ,{ CMD_CONN, 0x000C,  2006 }     // VEN (35 --> 37) 
    ,{ CMD_CONN, 0x0001,  2012 }     // S (36 --> 33) 
    ,{ CMD_CONN, 0x0002,  2018 }     // J (36 --> 47) 
    ,{ CMD_CONN, 0x0003,  2024 }     // V (36 --> 37) 
    ,{ CMD_CONN, 0x0004,  2030 }     // Z (36 --> 28) 
    ,{ CMD_CONN, 0x000B,  2036 }     // NOTE (37 --> 35) 
    ,{ CMD_CONN, 0x0003,  2042 }     // V (37 --> 38) 
    ,{ CMD_CONN, 0x0004,  2048 }     // Z (37 --> 36) 
    ,{ CMD_CONN, 0x0004,  2054 }     // Z (38 --> 37) 
    ,{ CMD_CONN, 0x0003,  2060 }     // V (38 --> 39) 
    ,{ CMD_CONN, 0x0002,  2066 }     // J (38 --> 49) 
    ,{ CMD_CONN, 0x0005,  2072 }     // SV (38 --> 164) 
    ,{ CMD_CONN, 0x0003,  2078 }     // V (39 --> 40) 
    ,{ CMD_CONN, 0x0004,  2084 }     // Z (39 --> 38) 
    ,{ CMD_CONN, 0x0002,  2090 }     // J (39 --> 41) 
    ,{ CMD_CONN, 0x0002,  2096 }     // J (40 --> 42) 
    ,{ CMD_CONN, 0x0004,  2102 }     // Z (40 --> 39) 
    ,{ CMD_CONN, 0x0001,  2108 }     // S (41 --> 39) 
    ,{ CMD_CONN, 0x0003,  2114 }     // V (41 --> 42) 
    ,{ CMD_CONN, 0x0007,  2120 }     // JV (41 --> 44) 
    ,{ CMD_CONN, 0x0002,  2126 }     // J (41 --> 45) 
    ,{ CMD_CONN, 0x0001,  2132 }     // S (42 --> 40) 
    ,{ CMD_CONN, 0x0002,  2138 }     // J (42 --> 44) 
    ,{ CMD_CONN, 0x000B,  2144 }     // NOTE (42 --> 43) 
    ,{ CMD_CONN, 0x0004,  2150 }     // Z (42 --> 41) 
    ,{ CMD_CONN, 0x000C,  2156 }     // VEN (43 --> 42) 
    ,{ CMD_CONN, 0x0001,  2162 }     // S (44 --> 42) 
    ,{ CMD_CONN, 0x0006,  2168 }     // SZ (44 --> 41) 
    ,{ CMD_CONN, 0x0004,  2174 }     // Z (44 --> 45) 
    ,{ CMD_CONN, 0x0002,  2180 }     // J (44 --> 163) 
    ,{ CMD_CONN, 0x0001,  2186 }     // S (45 --> 44) 
    ,{ CMD_CONN, 0x0004,  2192 }     // Z (45 --> 41) 
    ,{ CMD_CONN, 0x0001,  2198 }     // S (46 --> 47) 
    ,{ CMD_CONN, 0x0006,  2204 }     // SZ (46 --> 48) 
    ,{ CMD_CONN, 0x0003,  2210 }     // V (46 --> 36) 
    ,{ CMD_CONN, 0x0002,  2216 }     // J (47 --> 46) 
    ,{ CMD_CONN, 0x0004,  2222 }     // Z (47 --> 48) 
    ,{ CMD_CONN, 0x0003,  2228 }     // V (48 --> 47) 
    ,{ CMD_CONN, 0x0007,  2234 }     // JV (48 --> 46) 
    ,{ CMD_CONN, 0x0006,  2240 }     // SZ (48 --> 50) 
    ,{ CMD_CONN, 0x0001,  2246 }     // S (49 --> 38) 
    ,{ CMD_CONN, 0x0002,  2252 }     // J (49 --> 55) 
    ,{ CMD_CONN, 0x0006,  2258 }     // SZ (50 --> 51) 
    ,{ CMD_CONN, 0x0007,  2264 }     // JV (50 --> 48) 
    ,{ CMD_CONN, 0x0008,  2270 }     // JZ (51 --> 53) 
    ,{ CMD_CONN, 0x0007,  2276 }     // JV (51 --> 50) 
    ,{ CMD_CONN, 0x0006,  2282 }     // SZ (51 --> 28) 
    ,{ CMD_CONN, 0x0005,  2288 }     // SV (51 --> 36) 
    ,{ CMD_CONN, 0x000A,  2294 }     // D (52 --> 53) 
    ,{ CMD_CONN, 0x0009,  2300 }     // G (53 --> 52) 
    ,{ CMD_CONN, 0x0001,  2306 }     // S (53 --> 51) 
    ,{ CMD_CONN, 0x0006,  2312 }     // SZ (54 --> 60) 
    ,{ CMD_CONN, 0x0007,  2318 }     // JV (54 --> 55) 
    ,{ CMD_CONN, 0x0001,  2324 }     // S (55 --> 49) 
    ,{ CMD_CONN, 0x0006,  2330 }     // SZ (55 --> 54) 
    ,{ CMD_CONN, 0x0004,  2336 }     // Z (55 --> 56) 
    ,{ CMD_CONN, 0x0001,  2342 }     // S (56 --> 57) 
    ,{ CMD_CONN, 0x0005,  2348 }     // SV (56 --> 55) 
    ,{ CMD_CONN, 0x0001,  2354 }     // S (57 --> 58) 
    ,{ CMD_CONN, 0x0002,  2360 }     // J (57 --> 56) 
    ,{ CMD_CONN, 0x0001,  2366 }     // S (58 --> 59) 
    ,{ CMD_CONN, 0x0002,  2372 }     // J (58 --> 57) 
    ,{ CMD_CONN, 0x0002,  2378 }     // J (59 --> 58) 
    ,{ CMD_CONN, 0x0001,  2384 }     // S (59 --> 60) 
    ,{ CMD_CONN, 0x0008,  2390 }     // JZ (60 --> 59) 
    ,{ CMD_CONN, 0x0007,  2396 }     // JV (60 --> 54) 
    ,{ CMD_CONN, 0x0005,  2402 }     // SV (60 --> 61) 
    ,{ CMD_CONN, 0x0008,  2408 }     // JZ (61 --> 60) 
    ,{ CMD_CONN, 0x0005,  2414 }     // SV (61 --> 30) 
    ,{ CMD_CONN, 0x0004,  2420 }     // Z (61 --> 62) 
    ,{ CMD_CONN, 0x0003,  2426 }     // V (62 --> 61) 
    ,{ CMD_CONN, 0x0008,  2432 }     // JZ (62 --> 75) 
    ,{ CMD_CONN, 0x0003,  2438 }     // V (63 --> 64) 
    ,{ CMD_CONN, 0x0003,  2444 }     // V (64 --> 64) 
    ,{ CMD_CONN, 0x0007,  2450 }     // JV (64 --> 65) 
    ,{ CMD_CONN, 0x0002,  2456 }     // J (64 --> 65) 
    ,{ CMD_CONN, 0x0008,  2462 }     // JZ (64 --> 66) 
    ,{ CMD_CONN, 0x0005,  2468 }     // SV (65 --> 64) 
    ,{ CMD_CONN, 0x0007,  2474 }     // JV (65 --> 65) 
    ,{ CMD_CONN, 0x0004,  2480 }     // Z (65 --> 66) 
    ,{ CMD_CONN, 0x0004,  2486 }     // Z (66 --> 66) 
    ,{ CMD_CONN, 0x0001,  2492 }     // S (66 --> 66) 
    ,{ CMD_CONN, 0x0005,  2498 }     // SV (66 --> 64) 
    ,{ CMD_CONN, 0x0002,  2504 }     // J (73 --> 80) 
    ,{ CMD_CONN, 0x0004,  2510 }     // Z (73 --> 78) 
    ,{ CMD_CONN, 0x0006,  2516 }     // SZ (73 --> 76) 
    ,{ CMD_CONN, 0x0001,  2522 }     // S (74 --> 74) 
    ,{ CMD_CONN, 0x0005,  2528 }     // SV (75 --> 62) 
    ,{ CMD_CONN, 0x0001,  2534 }     // S (75 --> 78) 
    ,{ CMD_CONN, 0x0004,  2540 }     // Z (75 --> 77) 
    ,{ CMD_CONN, 0x0004,  2546 }     // Z (76 --> 77) 
    ,{ CMD_CONN, 0x0007,  2552 }     // JV (76 --> 73) 
    ,{ CMD_CONN, 0x0001,  2558 }     // S (77 --> 75) 
    ,{ CMD_CONN, 0x0003,  2564 }     // V (77 --> 76) 
    ,{ CMD_CONN, 0x0002,  2570 }     // J (78 --> 78) 
    ,{ CMD_CONN, 0x0003,  2576 }     // V (78 --> 73) 
    ,{ CMD_CONN, 0x0004,  2582 }     // Z (78 --> 75) 
    ,{ CMD_CONN, 0x0004,  2588 }     // Z (79 --> 82) 
    ,{ CMD_CONN, 0x0003,  2594 }     // V (80 --> 81) 
    ,{ CMD_CONN, 0x0008,  2600 }     // JZ (80 --> 82) 
    ,{ CMD_CONN, 0x0001,  2606 }     // S (80 --> 73) 
    ,{ CMD_CONN, 0x0003,  2612 }     // V (81 --> 81) 
    ,{ CMD_CONN, 0x0004,  2618 }     // Z (81 --> 80) 
    ,{ CMD_CONN, 0x0004,  2624 }     // Z (82 --> 81) 
    ,{ CMD_CONN, 0x0005,  2630 }     // SV (82 --> 80) 
    ,{ CMD_CONN, 0x0003,  2636 }     // V (83 --> 84) 
    ,{ CMD_CONN, 0x0008,  2642 }     // JZ (83 --> 85) 
    ,{ CMD_CONN, 0x0004,  2648 }     // Z (84 --> 83) 
    ,{ CMD_CONN, 0x000A,  2654 }     // D (84 --> 84) 
    ,{ CMD_CONN, 0x0004,  2660 }     // Z (85 --> 85) 
    ,{ CMD_CONN, 0x0005,  2666 }     // SV (85 --> 83) 
    ,{ CMD_CONN, 0x0002,  2672 }     // J (86 --> 87) 
    ,{ CMD_CONN, 0x0001,  2678 }     // S (86 --> 124) 
    ,{ CMD_CONN, 0x0006,  2684 }     // SZ (86 --> 123) 
    ,{ CMD_CONN, 0x0009,  2690 }     // G (86 --> 131) 
    ,{ CMD_CONN, 0x0002,  2696 }     // J (87 --> 88) 
    ,{ CMD_CONN, 0x0004,  2702 }     // Z (87 --> 132) 
    ,{ CMD_CONN, 0x0005,  2708 }     // SV (87 --> 86) 
    ,{ CMD_CONN, 0x0002,  2714 }     // J (88 --> 133) 
    ,{ CMD_CONN, 0x0001,  2720 }     // S (96 --> 98) 
    ,{ CMD_CONN, 0x0003,  2726 }     // V (97 --> 96) 
    ,{ CMD_CONN, 0x0001,  2732 }     // S (98 --> 100) 
    ,{ CMD_CONN, 0x0002,  2738 }     // J (98 --> 96) 
    ,{ CMD_CONN, 0x0005,  2744 }     // SV (98 --> 101) 
    ,{ CMD_CONN, 0x0003,  2750 }     // V (99 --> 100) 
    ,{ CMD_CONN, 0x0004,  2756 }     // Z (100 --> 99) 
    ,{ CMD_CONN, 0x0003,  2762 }     // V (100 --> 101) 
    ,{ CMD_CONN, 0x0002,  2768 }     // J (100 --> 98) 
    ,{ CMD_CONN, 0x0004,  2774 }     // Z (101 --> 100) 
    ,{ CMD_CONN, 0x0008,  2780 }     // JZ (101 --> 98) 
    ,{ CMD_CONN, 0x0006,  2786 }     // SZ (101 --> 103) 
    ,{ CMD_CONN, 0x0001,  2792 }     // S (101 --> 104) 
    ,{ CMD_CONN, 0x0006,  2798 }     // SZ (102 --> 104) 
    ,{ CMD_CONN, 0x0003,  2804 }     // V (103 --> 104) 
    ,{ CMD_CONN, 0x0007,  2810 }     // JV (103 --> 101) 
    ,{ CMD_CONN, 0x0002,  2816 }     // J (104 --> 101) 
    ,{ CMD_CONN, 0x0004,  2822 }     // Z (104 --> 103) 
    ,{ CMD_CONN, 0x0003,  2828 }     // V (104 --> 105) 
    ,{ CMD_CONN, 0x0005,  2834 }     // SV (104 --> 106) 
    ,{ CMD_CONN, 0x0007,  2840 }     // JV (104 --> 102) 
    ,{ CMD_CONN, 0x0004,  2846 }     // Z (105 --> 104) 
    ,{ CMD_CONN, 0x0001,  2852 }     // S (105 --> 106) 
    ,{ CMD_CONN, 0x0005,  2858 }     // SV (105 --> 107) 
    ,{ CMD_CONN, 0x0002,  2864 }     // J (106 --> 105) 
    ,{ CMD_CONN, 0x0008,  2870 }     // JZ (106 --> 104) 
    ,{ CMD_CONN, 0x0003,  2876 }     // V (106 --> 107) 
    ,{ CMD_CONN, 0x0004,  2882 }     // Z (107 --> 106) 
    ,{ CMD_CONN, 0x0008,  2888 }     // JZ (107 --> 105) 
    ,{ CMD_CONN, 0x000C,  2894 }     // VEN (108 --> 100) 
    ,{ CMD_CONN, 0x0002,  2900 }     // J (115 --> 117) 
    ,{ CMD_CONN, 0x0004,  2906 }     // Z (116 --> 115) 
    ,{ CMD_CONN, 0x0002,  2912 }     // J (116 --> 119) 
    ,{ CMD_CONN, 0x0001,  2918 }     // S (117 --> 115) 
    ,{ CMD_CONN, 0x0003,  2924 }     // V (117 --> 118) 
    ,{ CMD_CONN, 0x0002,  2930 }     // J (118 --> 121) 
    ,{ CMD_CONN, 0x0004,  2936 }     // Z (118 --> 117) 
    ,{ CMD_CONN, 0x0002,  2942 }     // J (119 --> 122) 
    ,{ CMD_CONN, 0x0001,  2948 }     // S (119 --> 116) 
    ,{ CMD_CONN, 0x0003,  2954 }     // V (120 --> 121) 
    ,{ CMD_CONN, 0x0004,  2960 }     // Z (121 --> 120) 
    ,{ CMD_CONN, 0x0002,  2966 }     // J (121 --> 123) 
    ,{ CMD_CONN, 0x0003,  2972 }     // V (121 --> 122) 
    ,{ CMD_CONN, 0x0005,  2978 }     // SV (121 --> 118) 
    ,{ CMD_CONN, 0x0007,  2984 }     // JV (121 --> 130) 
    ,{ CMD_CONN, 0x0004,  2990 }     // Z (122 --> 121) 
    ,{ CMD_CONN, 0x0003,  2996 }     // V (122 --> 119) 
    ,{ CMD_CONN, 0x0001,  3002 }     // S (123 --> 121) 
    ,{ CMD_CONN, 0x0002,  3008 }     // J (123 --> 132) 
    ,{ CMD_CONN, 0x0003,  3014 }     // V (123 --> 124) 
    ,{ CMD_CONN, 0x0007,  3020 }     // JV (123 --> 86) 
    ,{ CMD_CONN, 0x0002,  3026 }     // J (124 --> 86) 
    ,{ CMD_CONN, 0x0003,  3032 }     // V (124 --> 125) 
    ,{ CMD_CONN, 0x0004,  3038 }     // Z (124 --> 123) 
    ,{ CMD_CONN, 0x0004,  3044 }     // Z (125 --> 124) 
    ,{ CMD_CONN, 0x0003,  3050 }     // V (125 --> 126) 
    ,{ CMD_CONN, 0x0004,  3056 }     // Z (126 --> 125) 
    ,{ CMD_CONN, 0x0003,  3062 }     // V (126 --> 127) 
    ,{ CMD_CONN, 0x0004,  3068 }     // Z (127 --> 126) 
    ,{ CMD_CONN, 0x0007,  3074 }     // JV (127 --> 129) 
    ,{ CMD_CONN, 0x000C,  3080 }     // VEN (128 --> 127) 
    ,{ CMD_CONN, 0x0006,  3086 }     // SZ (129 --> 127) 
    ,{ CMD_CONN, 0x0008,  3092 }     // JZ (129 --> 140) 
    ,{ CMD_CONN, 0x0001,  3098 }     // S (130 --> 121) 
    ,{ CMD_CONN, 0x000A,  3104 }     // D (131 --> 86) 
    ,{ CMD_CONN, 0x0002,  3110 }     // J (131 --> 133) 
    ,{ CMD_CONN, 0x0001,  3116 }     // S (132 --> 123) 
    ,{ CMD_CONN, 0x0003,  3122 }     // V (132 --> 87) 
    ,{ CMD_CONN, 0x0005,  3128 }     // SV (133 --> 131) 
    ,{ CMD_CONN, 0x0002,  3134 }     // J (133 --> 134) 
    ,{ CMD_CONN, 0x0001,  3140 }     // S (134 --> 133) 
    ,{ CMD_CONN, 0x0008,  3146 }     // JZ (134 --> 136) 
    ,{ CMD_CONN, 0x0009,  3152 }     // G (134 --> 139) 
    ,{ CMD_CONN, 0x0003,  3158 }     // V (135 --> 136) 
    ,{ CMD_CONN, 0x0004,  3164 }     // Z (136 --> 135) 
    ,{ CMD_CONN, 0x0006,  3170 }     // SZ (136 --> 134) 
    ,{ CMD_CONN, 0x0002,  3176 }     // J (136 --> 138) 
    ,{ CMD_CONN, 0x0003,  3182 }     // V (136 --> 137) 
    ,{ CMD_CONN, 0x0005,  3188 }     // SV (136 --> 160) 
    ,{ CMD_CONN, 0x0002,  3194 }     // J (137 --> 138) 
    ,{ CMD_CONN, 0x0003,  3200 }     // V (137 --> 140) 
    ,{ CMD_CONN, 0x0004,  3206 }     // Z (137 --> 136) 
    ,{ CMD_CONN, 0x0001,  3212 }     // S (138 --> 136) 
    ,{ CMD_CONN, 0x000A,  3218 }     // D (139 --> 134) 
    ,{ CMD_CONN, 0x0002,  3224 }     // J (139 --> 137) 
    ,{ CMD_CONN, 0x0002,  3230 }     // J (140 --> 137) 
    ,{ CMD_CONN, 0x0005,  3236 }     // SV (140 --> 129) 
    ,{ CMD_CONN, 0x0002,  3242 }     // J (147 --> 149) 
    ,{ CMD_CONN, 0x0001,  3248 }     // S (148 --> 147) 
    ,{ CMD_CONN, 0x0003,  3254 }     // V (148 --> 149) 
    ,{ CMD_CONN, 0x0002,  3260 }     // J (148 --> 154) 
    ,{ CMD_CONN, 0x0004,  3266 }     // Z (149 --> 148) 
    ,{ CMD_CONN, 0x0007,  3272 }     // JV (149 --> 152) 
    ,{ CMD_CONN, 0x0001,  3278 }     // S (149 --> 149) 
    ,{ CMD_CONN, 0x0002,  3284 }     // J (149 --> 149) 
    ,{ CMD_CONN, 0x0002,  3290 }     // J (150 --> 151) 
    ,{ CMD_CONN, 0x0006,  3296 }     // SZ (150 --> 149) 
    ,{ CMD_CONN, 0x0008,  3302 }     // JZ (151 --> 153) 
    ,{ CMD_CONN, 0x0006,  3308 }     // SZ (151 --> 148) 
    ,{ CMD_CONN, 0x0006,  3314 }     // SZ (152 --> 149) 
    ,{ CMD_CONN, 0x0002,  3320 }     // J (152 --> 152) 
    ,{ CMD_CONN, 0x0004,  3326 }     // Z (152 --> 152) 
    ,{ CMD_CONN, 0x0007,  3332 }     // JV (152 --> 136) 
    ,{ CMD_CONN, 0x0005,  3338 }     // SV (153 --> 151) 
    ,{ CMD_CONN, 0x0006,  3344 }     // SZ (153 --> 153) 
    ,{ CMD_CONN, 0x0002,  3350 }     // J (153 --> 159) 
    ,{ CMD_CONN, 0x0005,  3356 }     // SV (154 --> 152) 
    ,{ CMD_CONN, 0x0003,  3362 }     // V (154 --> 155) 
    ,{ CMD_CONN, 0x0002,  3368 }     // J (154 --> 157) 
    ,{ CMD_CONN, 0x000A,  3374 }     // D (155 --> 158) 
    ,{ CMD_CONN, 0x0001,  3380 }     // S (156 --> 153) 
    ,{ CMD_CONN, 0x0004,  3386 }     // Z (156 --> 156) 
    ,{ CMD_CONN, 0x0004,  3392 }     // Z (157 --> 156) 
    ,{ CMD_CONN, 0x0005,  3398 }     // SV (157 --> 155) 
    ,{ CMD_CONN, 0x0008,  3404 }     // JZ (158 --> 157) 
    ,{ CMD_CONN, 0x0004,  3410 }     // Z (160 --> 150) 
    ,{ CMD_CONN, 0x0009,  3416 }     // G (160 --> 161) 
    ,{ CMD_CONN, 0x0002,  3422 }     // J (160 --> 136) 
    ,{ CMD_CONN, 0x0001,  3428 }     // S (163 --> 44) 
    ,{ CMD_CONN, 0x0006,  3434 }     // SZ (163 --> 45) 
    ,{ CMD_CONN, 0x0003,  3440 }     // V (164 --> 38) 
    ,{ CMD_CONN, 0x0002,  3446 }     // J (164 --> 40) 
    ,{ CMD_ACTI, 0x0001,  3452 }
    ,{ CMD_ACTI, 0x0001,  3464 }
    ,{ CMD_ACTI, 0x0001,  3474 }
    ,{ CMD_ACTI, 0x0001,  3484 }
    ,{ CMD_ACTI, 0x0001,  3496 }
    ,{ CMD_ACTI, 0x0001,  3506 }
    ,{ CMD_ACTI, 0x0001,  3516 }
    ,{ CMD_ACTI, 0x0001,  3528 }
    ,{ CMD_ACTI, 0x0001,  3538 }
    ,{ CMD_ACTI, 0x0001,  3548 }
    ,{ CMD_ACTI, 0x0001,  3560 }
    ,{ CMD_ACTI, 0x0001,  3570 }
    ,{ CMD_ACTI, 0x0001,  3580 }
    ,{ CMD_ACTI, 0x0001,  3592 }
    ,{ CMD_ACTI, 0x0001,  3602 }
    ,{ CMD_ACTI, 0x0001,  3612 }
    ,{ CMD_ACTI, 0x0001,  3624 }
    ,{ CMD_ACTI, 0x0001,  3634 }
    ,{ CMD_ACTI, 0x0001,  3644 }
    ,{ CMD_ACTI, 0x0001,  3656 }
    ,{ CMD_ACTI, 0x0001,  3666 }
    ,{ CMD_ACTI, 0x0001,  3676 }
    ,{ CMD_ACTI, 0x0001,  3688 }
    ,{ CMD_ACTI, 0x0001,  3698 }
    ,{ CMD_ACTI, 0x0002,  3708 }
    ,{ CMD_ACTI, 0x0002,  3720 }
    ,{ CMD_ACTI, 0x0002,  3730 }
    ,{ CMD_ACTI, 0x0002,  3740 }
    ,{ CMD_ACTI, 0x0002,  3752 }
    ,{ CMD_ACTI, 0x0002,  3762 }
    ,{ CMD_ACTI, 0x0002,  3772 }
    ,{ CMD_ACTI, 0x0002,  3784 }
    ,{ CMD_ACTI, 0x0002,  3794 }
    ,{ CMD_ACTI, 0x0002,  3804 }
    ,{ CMD_ACTI, 0x0002,  3816 }
    ,{ CMD_ACTI, 0x0002,  3826 }
    ,{ CMD_ACTI, 0x0002,  3836 }
    ,{ CMD_ACTI, 0x0002,  3848 }
    ,{ CMD_ACTI, 0x0002,  3858 }
    ,{ CMD_ACTI, 0x0002,  3868 }
    ,{ CMD_ACTI, 0x0002,  3880 }
    ,{ CMD_ACTI, 0x0002,  3890 }
    ,{ CMD_ACTI, 0x0002,  3900 }
    ,{ CMD_ACTI, 0x0002,  3912 }
    ,{ CMD_ACTI, 0x0002,  3922 }
    ,{ CMD_ACTI, 0x0002,  3932 }
    ,{ CMD_ACTI, 0x0002,  3944 }
    ,{ CMD_ACTI, 0x0002,  3954 }
    ,{ CMD_ACTI, 0x0002,  3964 }
    ,{ CMD_ACTI, 0x0002,  3976 }
    ,{ CMD_ACTI, 0x0002,  3986 }
    ,{ CMD_ACTI, 0x0002,  3996 }
    ,{ CMD_ACTI, 0x0002,  4004 }
    ,{ CMD_ACTI, 0x0002,  4012 }
    ,{ CMD_ACTI, 0x0003,  4024 }
    ,{ CMD_ACTI, 0x0003,  4036 }
    ,{ CMD_ACTI, 0x0003,  4046 }
    ,{ CMD_ACTI, 0x0003,  4056 }
    ,{ CMD_ACTI, 0x0003,  4068 }
    ,{ CMD_ACTI, 0x0003,  4078 }
    ,{ CMD_ACTI, 0x0003,  4088 }
    ,{ CMD_ACTI, 0x0003,  4100 }
    ,{ CMD_ACTI, 0x0003,  4110 }
    ,{ CMD_ACTI, 0x0003,  4120 }
    ,{ CMD_ACTI, 0x0003,  4132 }
    ,{ CMD_ACTI, 0x0003,  4142 }
    ,{ CMD_ACTI, 0x0003,  4152 }
    ,{ CMD_ACTI, 0x0003,  4164 }
    ,{ CMD_ACTI, 0x0003,  4174 }
    ,{ CMD_ACTI, 0x0003,  4184 }
    ,{ CMD_ACTI, 0x0003,  4196 }
    ,{ CMD_ACTI, 0x0003,  4206 }
    ,{ CMD_ACTI, 0x0003,  4216 }
    ,{ CMD_ACTI, 0x0003,  4228 }
    ,{ CMD_ACTI, 0x0003,  4238 }
    ,{ CMD_ACTI, 0x0003,  4248 }
    ,{ CMD_ACTI, 0x0003,  4260 }
    ,{ CMD_ACTI, 0x0003,  4270 }
    ,{ CMD_ACTI, 0x0003,  4280 }
    ,{ CMD_ACTI, 0x0003,  4292 }
    ,{ CMD_ACTI, 0x0003,  4302 }
    ,{ CMD_ACTI, 0x0003,  4312 }
    ,{ CMD_ACTI, 0x0003,  4324 }
    ,{ CMD_ACTI, 0x0003,  4334 }
    ,{ CMD_ACTI, 0x0003,  4344 }
    ,{ CMD_ACTI, 0x0004,  4352 }
    ,{ CMD_ACTI, 0x0004,  4364 }
    ,{ CMD_ACTI, 0x0004,  4374 }
    ,{ CMD_ACTI, 0x0004,  4384 }
    ,{ CMD_ACTI, 0x0004,  4396 }
    ,{ CMD_ACTI, 0x0004,  4406 }
    ,{ CMD_ACTI, 0x0004,  4416 }
    ,{ CMD_ACTI, 0x0004,  4428 }
    ,{ CMD_ACTI, 0x0004,  4438 }
    ,{ CMD_ACTI, 0x0004,  4448 }
    ,{ CMD_ACTI, 0x0004,  4460 }
    ,{ CMD_ACTI, 0x0004,  4470 }
    ,{ CMD_ACTI, 0x0004,  4480 }
    ,{ CMD_ACTI, 0x0004,  4492 }
    ,{ CMD_ACTI, 0x0004,  4502 }
    ,{ CMD_ACTI, 0x0004,  4512 }
    ,{ CMD_ACTI, 0x0004,  4524 }
    ,{ CMD_ACTI, 0x0004,  4534 }
    ,{ CMD_ACTI, 0x0004,  4544 }
    ,{ CMD_ACTI, 0x0004,  4556 }
    ,{ CMD_ACTI, 0x0004,  4566 }
    ,{ CMD_ACTI, 0x0004,  4576 }
    ,{ CMD_ACTI, 0x0004,  4588 }
    ,{ CMD_ACTI, 0x0004,  4598 }
    ,{ CMD_ACTI, 0x0004,  4608 }
    ,{ CMD_ACTI, 0x0004,  4620 }
    ,{ CMD_ACTI, 0x0004,  4630 }
    ,{ CMD_ACTI, 0x0004,  4640 }
    ,{ CMD_ACTI, 0x0004,  4652 }
    ,{ CMD_ACTI, 0x0004,  4662 }
    ,{ CMD_ACTI, 0x0004,  4672 }
    ,{ CMD_ACTI, 0x0004,  4680 }
    ,{ CMD_ACTI, 0x0004,  4688 }
    ,{ CMD_ACTI, 0x0004,  4696 }
    ,{ CMD_ACTI, 0x0004,  4708 }
    ,{ CMD_ACTI, 0x0004,  4718 }
    ,{ CMD_ACTI, 0x0005,  4728 }
    ,{ CMD_ACTI, 0x0005,  4740 }
    ,{ CMD_ACTI, 0x0005,  4750 }
    ,{ CMD_ACTI, 0x0005,  4760 }
    ,{ CMD_ACTI, 0x0005,  4772 }
    ,{ CMD_ACTI, 0x0005,  4782 }
    ,{ CMD_ACTI, 0x0005,  4792 }
    ,{ CMD_ACTI, 0x0005,  4804 }
    ,{ CMD_ACTI, 0x0005,  4814 }
    ,{ CMD_ACTI, 0x0005,  4824 }
    ,{ CMD_ACTI, 0x0005,  4836 }
    ,{ CMD_ACTI, 0x0005,  4846 }
    ,{ CMD_ACTI, 0x0006,  4856 }
    ,{ CMD_ACTI, 0x0006,  4868 }
    ,{ CMD_ACTI, 0x0006,  4878 }
    ,{ CMD_ACTI, 0x0006,  4888 }
    ,{ CMD_ACTI, 0x0006,  4900 }
    ,{ CMD_ACTI, 0x0006,  4910 }
    ,{ CMD_ACTI, 0x0006,  4920 }
    ,{ CMD_ACTI, 0x0007,  4928 }
    ,{ CMD_ACTI, 0x0007,  4940 }
    ,{ CMD_ACTI, 0x0007,  4950 }
    ,{ CMD_ACTI, 0x0007,  4960 }
    ,{ CMD_ACTI, 0x0007,  4972 }
    ,{ CMD_ACTI, 0x0007,  4982 }
    ,{ CMD_ACTI, 0x0007,  4992 }
    ,{ CMD_ACTI, 0x0007,  5004 }
    ,{ CMD_ACTI, 0x0007,  5014 }
    ,{ CMD_ACTI, 0x0007,  5024 }
    ,{ CMD_ACTI, 0x0008,  5038 }
    ,{ CMD_ACTI, 0x0008,  5050 }
    ,{ CMD_ACTI, 0x0008,  5060 }
    ,{ CMD_ACTI, 0x0008,  5070 }
    ,{ CMD_ACTI, 0x0008,  5082 }
    ,{ CMD_ACTI, 0x0008,  5092 }
    ,{ CMD_ACTI, 0x0008,  5102 }
    ,{ CMD_ACTI, 0x0008,  5114 }
    ,{ CMD_ACTI, 0x0008,  5124 }
    ,{ CMD_ACTI, 0x0008,  5134 }
    ,{ CMD_ACTI, 0x0008,  5146 }
    ,{ CMD_ACTI, 0x0008,  5156 }
    ,{ CMD_ACTI, 0x0009,  5166 }
    ,{ CMD_ACTI, 0x0009,  5178 }
    ,{ CMD_ACTI, 0x0009,  5188 }
    ,{ CMD_ACTI, 0x0009,  5198 }
    ,{ CMD_ACTI, 0x000A,  5206 }
    ,{ CMD_ACTI, 0x000A,  5218 }
    ,{ CMD_ACTI, 0x000A,  5228 }
    ,{ CMD_ACTI, 0x000A,  5238 }
    ,{ CMD_ACTI, 0x000A,  5250 }
    ,{ CMD_ACTI, 0x000A,  5260 }
    ,{ CMD_ACTI, 0x000A,  5270 }
    ,{ CMD_ACTI, 0x000A,  5282 }
    ,{ CMD_ACTI, 0x000A,  5292 }
    ,{ CMD_ACTI, 0x000B,  5302 }
    ,{ CMD_ACTI, 0x000B,  5314 }
    ,{ CMD_ACTI, 0x000B,  5324 }
    ,{ CMD_ACTI, 0x000B,  5334 }
    ,{ CMD_ACTI, 0x000B,  5341 }
    ,{ CMD_ACTI, 0x000B,  5348 }
    ,{ CMD_ACTI, 0x000C,  5358 }
    ,{ CMD_ACTI, 0x1011,  5366 }
    ,{ CMD_ACTI, 0x1012,  5382 }
    ,{ CMD_ACTI, 0x1112,  5386 }
    ,{ CMD_ACTI, 0x1312,  5390 }
    ,{ CMD_ACTI, 0x1312,  5396 }
    ,{ CMD_ACTI, 0x1412,  5402 }
    ,{ CMD_ACTI, 0x1612,  5406 }
    ,{ CMD_ACTI, 0x1712,  5412 }
    ,{ CMD_ACTI, 0x1812,  5416 }
    ,{ CMD_ACTI, 0x1A12,  5420 }
    ,{ CMD_ACTI, 0x1B12,  5426 }
    ,{ CMD_ACTI, 0x1C12,  5430 }
    ,{ CMD_ACTI, 0x1D12,  5434 }
    ,{ CMD_ACTI, 0x1E12,  5438 }
    ,{ CMD_ACTI, 0x1F12,  5442 }
    ,{ CMD_ACTI, 0x2012,  5446 }
    ,{ CMD_ACTI, 0x2212,  5450 }
    ,{ CMD_ACTI, 0x2512,  5454 }
    ,{ CMD_ACTI, 0x2512,  5458 }
    ,{ CMD_ACTI, 0x2612,  5462 }
    ,{ CMD_ACTI, 0x2712,  5466 }
    ,{ CMD_ACTI, 0x2812,  5470 }
    ,{ CMD_ACTI, 0x2912,  5474 }
    ,{ CMD_ACTI, 0x2A12,  5478 }
    ,{ CMD_ACTI, 0x2B12,  5482 }
    ,{ CMD_ACTI, 0x2B12,  5488 }
    ,{ CMD_ACTI, 0x2B12,  5494 }
    ,{ CMD_ACTI, 0x2B12,  5505 }
    ,{ CMD_ACTI, 0x2C12,  5516 }
    ,{ CMD_ACTI, 0x2D12,  5520 }
    ,{ CMD_ACTI, 0x2E12,  5524 }
    ,{ CMD_ACTI, 0x2F12,  5528 }
    ,{ CMD_ACTI, 0x2F12,  5534 }
    ,{ CMD_ACTI, 0x3112,  5540 }
    ,{ CMD_ACTI, 0x3212,  5544 }
    ,{ CMD_ACTI, 0x3312,  5548 }
    ,{ CMD_ACTI, 0x3412,  5552 }
    ,{ CMD_ACTI, 0x3512,  5556 }
    ,{ CMD_ACTI, 0x3512,  5562 }
    ,{ CMD_ACTI, 0x3612,  5568 }
    ,{ CMD_ACTI, 0x4012,  5572 }
    ,{ CMD_ACTI, 0x4012,  5585 }
    ,{ CMD_ACTI, 0x4012,  5598 }
    ,{ CMD_ACTI, 0x4012,  5611 }
    ,{ CMD_ACTI, 0x4712,  5622 }
    ,{ CMD_ACTI, 0x4E12,  5631 }
    ,{ CMD_ACTI, 0x5212,  5635 }
    ,{ CMD_ACTI, 0x5312,  5639 }
    ,{ CMD_ACTI, 0x9712,  5643 }
    ,{ CMD_ACTI, 0x9812,  5649 }
    ,{ CMD_ACTI, 0x9E12,  5652 }
    ,{ CMD_ACTI, 0xA112,  5658 }
    ,{ CMD_ACTI, 0x1617,  5662 }
    ,{ CMD_ACTI, 0x4718,  5677 }
    ,{ CMD_ACTI, 0x231C,  5695 }
    ,{ CMD_ACTI, 0x1E1F,  5704 }
    ,{ CMD_ACTI, 0x532D,  5711 }
    ,{ CMD_ACTI, 0x3433,  5724 }
    ,{ CMD_ACTI, 0x9834,  5733 }
    ,{ CMD_ACTI, 0x1B36,  5746 }
    ,{ CMD_ACTI, 0x2236,  5750 }
    ,{ CMD_ACTI, 0x2A36,  5754 }
    ,{ CMD_ACTI, 0x2D36,  5758 }
    ,{ CMD_ACTI, 0x3636,  5763 }
    ,{ CMD_ACTI, 0xA136,  5769 }
    ,{ CMD_ACTI, 0x1B37,  5775 }
    ,{ CMD_ACTI, 0x1B37,  5779 }
    ,{ CMD_ACTI, 0x2237,  5783 }
    ,{ CMD_ACTI, 0x2A37,  5787 }
    ,{ CMD_ACTI, 0x3637,  5791 }
    ,{ CMD_ACTI, 0x4837,  5795 }
    ,{ CMD_ACTI, 0xA137,  5804 }
    ,{ CMD_ACTI, 0x0038,  5808 }
    ,{ CMD_ACTI, 0x0039,  5811 }
    ,{ CMD_ACTI, 0x133B,  5815 }
    ,{ CMD_ACTI, 0x133B,  5822 }
    ,{ CMD_ACTI, 0x2F3B,  5833 }
    ,{ CMD_ACTI, 0x103C,  5842 }
    ,{ CMD_ACTI, 0x103C,  5846 }
    ,{ CMD_ACTI, 0x103C,  5853 }
    ,{ CMD_ACTI, 0x113C,  5861 }
    ,{ CMD_ACTI, 0x133C,  5865 }
    ,{ CMD_ACTI, 0x133C,  5871 }
    ,{ CMD_ACTI, 0x143C,  5877 }
    ,{ CMD_ACTI, 0x153C,  5881 }
    ,{ CMD_ACTI, 0x163C,  5885 }
    ,{ CMD_ACTI, 0x163C,  5889 }
    ,{ CMD_ACTI, 0x163C,  5896 }
    ,{ CMD_ACTI, 0x173C,  5904 }
    ,{ CMD_ACTI, 0x183C,  5908 }
    ,{ CMD_ACTI, 0x193C,  5912 }
    ,{ CMD_ACTI, 0x1A3C,  5916 }
    ,{ CMD_ACTI, 0x1B3C,  5921 }
    ,{ CMD_ACTI, 0x1C3C,  5925 }
    ,{ CMD_ACTI, 0x1D3C,  5929 }
    ,{ CMD_ACTI, 0x1D3C,  5935 }
    ,{ CMD_ACTI, 0x1E3C,  5944 }
    ,{ CMD_ACTI, 0x1E3C,  5950 }
    ,{ CMD_ACTI, 0x1E3C,  5965 }
    ,{ CMD_ACTI, 0x1F3C,  5971 }
    ,{ CMD_ACTI, 0x1F3C,  5977 }
    ,{ CMD_ACTI, 0x203C,  5984 }
    ,{ CMD_ACTI, 0x203C,  5990 }
    ,{ CMD_ACTI, 0x213C,  6006 }
    ,{ CMD_ACTI, 0x223C,  6010 }
    ,{ CMD_ACTI, 0x233C,  6014 }
    ,{ CMD_ACTI, 0x243C,  6018 }
    ,{ CMD_ACTI, 0x243C,  6024 }
    ,{ CMD_ACTI, 0x253C,  6029 }
    ,{ CMD_ACTI, 0x253C,  6033 }
    ,{ CMD_ACTI, 0x263C,  6037 }
    ,{ CMD_ACTI, 0x273C,  6041 }
    ,{ CMD_ACTI, 0x283C,  6045 }
    ,{ CMD_ACTI, 0x283C,  6051 }
    ,{ CMD_ACTI, 0x293C,  6059 }
    ,{ CMD_ACTI, 0x293C,  6065 }
    ,{ CMD_ACTI, 0x2A3C,  6073 }
    ,{ CMD_ACTI, 0x2B3C,  6077 }
    ,{ CMD_ACTI, 0x2B3C,  6085 }
    ,{ CMD_ACTI, 0x2B3C,  6093 }
    ,{ CMD_ACTI, 0x2C3C,  6099 }
    ,{ CMD_ACTI, 0x2D3C,  6103 }
    ,{ CMD_ACTI, 0x2D3C,  6107 }
    ,{ CMD_ACTI, 0x2E3C,  6114 }
    ,{ CMD_ACTI, 0x2F3C,  6118 }
    ,{ CMD_ACTI, 0x2F3C,  6124 }
    ,{ CMD_ACTI, 0x303C,  6130 }
    ,{ CMD_ACTI, 0x313C,  6134 }
    ,{ CMD_ACTI, 0x313C,  6138 }
    ,{ CMD_ACTI, 0x323C,  6142 }
    ,{ CMD_ACTI, 0x333C,  6146 }
    ,{ CMD_ACTI, 0x343C,  6150 }
    ,{ CMD_ACTI, 0x353C,  6154 }
    ,{ CMD_ACTI, 0x353C,  6160 }
    ,{ CMD_ACTI, 0x473C,  6166 }
    ,{ CMD_ACTI, 0x483C,  6180 }
    ,{ CMD_ACTI, 0x4E3C,  6184 }
    ,{ CMD_ACTI, 0x523C,  6188 }
    ,{ CMD_ACTI, 0x533C,  6192 }
    ,{ CMD_ACTI, 0x533C,  6208 }
    ,{ CMD_ACTI, 0x973C,  6214 }
    ,{ CMD_ACTI, 0x983C,  6218 }
    ,{ CMD_ACTI, 0x9D3C,  6222 }
    ,{ CMD_ACTI, 0x9E3C,  6231 }
    ,{ CMD_ACTI, 0x9E3C,  6237 }
    ,{ CMD_ACTI, 0xA13C,  6245 }
    ,{ CMD_ACTI, 0xA23C,  6249 }
    ,{ CMD_ACTI, 0x003D,  6253 }
    ,{ CMD_ACTI, 0x133E,  6255 }
    ,{ CMD_ACTI, 0x2F3E,  6264 }
    ,{ CMD_ACTI, 0x003F,  6273 }
    ,{ CMD_ACTI, 0x003F,  6282 }
    ,{ CMD_ACTI, 0x4042,  6299 }
    ,{ CMD_ACTI, 0x4042,  6320 }
    ,{ CMD_ACTI, 0x4544,  6334 }
    ,{ CMD_ACTI, 0x1746,  6346 }
    ,{ CMD_ACTI, 0x004B,  6363 }
    ,{ CMD_ACTI, 0x004B,  6387 }
    ,{ CMD_ACTI, 0x004B,  6405 }
    ,{ CMD_ACTI, 0x004B,  6417 }
    ,{ CMD_ACTI, 0x004B,  6438 }
    ,{ CMD_ACTI, 0x4E4C,  6459 }
    ,{ CMD_ACTI, 0x4D4F,  6469 }
    ,{ CMD_ACTI, 0x4E50,  6476 }
    ,{ CMD_ACTI, 0x4E51,  6487 }
    ,{ CMD_ACTI, 0x4E51,  6501 }
    ,{ CMD_ACTI, 0x4E51,  6514 }
    ,{ CMD_ACTI, 0x0054,  6525 }
    ,{ CMD_ACTI, 0x0056,  6535 }
    ,{ CMD_ACTI, 0x0057,  6537 }
    ,{ CMD_ACTI, 0x0057,  6549 }
    ,{ CMD_ACTI, 0x0057,  6559 }
    ,{ CMD_ACTI, 0x0068,  6569 }
    ,{ CMD_ACTI, 0x006A,  6571 }
    ,{ CMD_ACTI, 0x006B,  6666 }
    ,{ CMD_ACTI, 0x006B,  6670 }
    ,{ CMD_ACTI, 0x006C,  6675 }
    ,{ CMD_ACTI, 0x2B96,  6677 }
    ,{ CMD_ACTI, 0x2B96,  6689 }
    ,{ CMD_ACTI, 0x2B96,  6698 }
    ,{ CMD_ACTI, 0x3199,  6707 }
    ,{ CMD_ACTI, 0x009C,  6711 }
    ,{ CMD_ACTI, 0x2B9D,  6716 }
    ,{ CMD_ACTI, 0x2B9D,  6727 }
    ,{ CMD_ACTI, 0x2B9D,  6734 }
    ,{ CMD_ACTI, 0x2B9D,  6745 }
    ,{ CMD_ACTI, 0x009E,  6752 }
    ,{ CMD_ACTI, 0x009E,  6761 }
    ,{ CMD_ACTI, 0x009F,  6769 }
};

const uint8_t func[] = { 
    FN_AT,0,FN_BEEP,20,116,FN_BEEP,20,118,FN_BEEP,20,120,FN_BEEP,40,136,FN_BEEP,20,120,FN_BEEP,40,136,FN_BEEP,20,120,FN_BEEP,120,136,FN_BEEP,20,136,FN_BEEP,20,140,FN_BEEP,20,142,FN_BEEP,20,144,FN_BEEP,20,136,FN_BEEP,20,140,FN_BEEP,40,144,FN_BEEP,20,134,FN_BEEP,40,140,FN_BEEP,140,136,FN_BEEP,20,116,FN_BEEP,20,118,FN_BEEP,20,120,FN_BEEP,40,136,FN_EOF
    ,FN_AT,0,FN_BEEP,20,120,FN_BEEP,40,136,FN_BEEP,20,120,FN_BEEP,140,136,FN_BEEP,20,130,FN_BEEP,20,126,FN_BEEP,20,124,FN_BEEP,20,130,FN_BEEP,20,136,FN_BEEP,40,144,FN_BEEP,20,140,FN_BEEP,20,136,FN_BEEP,20,130,FN_BEEP,120,140,FN_BEEP,20,116,FN_BEEP,20,118,FN_BEEP,20,120,FN_BEEP,40,136,FN_BEEP,20,120,FN_BEEP,40,136,FN_BEEP,20,120,FN_BEEP,120,136,FN_EOF
    ,FN_AT,0,FN_BEEP,20,136,FN_BEEP,20,140,FN_BEEP,20,142,FN_BEEP,20,144,FN_BEEP,20,136,FN_BEEP,20,140,FN_BEEP,40,144,FN_BEEP,20,134,FN_BEEP,40,140,FN_BEEP,120,136,FN_BEEP,20,136,FN_BEEP,20,140,FN_BEEP,20,144,FN_BEEP,20,136,FN_BEEP,20,140,FN_BEEP,40,144,FN_BEEP,20,136,FN_BEEP,20,140,FN_BEEP,20,136,FN_BEEP,20,144,FN_BEEP,20,136,FN_BEEP,20,140,FN_EOF
    ,FN_AT,0,FN_BEEP,40,144,FN_BEEP,20,136,FN_BEEP,20,140,FN_BEEP,20,136,FN_BEEP,20,144,FN_BEEP,20,136,FN_BEEP,20,140,FN_BEEP,40,144,FN_BEEP,20,134,FN_BEEP,40,140,FN_BEEP,80,136,FN_BEEP,80,112,FN_ANYKEY,FN_GOTO,1,FN_DESC,FN_EOF
    ,FN_AT,116,FN_CARRIED,48,FN_DESTROY,48,FN_SET,12,FN_MESSAGE,61,FN_PLUS,30,5,FN_EOF
    ,FN_AT,162,FN_BEEP,9,134,FN_BEEP,13,134,FN_BEEP,9,134,FN_BEEP,9,130,FN_BEEP,9,130,FN_BEEP,34,126,FN_BEEP,13,134,FN_BEEP,13,134,FN_BEEP,13,130,FN_BEEP,13,120,FN_BEEP,50,126,FN_BEEP,13,134,FN_BEEP,13,134,FN_BEEP,13,140,FN_BEEP,13,134,FN_BEEP,13,144,FN_BEEP,13,140,FN_BEEP,13,134,FN_BEEP,13,126,FN_BEEP,9,134,FN_BEEP,22,134,FN_BEEP,9,130,FN_BEEP,9,130,FN_BEEP,34,126,FN_EOF
    ,FN_AT,88,FN_DESTROY,15,FN_EOF
    ,FN_AT,88,FN_DESTROY,22,FN_EOF
    ,FN_AT,140,FN_PRESENT,42,FN_BEEP,50,120,FN_BEEP,100,120,FN_BEEP,38,120,FN_BEEP,13,122,FN_BEEP,50,122,FN_BEEP,63,122,FN_BEEP,13,122,FN_BEEP,13,122,FN_BEEP,13,122,FN_BEEP,13,122,FN_BEEP,13,122,FN_BEEP,13,122,FN_BEEP,13,126,FN_BEEP,50,126,FN_BEEP,100,126,FN_BEEP,38,126,FN_BEEP,13,130,FN_BEEP,200,120,FN_BEEP,50,120,FN_BEEP,63,120,FN_BEEP,13,120,FN_BEEP,13,120,FN_EOF
    ,FN_AT,140,FN_PRESENT,42,FN_BEEP,13,120,FN_BEEP,13,120,FN_BEEP,13,120,FN_BEEP,13,120,FN_BEEP,13,122,FN_BEEP,50,122,FN_BEEP,63,122,FN_BEEP,13,122,FN_BEEP,13,122,FN_BEEP,13,122,FN_BEEP,13,122,FN_BEEP,13,122,FN_BEEP,13,122,FN_BEEP,13,126,FN_BEEP,50,126,FN_BEEP,100,126,FN_BEEP,38,126,FN_BEEP,13,130,FN_BEEP,100,120,FN_BEEP,13,122,FN_BEEP,13,106,FN_BEEP,13,112,FN_EOF
    ,FN_AT,140,FN_PRESENT,42,FN_BEEP,13,122,FN_BEEP,13,126,FN_BEEP,13,110,FN_BEEP,13,116,FN_BEEP,13,126,FN_BEEP,100,120,FN_BEEP,50,112,FN_BEEP,38,126,FN_BEEP,13,130,FN_BEEP,150,120,FN_EOF
    ,FN_AT,116,FN_ZERO,12,FN_CARRIED,26,FN_DESTROY,26,FN_MESSAGE,40,FN_SET,19,FN_EOF
    ,FN_AT,116,FN_ZERO,12,FN_CARRIED,51,FN_DESTROY,51,FN_MESSAGE,40,FN_SET,20,FN_EOF
    ,FN_NOTZERO,12,FN_NOTZERO,19,FN_ZERO,21,FN_AT,116,FN_CREATE,54,FN_GET,54,FN_MESSAGE,42,FN_SET,21,FN_EOF
    ,FN_AT,116,FN_NOTZERO,12,FN_NOTZERO,20,FN_ZERO,21,FN_CREATE,55,FN_GET,55,FN_MESSAGE,42,FN_SET,21,FN_EOF
    ,FN_AT,108,FN_CHANCE,50,FN_DESTROY,16,FN_MESSAGE,54,FN_EOF
    ,FN_AT,137,FN_CARRIED,42,FN_EQ,11,2,FN_MESSAGE,11,FN_TURNS,FN_SCORE,FN_END,FN_EOF
    ,FN_AT,137,FN_CARRIED,42,FN_LT,11,2,FN_PLUS,30,5,FN_MESSAGE,9,FN_DROP,42,FN_CREATE,3,FN_GET,3,FN_EOF
    ,FN_NOTAT,1,FN_NOTAT,103,FN_NOTAT,29,FN_NOTAT,12,FN_NOTAT,132,FN_BEEP,10,100,FN_EOF
    ,FN_AT,123,FN_PRESENT,9,FN_NOTCARR,9,FN_CREATE,7,FN_DESTROY,9,FN_PLUS,30,5,FN_DESC,FN_EOF
    ,FN_AT,11,FN_MESSAGE,31,FN_EOF
    ,FN_AT,103,FN_BEEP,20,116,FN_BEEP,20,116,FN_BEEP,20,124,FN_BEEP,20,130,FN_BEEP,40,130,FN_BEEP,20,154,FN_BEEP,40,154,FN_BEEP,20,144,FN_BEEP,20,144,FN_BEEP,20,116,FN_BEEP,20,116,FN_BEEP,20,124,FN_BEEP,20,130,FN_BEEP,40,130,FN_BEEP,20,154,FN_BEEP,40,154,FN_EOF
    ,FN_AT,103,FN_BEEP,20,150,FN_BEEP,40,150,FN_BEEP,20,114,FN_BEEP,20,114,FN_BEEP,20,120,FN_BEEP,20,134,FN_BEEP,40,134,FN_BEEP,20,158,FN_BEEP,40,158,FN_BEEP,20,150,FN_BEEP,40,150,FN_BEEP,20,114,FN_BEEP,20,114,FN_BEEP,20,120,FN_BEEP,20,134,FN_BEEP,40,134,FN_BEEP,20,158,FN_BEEP,40,158,FN_BEEP,20,144,FN_BEEP,40,154,FN_BEEP,20,116,FN_BEEP,20,116,FN_BEEP,20,124,FN_BEEP,20,130,FN_BEEP,40,140,FN_BEEP,20,164,FN_BEEP,40,164,FN_EOF
    ,FN_AT,103,FN_BEEP,20,154,FN_BEEP,40,154,FN_BEEP,20,116,FN_BEEP,20,116,FN_BEEP,20,124,FN_BEEP,20,130,FN_BEEP,40,140,FN_BEEP,20,164,FN_BEEP,40,164,FN_BEEP,20,158,FN_BEEP,40,158,FN_BEEP,20,120,FN_BEEP,20,120,FN_BEEP,20,126,FN_BEEP,20,134,FN_BEEP,80,134,FN_BEEP,20,124,FN_EOF
    ,FN_AT,103,FN_BEEP,20,130,FN_BEEP,50,150,FN_BEEP,20,140,FN_BEEP,20,124,FN_BEEP,40,124,FN_BEEP,20,120,FN_BEEP,40,134,FN_BEEP,20,130,FN_BEEP,30,116,FN_BEEP,10,140,FN_BEEP,20,140,FN_BEEP,60,140,FN_EOF
    ,FN_AT,12,FN_BEEP,20,130,FN_BEEP,20,140,FN_BEEP,40,148,FN_BEEP,40,140,FN_BEEP,20,130,FN_BEEP,20,140,FN_BEEP,20,138,FN_BEEP,20,138,FN_EOF
    ,FN_AT,12,FN_BEEP,20,130,FN_BEEP,20,138,FN_BEEP,40,150,FN_BEEP,40,138,FN_BEEP,20,130,FN_BEEP,20,140,FN_BEEP,20,140,FN_BEEP,20,140,FN_EOF
    ,FN_AT,12,FN_BEEP,20,130,FN_BEEP,20,140,FN_BEEP,40,148,FN_BEEP,40,140,FN_BEEP,20,130,FN_BEEP,20,140,FN_BEEP,20,138,FN_BEEP,20,138,FN_BEEP,20,130,FN_BEEP,20,138,FN_BEEP,40,150,FN_BEEP,40,138,FN_BEEP,20,130,FN_BEEP,20,138,FN_BEEP,40,140,FN_EOF
    ,FN_AT,29,FN_BEEP,20,144,FN_BEEP,20,140,FN_BEEP,40,136,FN_BEEP,40,130,FN_BEEP,40,126,FN_BEEP,20,130,FN_BEEP,100,126,FN_BEEP,40,126,FN_BEEP,20,144,FN_BEEP,100,140,FN_BEEP,40,126,FN_BEEP,20,140,FN_BEEP,60,136,FN_BEEP,20,144,FN_BEEP,20,140,FN_BEEP,40,136,FN_BEEP,40,130,FN_BEEP,40,126,FN_BEEP,20,130,FN_BEEP,100,126,FN_BEEP,40,126,FN_BEEP,20,144,FN_BEEP,100,140,FN_BEEP,40,126,FN_BEEP,20,140,FN_BEEP,80,136,FN_EOF
    ,FN_AT,32,FN_CARRIED,26,FN_MESSAGE,50,FN_PAUSE,150,FN_DESTROY,26,FN_GOTO,1,FN_DESC,FN_EOF
    ,FN_AT,139,FN_CARRIED,46,FN_CARRIED,18,FN_SWAP,46,17,FN_DESTROY,18,FN_PLUS,30,5,FN_MESSAGE,32,FN_EOF
    ,FN_AT,139,FN_CARRIED,18,FN_NOTCARR,46,FN_DESTROY,18,FN_MESSAGE,32,FN_INVEN,FN_EOF
    ,FN_AT,122,FN_NOTCARR,22,FN_MESSAGE,52,FN_TURNS,FN_SCORE,FN_END,FN_EOF
    ,FN_AT,32,FN_CARRIED,51,FN_MESSAGE,51,FN_DESTROY,51,FN_GOTO,18,FN_EOF
    ,FN_AT,32,FN_CARRIED,55,FN_MESSAGE,51,FN_DESTROY,55,FN_GOTO,18,FN_EOF
    ,FN_AT,132,FN_BEEP,40,136,FN_BEEP,20,132,FN_BEEP,40,130,FN_BEEP,20,130,FN_BEEP,20,130,FN_BEEP,20,126,FN_BEEP,20,130,FN_BEEP,40,132,FN_BEEP,20,126,FN_BEEP,40,140,FN_BEEP,20,136,FN_BEEP,40,132,FN_BEEP,20,132,FN_BEEP,20,132,FN_BEEP,20,130,FN_BEEP,20,132,FN_BEEP,40,136,FN_EOF
    ,FN_AT,132,FN_BEEP,20,130,FN_BEEP,40,136,FN_BEEP,20,132,FN_BEEP,40,130,FN_BEEP,20,130,FN_BEEP,20,130,FN_BEEP,20,126,FN_BEEP,20,130,FN_BEEP,40,132,FN_BEEP,20,126,FN_BEEP,40,140,FN_BEEP,20,136,FN_BEEP,40,144,FN_BEEP,20,140,FN_BEEP,20,136,FN_BEEP,20,136,FN_BEEP,20,132,FN_BEEP,20,130,FN_EOF
    ,FN_CARRIED,49,FN_CARRIED,37,FN_SWAP,37,50,FN_DESTROY,49,FN_PLUS,30,5,FN_EOF
    ,FN_AT,32,FN_NOTCARR,50,FN_MESSAGE,53,FN_GOTO,18,FN_PAUSE,150,FN_DESC,FN_EOF
    ,FN_AT,32,FN_NOTCARR,13,FN_MESSAGE,53,FN_PAUSE,150,FN_GOTO,18,FN_DESC,FN_EOF
    ,FN_AT,126,FN_CARRIED,42,FN_ABSENT,27,FN_MESSAGE,17,FN_DROP,42,FN_EOF
    ,FN_AT,140,FN_CARRIED,42,FN_ZERO,11,FN_MESSAGE,14,FN_EOF
    ,FN_AT,125,FN_PRESENT,42,FN_EQ,11,2,FN_LET,11,1,FN_EOF
    ,FN_PRESENT,42,FN_NOTWORN,41,FN_MESSAGE,0,FN_EOF
    ,FN_AT,2,FN_PRESENT,40,FN_NOTWORN,40,FN_GET,40,FN_WEAR,40,FN_MESSAGE,23,FN_INVEN,FN_EOF
    ,FN_AT,155,FN_WORN,17,FN_MESSAGE,34,FN_EOF
    ,FN_AT,155,FN_NOTWORN,17,FN_MESSAGE,35,FN_MESSAGE,7,FN_TURNS,FN_SCORE,FN_END,FN_EOF
    ,FN_AT,1,FN_PRESENT,1,FN_PRESENT,5,FN_PRESENT,54,FN_EQ,30,85,FN_GOTO,162,FN_EOF
    ,FN_AT,162,FN_MESSAGE,55,FN_MESSAGE,63,FN_PLUS,30,15,FN_MESSAGE,7,FN_TURNS,FN_SCORE,FN_EOF
    ,FN_AT,161,FN_MESSAGE,7,FN_TURNS,FN_SCORE,FN_END,FN_EOF
    ,FN_CARRIED,49,FN_CARRIED,37,FN_DESTROY,49,FN_DESTROY,37,FN_CREATE,50,FN_GET,50,FN_EOF
    ,FN_AT,32,FN_CARRIED,26,FN_DESTROY,26,FN_MESSAGE,53,FN_OK,FN_EOF
    ,FN_AT,32,FN_CARRIED,51,FN_DESTROY,51,FN_MESSAGE,51,FN_PAUSE,50,FN_GOTO,65,FN_EOF
    ,FN_NOTZERO,12,FN_CARRIED,26,FN_SWAP,26,54,FN_EOF
    ,FN_NOTZERO,12,FN_CARRIED,51,FN_SWAP,51,55,FN_EOF
    ,FN_AT,0,FN_GOTO,1,FN_DESC,FN_EOF
    ,FN_AT,1,FN_GOTO,2,FN_DESC,FN_EOF
    ,FN_AT,2,FN_GOTO,1,FN_DESC,FN_EOF
    ,FN_AT,2,FN_GOTO,7,FN_DESC,FN_EOF
    ,FN_AT,2,FN_GOTO,28,FN_DESC,FN_EOF
    ,FN_AT,2,FN_GOTO,6,FN_DESC,FN_EOF
    ,FN_AT,2,FN_GOTO,5,FN_DESC,FN_EOF
    ,FN_AT,2,FN_GOTO,4,FN_DESC,FN_EOF
    ,FN_AT,2,FN_GOTO,3,FN_DESC,FN_EOF
    ,FN_AT,2,FN_GOTO,10,FN_DESC,FN_EOF
    ,FN_AT,3,FN_GOTO,2,FN_DESC,FN_EOF
    ,FN_AT,3,FN_GOTO,10,FN_DESC,FN_EOF
    ,FN_AT,3,FN_GOTO,11,FN_DESC,FN_EOF
    ,FN_AT,4,FN_GOTO,2,FN_DESC,FN_EOF
    ,FN_AT,4,FN_GOTO,8,FN_DESC,FN_EOF
    ,FN_AT,4,FN_GOTO,29,FN_DESC,FN_EOF
    ,FN_AT,5,FN_GOTO,2,FN_DESC,FN_EOF
    ,FN_AT,5,FN_GOTO,8,FN_DESC,FN_EOF
    ,FN_AT,5,FN_GOTO,30,FN_DESC,FN_EOF
    ,FN_AT,5,FN_GOTO,31,FN_DESC,FN_EOF
    ,FN_AT,5,FN_GOTO,28,FN_DESC,FN_EOF
    ,FN_AT,6,FN_GOTO,2,FN_DESC,FN_EOF
    ,FN_AT,7,FN_GOTO,2,FN_DESC,FN_EOF
    ,FN_AT,7,FN_GOTO,20,FN_DESC,FN_EOF
    ,FN_AT,7,FN_GOTO,9,FN_DESC,FN_EOF
    ,FN_AT,8,FN_GOTO,4,FN_DESC,FN_EOF
    ,FN_AT,8,FN_GOTO,5,FN_DESC,FN_EOF
    ,FN_AT,9,FN_GOTO,20,FN_DESC,FN_EOF
    ,FN_AT,9,FN_GOTO,7,FN_DESC,FN_EOF
    ,FN_AT,10,FN_GOTO,11,FN_DESC,FN_EOF
    ,FN_AT,10,FN_GOTO,3,FN_DESC,FN_EOF
    ,FN_AT,10,FN_GOTO,2,FN_DESC,FN_EOF
    ,FN_AT,10,FN_GOTO,12,FN_DESC,FN_EOF
    ,FN_AT,10,FN_GOTO,19,FN_DESC,FN_EOF
    ,FN_AT,11,FN_GOTO,10,FN_DESC,FN_EOF
    ,FN_AT,11,FN_GOTO,3,FN_DESC,FN_EOF
    ,FN_AT,12,FN_GOTO,18,FN_DESC,FN_EOF
    ,FN_AT,12,FN_GOTO,19,FN_DESC,FN_EOF
    ,FN_AT,12,FN_GOTO,10,FN_DESC,FN_EOF
    ,FN_AT,12,FN_GOTO,13,FN_DESC,FN_EOF
    ,FN_AT,13,FN_GOTO,12,FN_DESC,FN_EOF
    ,FN_AT,13,FN_GOTO,14,FN_DESC,FN_EOF
    ,FN_AT,14,FN_GOTO,13,FN_DESC,FN_EOF
    ,FN_AT,14,FN_GOTO,17,FN_DESC,FN_EOF
    ,FN_AT,14,FN_GOTO,16,FN_DESC,FN_EOF
    ,FN_AT,16,FN_GOTO,17,FN_DESC,FN_EOF
    ,FN_AT,16,FN_GOTO,14,FN_DESC,FN_EOF
    ,FN_AT,17,FN_GOTO,18,FN_DESC,FN_EOF
    ,FN_AT,17,FN_GOTO,14,FN_DESC,FN_EOF
    ,FN_AT,17,FN_GOTO,16,FN_DESC,FN_EOF
    ,FN_AT,18,FN_GOTO,12,FN_DESC,FN_EOF
    ,FN_AT,18,FN_GOTO,17,FN_DESC,FN_EOF
    ,FN_AT,18,FN_GOTO,32,FN_DESC,FN_EOF
    ,FN_AT,19,FN_GOTO,12,FN_DESC,FN_EOF
    ,FN_AT,19,FN_GOTO,20,FN_DESC,FN_EOF
    ,FN_AT,20,FN_GOTO,19,FN_DESC,FN_EOF
    ,FN_AT,20,FN_GOTO,21,FN_DESC,FN_EOF
    ,FN_AT,20,FN_GOTO,9,FN_DESC,FN_EOF
    ,FN_AT,21,FN_GOTO,20,FN_DESC,FN_EOF
    ,FN_AT,21,FN_GOTO,22,FN_DESC,FN_EOF
    ,FN_AT,22,FN_GOTO,23,FN_DESC,FN_EOF
    ,FN_AT,22,FN_GOTO,33,FN_DESC,FN_EOF
    ,FN_AT,22,FN_GOTO,21,FN_DESC,FN_EOF
    ,FN_AT,23,FN_GOTO,22,FN_DESC,FN_EOF
    ,FN_AT,23,FN_GOTO,24,FN_DESC,FN_EOF
    ,FN_AT,24,FN_GOTO,23,FN_DESC,FN_EOF
    ,FN_AT,24,FN_GOTO,26,FN_DESC,FN_EOF
    ,FN_AT,24,FN_GOTO,25,FN_DESC,FN_EOF
    ,FN_AT,24,FN_GOTO,22,FN_DESC,FN_EOF
    ,FN_AT,24,FN_GOTO,34,FN_DESC,FN_EOF
    ,FN_AT,25,FN_GOTO,24,FN_DESC,FN_EOF
    ,FN_AT,26,FN_GOTO,24,FN_DESC,FN_EOF
    ,FN_AT,26,FN_GOTO,34,FN_DESC,FN_EOF
    ,FN_AT,26,FN_GOTO,27,FN_DESC,FN_EOF
    ,FN_AT,27,FN_GOTO,26,FN_DESC,FN_EOF
    ,FN_AT,28,FN_GOTO,36,FN_DESC,FN_EOF
    ,FN_AT,28,FN_GOTO,51,FN_DESC,FN_EOF
    ,FN_AT,28,FN_GOTO,31,FN_DESC,FN_EOF
    ,FN_AT,28,FN_GOTO,5,FN_DESC,FN_EOF
    ,FN_AT,28,FN_GOTO,2,FN_DESC,FN_EOF
    ,FN_AT,29,FN_GOTO,4,FN_DESC,FN_EOF
    ,FN_AT,30,FN_GOTO,5,FN_DESC,FN_EOF
    ,FN_AT,30,FN_GOTO,31,FN_DESC,FN_EOF
    ,FN_AT,30,FN_GOTO,61,FN_DESC,FN_EOF
    ,FN_AT,31,FN_GOTO,28,FN_DESC,FN_EOF
    ,FN_AT,31,FN_GOTO,30,FN_DESC,FN_EOF
    ,FN_AT,31,FN_GOTO,5,FN_DESC,FN_EOF
    ,FN_AT,32,FN_GOTO,18,FN_DESC,FN_EOF
    ,FN_AT,33,FN_GOTO,22,FN_DESC,FN_EOF
    ,FN_AT,33,FN_GOTO,36,FN_DESC,FN_EOF
    ,FN_AT,34,FN_GOTO,26,FN_DESC,FN_EOF
    ,FN_AT,34,FN_GOTO,38,FN_DESC,FN_EOF
    ,FN_AT,35,FN_GOTO,37,FN_DESC,FN_EOF
    ,FN_AT,36,FN_GOTO,33,FN_DESC,FN_EOF
    ,FN_AT,36,FN_GOTO,47,FN_DESC,FN_EOF
    ,FN_AT,36,FN_GOTO,37,FN_DESC,FN_EOF
    ,FN_AT,36,FN_GOTO,28,FN_DESC,FN_EOF
    ,FN_AT,37,FN_GOTO,35,FN_DESC,FN_EOF
    ,FN_AT,37,FN_GOTO,38,FN_DESC,FN_EOF
    ,FN_AT,37,FN_GOTO,36,FN_DESC,FN_EOF
    ,FN_AT,38,FN_GOTO,37,FN_DESC,FN_EOF
    ,FN_AT,38,FN_GOTO,39,FN_DESC,FN_EOF
    ,FN_AT,38,FN_GOTO,49,FN_DESC,FN_EOF
    ,FN_AT,38,FN_GOTO,164,FN_DESC,FN_EOF
    ,FN_AT,39,FN_GOTO,40,FN_DESC,FN_EOF
    ,FN_AT,39,FN_GOTO,38,FN_DESC,FN_EOF
    ,FN_AT,39,FN_GOTO,41,FN_DESC,FN_EOF
    ,FN_AT,40,FN_GOTO,42,FN_DESC,FN_EOF
    ,FN_AT,40,FN_GOTO,39,FN_DESC,FN_EOF
    ,FN_AT,41,FN_GOTO,39,FN_DESC,FN_EOF
    ,FN_AT,41,FN_GOTO,42,FN_DESC,FN_EOF
    ,FN_AT,41,FN_GOTO,44,FN_DESC,FN_EOF
    ,FN_AT,41,FN_GOTO,45,FN_DESC,FN_EOF
    ,FN_AT,42,FN_GOTO,40,FN_DESC,FN_EOF
    ,FN_AT,42,FN_GOTO,44,FN_DESC,FN_EOF
    ,FN_AT,42,FN_GOTO,43,FN_DESC,FN_EOF
    ,FN_AT,42,FN_GOTO,41,FN_DESC,FN_EOF
    ,FN_AT,43,FN_GOTO,42,FN_DESC,FN_EOF
    ,FN_AT,44,FN_GOTO,42,FN_DESC,FN_EOF
    ,FN_AT,44,FN_GOTO,41,FN_DESC,FN_EOF
    ,FN_AT,44,FN_GOTO,45,FN_DESC,FN_EOF
    ,FN_AT,44,FN_GOTO,163,FN_DESC,FN_EOF
    ,FN_AT,45,FN_GOTO,44,FN_DESC,FN_EOF
    ,FN_AT,45,FN_GOTO,41,FN_DESC,FN_EOF
    ,FN_AT,46,FN_GOTO,47,FN_DESC,FN_EOF
    ,FN_AT,46,FN_GOTO,48,FN_DESC,FN_EOF
    ,FN_AT,46,FN_GOTO,36,FN_DESC,FN_EOF
    ,FN_AT,47,FN_GOTO,46,FN_DESC,FN_EOF
    ,FN_AT,47,FN_GOTO,48,FN_DESC,FN_EOF
    ,FN_AT,48,FN_GOTO,47,FN_DESC,FN_EOF
    ,FN_AT,48,FN_GOTO,46,FN_DESC,FN_EOF
    ,FN_AT,48,FN_GOTO,50,FN_DESC,FN_EOF
    ,FN_AT,49,FN_GOTO,38,FN_DESC,FN_EOF
    ,FN_AT,49,FN_GOTO,55,FN_DESC,FN_EOF
    ,FN_AT,50,FN_GOTO,51,FN_DESC,FN_EOF
    ,FN_AT,50,FN_GOTO,48,FN_DESC,FN_EOF
    ,FN_AT,51,FN_GOTO,53,FN_DESC,FN_EOF
    ,FN_AT,51,FN_GOTO,50,FN_DESC,FN_EOF
    ,FN_AT,51,FN_GOTO,28,FN_DESC,FN_EOF
    ,FN_AT,51,FN_GOTO,36,FN_DESC,FN_EOF
    ,FN_AT,52,FN_GOTO,53,FN_DESC,FN_EOF
    ,FN_AT,53,FN_GOTO,52,FN_DESC,FN_EOF
    ,FN_AT,53,FN_GOTO,51,FN_DESC,FN_EOF
    ,FN_AT,54,FN_GOTO,60,FN_DESC,FN_EOF
    ,FN_AT,54,FN_GOTO,55,FN_DESC,FN_EOF
    ,FN_AT,55,FN_GOTO,49,FN_DESC,FN_EOF
    ,FN_AT,55,FN_GOTO,54,FN_DESC,FN_EOF
    ,FN_AT,55,FN_GOTO,56,FN_DESC,FN_EOF
    ,FN_AT,56,FN_GOTO,57,FN_DESC,FN_EOF
    ,FN_AT,56,FN_GOTO,55,FN_DESC,FN_EOF
    ,FN_AT,57,FN_GOTO,58,FN_DESC,FN_EOF
    ,FN_AT,57,FN_GOTO,56,FN_DESC,FN_EOF
    ,FN_AT,58,FN_GOTO,59,FN_DESC,FN_EOF
    ,FN_AT,58,FN_GOTO,57,FN_DESC,FN_EOF
    ,FN_AT,59,FN_GOTO,58,FN_DESC,FN_EOF
    ,FN_AT,59,FN_GOTO,60,FN_DESC,FN_EOF
    ,FN_AT,60,FN_GOTO,59,FN_DESC,FN_EOF
    ,FN_AT,60,FN_GOTO,54,FN_DESC,FN_EOF
    ,FN_AT,60,FN_GOTO,61,FN_DESC,FN_EOF
    ,FN_AT,61,FN_GOTO,60,FN_DESC,FN_EOF
    ,FN_AT,61,FN_GOTO,30,FN_DESC,FN_EOF
    ,FN_AT,61,FN_GOTO,62,FN_DESC,FN_EOF
    ,FN_AT,62,FN_GOTO,61,FN_DESC,FN_EOF
    ,FN_AT,62,FN_GOTO,75,FN_DESC,FN_EOF
    ,FN_AT,63,FN_GOTO,64,FN_DESC,FN_EOF
    ,FN_AT,64,FN_GOTO,64,FN_DESC,FN_EOF
    ,FN_AT,64,FN_GOTO,65,FN_DESC,FN_EOF
    ,FN_AT,64,FN_GOTO,65,FN_DESC,FN_EOF
    ,FN_AT,64,FN_GOTO,66,FN_DESC,FN_EOF
    ,FN_AT,65,FN_GOTO,64,FN_DESC,FN_EOF
    ,FN_AT,65,FN_GOTO,65,FN_DESC,FN_EOF
    ,FN_AT,65,FN_GOTO,66,FN_DESC,FN_EOF
    ,FN_AT,66,FN_GOTO,66,FN_DESC,FN_EOF
    ,FN_AT,66,FN_GOTO,66,FN_DESC,FN_EOF
    ,FN_AT,66,FN_GOTO,64,FN_DESC,FN_EOF
    ,FN_AT,73,FN_GOTO,80,FN_DESC,FN_EOF
    ,FN_AT,73,FN_GOTO,78,FN_DESC,FN_EOF
    ,FN_AT,73,FN_GOTO,76,FN_DESC,FN_EOF
    ,FN_AT,74,FN_GOTO,74,FN_DESC,FN_EOF
    ,FN_AT,75,FN_GOTO,62,FN_DESC,FN_EOF
    ,FN_AT,75,FN_GOTO,78,FN_DESC,FN_EOF
    ,FN_AT,75,FN_GOTO,77,FN_DESC,FN_EOF
    ,FN_AT,76,FN_GOTO,77,FN_DESC,FN_EOF
    ,FN_AT,76,FN_GOTO,73,FN_DESC,FN_EOF
    ,FN_AT,77,FN_GOTO,75,FN_DESC,FN_EOF
    ,FN_AT,77,FN_GOTO,76,FN_DESC,FN_EOF
    ,FN_AT,78,FN_GOTO,78,FN_DESC,FN_EOF
    ,FN_AT,78,FN_GOTO,73,FN_DESC,FN_EOF
    ,FN_AT,78,FN_GOTO,75,FN_DESC,FN_EOF
    ,FN_AT,79,FN_GOTO,82,FN_DESC,FN_EOF
    ,FN_AT,80,FN_GOTO,81,FN_DESC,FN_EOF
    ,FN_AT,80,FN_GOTO,82,FN_DESC,FN_EOF
    ,FN_AT,80,FN_GOTO,73,FN_DESC,FN_EOF
    ,FN_AT,81,FN_GOTO,81,FN_DESC,FN_EOF
    ,FN_AT,81,FN_GOTO,80,FN_DESC,FN_EOF
    ,FN_AT,82,FN_GOTO,81,FN_DESC,FN_EOF
    ,FN_AT,82,FN_GOTO,80,FN_DESC,FN_EOF
    ,FN_AT,83,FN_GOTO,84,FN_DESC,FN_EOF
    ,FN_AT,83,FN_GOTO,85,FN_DESC,FN_EOF
    ,FN_AT,84,FN_GOTO,83,FN_DESC,FN_EOF
    ,FN_AT,84,FN_GOTO,84,FN_DESC,FN_EOF
    ,FN_AT,85,FN_GOTO,85,FN_DESC,FN_EOF
    ,FN_AT,85,FN_GOTO,83,FN_DESC,FN_EOF
    ,FN_AT,86,FN_GOTO,87,FN_DESC,FN_EOF
    ,FN_AT,86,FN_GOTO,124,FN_DESC,FN_EOF
    ,FN_AT,86,FN_GOTO,123,FN_DESC,FN_EOF
    ,FN_AT,86,FN_GOTO,131,FN_DESC,FN_EOF
    ,FN_AT,87,FN_GOTO,88,FN_DESC,FN_EOF
    ,FN_AT,87,FN_GOTO,132,FN_DESC,FN_EOF
    ,FN_AT,87,FN_GOTO,86,FN_DESC,FN_EOF
    ,FN_AT,88,FN_GOTO,133,FN_DESC,FN_EOF
    ,FN_AT,96,FN_GOTO,98,FN_DESC,FN_EOF
    ,FN_AT,97,FN_GOTO,96,FN_DESC,FN_EOF
    ,FN_AT,98,FN_GOTO,100,FN_DESC,FN_EOF
    ,FN_AT,98,FN_GOTO,96,FN_DESC,FN_EOF
    ,FN_AT,98,FN_GOTO,101,FN_DESC,FN_EOF
    ,FN_AT,99,FN_GOTO,100,FN_DESC,FN_EOF
    ,FN_AT,100,FN_GOTO,99,FN_DESC,FN_EOF
    ,FN_AT,100,FN_GOTO,101,FN_DESC,FN_EOF
    ,FN_AT,100,FN_GOTO,98,FN_DESC,FN_EOF
    ,FN_AT,101,FN_GOTO,100,FN_DESC,FN_EOF
    ,FN_AT,101,FN_GOTO,98,FN_DESC,FN_EOF
    ,FN_AT,101,FN_GOTO,103,FN_DESC,FN_EOF
    ,FN_AT,101,FN_GOTO,104,FN_DESC,FN_EOF
    ,FN_AT,102,FN_GOTO,104,FN_DESC,FN_EOF
    ,FN_AT,103,FN_GOTO,104,FN_DESC,FN_EOF
    ,FN_AT,103,FN_GOTO,101,FN_DESC,FN_EOF
    ,FN_AT,104,FN_GOTO,101,FN_DESC,FN_EOF
    ,FN_AT,104,FN_GOTO,103,FN_DESC,FN_EOF
    ,FN_AT,104,FN_GOTO,105,FN_DESC,FN_EOF
    ,FN_AT,104,FN_GOTO,106,FN_DESC,FN_EOF
    ,FN_AT,104,FN_GOTO,102,FN_DESC,FN_EOF
    ,FN_AT,105,FN_GOTO,104,FN_DESC,FN_EOF
    ,FN_AT,105,FN_GOTO,106,FN_DESC,FN_EOF
    ,FN_AT,105,FN_GOTO,107,FN_DESC,FN_EOF
    ,FN_AT,106,FN_GOTO,105,FN_DESC,FN_EOF
    ,FN_AT,106,FN_GOTO,104,FN_DESC,FN_EOF
    ,FN_AT,106,FN_GOTO,107,FN_DESC,FN_EOF
    ,FN_AT,107,FN_GOTO,106,FN_DESC,FN_EOF
    ,FN_AT,107,FN_GOTO,105,FN_DESC,FN_EOF
    ,FN_AT,108,FN_GOTO,100,FN_DESC,FN_EOF
    ,FN_AT,115,FN_GOTO,117,FN_DESC,FN_EOF
    ,FN_AT,116,FN_GOTO,115,FN_DESC,FN_EOF
    ,FN_AT,116,FN_GOTO,119,FN_DESC,FN_EOF
    ,FN_AT,117,FN_GOTO,115,FN_DESC,FN_EOF
    ,FN_AT,117,FN_GOTO,118,FN_DESC,FN_EOF
    ,FN_AT,118,FN_GOTO,121,FN_DESC,FN_EOF
    ,FN_AT,118,FN_GOTO,117,FN_DESC,FN_EOF
    ,FN_AT,119,FN_GOTO,122,FN_DESC,FN_EOF
    ,FN_AT,119,FN_GOTO,116,FN_DESC,FN_EOF
    ,FN_AT,120,FN_GOTO,121,FN_DESC,FN_EOF
    ,FN_AT,121,FN_GOTO,120,FN_DESC,FN_EOF
    ,FN_AT,121,FN_GOTO,123,FN_DESC,FN_EOF
    ,FN_AT,121,FN_GOTO,122,FN_DESC,FN_EOF
    ,FN_AT,121,FN_GOTO,118,FN_DESC,FN_EOF
    ,FN_AT,121,FN_GOTO,130,FN_DESC,FN_EOF
    ,FN_AT,122,FN_GOTO,121,FN_DESC,FN_EOF
    ,FN_AT,122,FN_GOTO,119,FN_DESC,FN_EOF
    ,FN_AT,123,FN_GOTO,121,FN_DESC,FN_EOF
    ,FN_AT,123,FN_GOTO,132,FN_DESC,FN_EOF
    ,FN_AT,123,FN_GOTO,124,FN_DESC,FN_EOF
    ,FN_AT,123,FN_GOTO,86,FN_DESC,FN_EOF
    ,FN_AT,124,FN_GOTO,86,FN_DESC,FN_EOF
    ,FN_AT,124,FN_GOTO,125,FN_DESC,FN_EOF
    ,FN_AT,124,FN_GOTO,123,FN_DESC,FN_EOF
    ,FN_AT,125,FN_GOTO,124,FN_DESC,FN_EOF
    ,FN_AT,125,FN_GOTO,126,FN_DESC,FN_EOF
    ,FN_AT,126,FN_GOTO,125,FN_DESC,FN_EOF
    ,FN_AT,126,FN_GOTO,127,FN_DESC,FN_EOF
    ,FN_AT,127,FN_GOTO,126,FN_DESC,FN_EOF
    ,FN_AT,127,FN_GOTO,129,FN_DESC,FN_EOF
    ,FN_AT,128,FN_GOTO,127,FN_DESC,FN_EOF
    ,FN_AT,129,FN_GOTO,127,FN_DESC,FN_EOF
    ,FN_AT,129,FN_GOTO,140,FN_DESC,FN_EOF
    ,FN_AT,130,FN_GOTO,121,FN_DESC,FN_EOF
    ,FN_AT,131,FN_GOTO,86,FN_DESC,FN_EOF
    ,FN_AT,131,FN_GOTO,133,FN_DESC,FN_EOF
    ,FN_AT,132,FN_GOTO,123,FN_DESC,FN_EOF
    ,FN_AT,132,FN_GOTO,87,FN_DESC,FN_EOF
    ,FN_AT,133,FN_GOTO,131,FN_DESC,FN_EOF
    ,FN_AT,133,FN_GOTO,134,FN_DESC,FN_EOF
    ,FN_AT,134,FN_GOTO,133,FN_DESC,FN_EOF
    ,FN_AT,134,FN_GOTO,136,FN_DESC,FN_EOF
    ,FN_AT,134,FN_GOTO,139,FN_DESC,FN_EOF
    ,FN_AT,135,FN_GOTO,136,FN_DESC,FN_EOF
    ,FN_AT,136,FN_GOTO,135,FN_DESC,FN_EOF
    ,FN_AT,136,FN_GOTO,134,FN_DESC,FN_EOF
    ,FN_AT,136,FN_GOTO,138,FN_DESC,FN_EOF
    ,FN_AT,136,FN_GOTO,137,FN_DESC,FN_EOF
    ,FN_AT,136,FN_GOTO,160,FN_DESC,FN_EOF
    ,FN_AT,137,FN_GOTO,138,FN_DESC,FN_EOF
    ,FN_AT,137,FN_GOTO,140,FN_DESC,FN_EOF
    ,FN_AT,137,FN_GOTO,136,FN_DESC,FN_EOF
    ,FN_AT,138,FN_GOTO,136,FN_DESC,FN_EOF
    ,FN_AT,139,FN_GOTO,134,FN_DESC,FN_EOF
    ,FN_AT,139,FN_GOTO,137,FN_DESC,FN_EOF
    ,FN_AT,140,FN_GOTO,137,FN_DESC,FN_EOF
    ,FN_AT,140,FN_GOTO,129,FN_DESC,FN_EOF
    ,FN_AT,147,FN_GOTO,149,FN_DESC,FN_EOF
    ,FN_AT,148,FN_GOTO,147,FN_DESC,FN_EOF
    ,FN_AT,148,FN_GOTO,149,FN_DESC,FN_EOF
    ,FN_AT,148,FN_GOTO,154,FN_DESC,FN_EOF
    ,FN_AT,149,FN_GOTO,148,FN_DESC,FN_EOF
    ,FN_AT,149,FN_GOTO,152,FN_DESC,FN_EOF
    ,FN_AT,149,FN_GOTO,149,FN_DESC,FN_EOF
    ,FN_AT,149,FN_GOTO,149,FN_DESC,FN_EOF
    ,FN_AT,150,FN_GOTO,151,FN_DESC,FN_EOF
    ,FN_AT,150,FN_GOTO,149,FN_DESC,FN_EOF
    ,FN_AT,151,FN_GOTO,153,FN_DESC,FN_EOF
    ,FN_AT,151,FN_GOTO,148,FN_DESC,FN_EOF
    ,FN_AT,152,FN_GOTO,149,FN_DESC,FN_EOF
    ,FN_AT,152,FN_GOTO,152,FN_DESC,FN_EOF
    ,FN_AT,152,FN_GOTO,152,FN_DESC,FN_EOF
    ,FN_AT,152,FN_GOTO,136,FN_DESC,FN_EOF
    ,FN_AT,153,FN_GOTO,151,FN_DESC,FN_EOF
    ,FN_AT,153,FN_GOTO,153,FN_DESC,FN_EOF
    ,FN_AT,153,FN_GOTO,159,FN_DESC,FN_EOF
    ,FN_AT,154,FN_GOTO,152,FN_DESC,FN_EOF
    ,FN_AT,154,FN_GOTO,155,FN_DESC,FN_EOF
    ,FN_AT,154,FN_GOTO,157,FN_DESC,FN_EOF
    ,FN_AT,155,FN_GOTO,158,FN_DESC,FN_EOF
    ,FN_AT,156,FN_GOTO,153,FN_DESC,FN_EOF
    ,FN_AT,156,FN_GOTO,156,FN_DESC,FN_EOF
    ,FN_AT,157,FN_GOTO,156,FN_DESC,FN_EOF
    ,FN_AT,157,FN_GOTO,155,FN_DESC,FN_EOF
    ,FN_AT,158,FN_GOTO,157,FN_DESC,FN_EOF
    ,FN_AT,160,FN_GOTO,150,FN_DESC,FN_EOF
    ,FN_AT,160,FN_GOTO,161,FN_DESC,FN_EOF
    ,FN_AT,160,FN_GOTO,136,FN_DESC,FN_EOF
    ,FN_AT,163,FN_GOTO,44,FN_DESC,FN_EOF
    ,FN_AT,163,FN_GOTO,45,FN_DESC,FN_EOF
    ,FN_AT,164,FN_GOTO,38,FN_DESC,FN_EOF
    ,FN_AT,164,FN_GOTO,40,FN_DESC,FN_EOF
    ,FN_AT,67,FN_NOTCARR,38,FN_NOTCARR,39,FN_SET,0,FN_GOTO,68,FN_DESC,FN_EOF
    ,FN_AT,67,FN_CARRIED,38,FN_CLEAR,0,FN_GOTO,68,FN_DESC,FN_EOF
    ,FN_AT,67,FN_CARRIED,39,FN_CLEAR,0,FN_GOTO,68,FN_DESC,FN_EOF
    ,FN_AT,60,FN_NOTCARR,38,FN_NOTCARR,39,FN_SET,0,FN_GOTO,67,FN_DESC,FN_EOF
    ,FN_AT,60,FN_CARRIED,38,FN_CLEAR,0,FN_GOTO,67,FN_DESC,FN_EOF
    ,FN_AT,60,FN_CARRIED,39,FN_CLEAR,0,FN_GOTO,67,FN_DESC,FN_EOF
    ,FN_AT,110,FN_NOTCARR,38,FN_NOTCARR,39,FN_SET,0,FN_GOTO,110,FN_DESC,FN_EOF
    ,FN_AT,110,FN_CARRIED,38,FN_CLEAR,0,FN_GOTO,110,FN_DESC,FN_EOF
    ,FN_AT,110,FN_CARRIED,39,FN_CLEAR,0,FN_GOTO,110,FN_DESC,FN_EOF
    ,FN_AT,113,FN_NOTCARR,38,FN_NOTCARR,39,FN_SET,0,FN_GOTO,111,FN_DESC,FN_EOF
    ,FN_AT,113,FN_CARRIED,38,FN_CLEAR,0,FN_GOTO,111,FN_DESC,FN_EOF
    ,FN_AT,113,FN_CARRIED,39,FN_CLEAR,0,FN_GOTO,111,FN_DESC,FN_EOF
    ,FN_AT,89,FN_NOTCARR,38,FN_NOTCARR,39,FN_SET,0,FN_GOTO,90,FN_DESC,FN_EOF
    ,FN_AT,89,FN_CARRIED,38,FN_CLEAR,0,FN_GOTO,90,FN_DESC,FN_EOF
    ,FN_AT,89,FN_CARRIED,39,FN_CLEAR,0,FN_GOTO,90,FN_DESC,FN_EOF
    ,FN_AT,90,FN_NOTCARR,38,FN_NOTCARR,39,FN_SET,0,FN_GOTO,93,FN_DESC,FN_EOF
    ,FN_AT,90,FN_CARRIED,38,FN_CLEAR,0,FN_GOTO,93,FN_DESC,FN_EOF
    ,FN_AT,90,FN_CARRIED,39,FN_CLEAR,0,FN_GOTO,93,FN_DESC,FN_EOF
    ,FN_AT,94,FN_NOTCARR,38,FN_NOTCARR,39,FN_SET,0,FN_GOTO,95,FN_DESC,FN_EOF
    ,FN_AT,94,FN_CARRIED,38,FN_CLEAR,0,FN_GOTO,95,FN_DESC,FN_EOF
    ,FN_AT,94,FN_CARRIED,39,FN_CLEAR,0,FN_GOTO,95,FN_DESC,FN_EOF
    ,FN_AT,32,FN_NOTCARR,38,FN_NOTCARR,39,FN_SET,0,FN_GOTO,89,FN_DESC,FN_EOF
    ,FN_AT,32,FN_CARRIED,38,FN_CLEAR,0,FN_GOTO,89,FN_DESC,FN_EOF
    ,FN_AT,32,FN_CARRIED,39,FN_CLEAR,0,FN_GOTO,89,FN_DESC,FN_EOF
    ,FN_AT,68,FN_NOTCARR,38,FN_NOTCARR,39,FN_SET,0,FN_GOTO,67,FN_DESC,FN_EOF
    ,FN_AT,68,FN_CARRIED,38,FN_CLEAR,0,FN_GOTO,67,FN_DESC,FN_EOF
    ,FN_AT,68,FN_CARRIED,39,FN_CLEAR,0,FN_GOTO,67,FN_DESC,FN_EOF
    ,FN_AT,69,FN_NOTCARR,38,FN_NOTCARR,39,FN_SET,0,FN_GOTO,70,FN_DESC,FN_EOF
    ,FN_AT,69,FN_CARRIED,38,FN_CLEAR,0,FN_GOTO,70,FN_DESC,FN_EOF
    ,FN_AT,69,FN_CARRIED,39,FN_CLEAR,0,FN_GOTO,70,FN_DESC,FN_EOF
    ,FN_AT,71,FN_NOTCARR,38,FN_NOTCARR,39,FN_SET,0,FN_GOTO,71,FN_DESC,FN_EOF
    ,FN_AT,71,FN_CARRIED,38,FN_CLEAR,0,FN_GOTO,71,FN_DESC,FN_EOF
    ,FN_AT,71,FN_CARRIED,39,FN_CLEAR,0,FN_GOTO,71,FN_DESC,FN_EOF
    ,FN_AT,143,FN_NOTCARR,38,FN_NOTCARR,39,FN_SET,0,FN_GOTO,145,FN_DESC,FN_EOF
    ,FN_AT,143,FN_CARRIED,38,FN_CLEAR,0,FN_GOTO,145,FN_DESC,FN_EOF
    ,FN_AT,143,FN_CARRIED,39,FN_CLEAR,0,FN_GOTO,145,FN_DESC,FN_EOF
    ,FN_AT,110,FN_NOTCARR,38,FN_NOTCARR,39,FN_SET,0,FN_GOTO,113,FN_DESC,FN_EOF
    ,FN_AT,110,FN_CARRIED,38,FN_CLEAR,0,FN_GOTO,113,FN_DESC,FN_EOF
    ,FN_AT,110,FN_CARRIED,39,FN_CLEAR,0,FN_GOTO,113,FN_DESC,FN_EOF
    ,FN_AT,114,FN_NOTCARR,38,FN_NOTCARR,39,FN_SET,0,FN_GOTO,114,FN_DESC,FN_EOF
    ,FN_AT,114,FN_CARRIED,38,FN_CLEAR,0,FN_GOTO,114,FN_DESC,FN_EOF
    ,FN_AT,114,FN_CARRIED,39,FN_CLEAR,0,FN_GOTO,114,FN_DESC,FN_EOF
    ,FN_AT,90,FN_NOTCARR,38,FN_NOTCARR,39,FN_SET,0,FN_GOTO,89,FN_DESC,FN_EOF
    ,FN_AT,90,FN_CARRIED,38,FN_CLEAR,0,FN_GOTO,89,FN_DESC,FN_EOF
    ,FN_AT,90,FN_CARRIED,39,FN_CLEAR,0,FN_GOTO,89,FN_DESC,FN_EOF
    ,FN_AT,93,FN_NOTCARR,38,FN_NOTCARR,39,FN_SET,0,FN_GOTO,90,FN_DESC,FN_EOF
    ,FN_AT,93,FN_CARRIED,38,FN_CLEAR,0,FN_GOTO,90,FN_DESC,FN_EOF
    ,FN_AT,93,FN_CARRIED,39,FN_CLEAR,0,FN_GOTO,90,FN_DESC,FN_EOF
    ,FN_AT,95,FN_NOTCARR,38,FN_NOTCARR,39,FN_SET,0,FN_GOTO,94,FN_DESC,FN_EOF
    ,FN_AT,95,FN_CARRIED,38,FN_CLEAR,0,FN_GOTO,94,FN_DESC,FN_EOF
    ,FN_AT,95,FN_CARRIED,39,FN_CLEAR,0,FN_GOTO,94,FN_DESC,FN_EOF
    ,FN_AT,67,FN_CLEAR,0,FN_GOTO,60,FN_DESC,FN_EOF
    ,FN_AT,89,FN_CLEAR,0,FN_GOTO,32,FN_DESC,FN_EOF
    ,FN_CARRIED,42,FN_AT,140,FN_LT,11,2,FN_MESSAGE,15,FN_DROP,42,FN_EOF
    ,FN_AT,70,FN_NOTCARR,38,FN_NOTCARR,39,FN_SET,0,FN_GOTO,67,FN_DESC,FN_EOF
    ,FN_AT,70,FN_CARRIED,38,FN_CLEAR,0,FN_GOTO,67,FN_DESC,FN_EOF
    ,FN_AT,70,FN_CARRIED,39,FN_CLEAR,0,FN_GOTO,67,FN_DESC,FN_EOF
    ,FN_AT,141,FN_NOTCARR,38,FN_NOTCARR,39,FN_SET,0,FN_GOTO,142,FN_DESC,FN_EOF
    ,FN_AT,141,FN_CARRIED,38,FN_CLEAR,0,FN_GOTO,142,FN_DESC,FN_EOF
    ,FN_AT,141,FN_CARRIED,39,FN_CLEAR,0,FN_GOTO,142,FN_DESC,FN_EOF
    ,FN_AT,144,FN_NOTCARR,38,FN_NOTCARR,39,FN_SET,0,FN_GOTO,145,FN_DESC,FN_EOF
    ,FN_AT,144,FN_CARRIED,38,FN_CLEAR,0,FN_GOTO,145,FN_DESC,FN_EOF
    ,FN_AT,144,FN_CARRIED,39,FN_CLEAR,0,FN_GOTO,145,FN_DESC,FN_EOF
    ,FN_AT,145,FN_NOTCARR,38,FN_NOTCARR,39,FN_SET,0,FN_GOTO,143,FN_DESC,FN_EOF
    ,FN_AT,145,FN_CARRIED,38,FN_CLEAR,0,FN_GOTO,143,FN_DESC,FN_EOF
    ,FN_AT,145,FN_CARRIED,39,FN_CLEAR,0,FN_GOTO,143,FN_DESC,FN_EOF
    ,FN_AT,114,FN_NOTCARR,38,FN_NOTCARR,39,FN_SET,0,FN_GOTO,114,FN_DESC,FN_EOF
    ,FN_AT,114,FN_CARRIED,38,FN_CLEAR,0,FN_GOTO,114,FN_DESC,FN_EOF
    ,FN_AT,114,FN_CARRIED,39,FN_CLEAR,0,FN_GOTO,114,FN_DESC,FN_EOF
    ,FN_AT,90,FN_NOTCARR,38,FN_NOTCARR,39,FN_SET,0,FN_GOTO,92,FN_DESC,FN_EOF
    ,FN_AT,90,FN_CARRIED,38,FN_CLEAR,0,FN_GOTO,92,FN_DESC,FN_EOF
    ,FN_AT,90,FN_CARRIED,39,FN_CLEAR,0,FN_GOTO,92,FN_DESC,FN_EOF
    ,FN_AT,91,FN_NOTCARR,38,FN_NOTCARR,39,FN_SET,0,FN_GOTO,90,FN_DESC,FN_EOF
    ,FN_AT,91,FN_CARRIED,38,FN_CLEAR,0,FN_GOTO,90,FN_DESC,FN_EOF
    ,FN_AT,91,FN_CARRIED,39,FN_CLEAR,0,FN_GOTO,90,FN_DESC,FN_EOF
    ,FN_AT,93,FN_NOTCARR,38,FN_NOTCARR,39,FN_SET,0,FN_GOTO,94,FN_DESC,FN_EOF
    ,FN_AT,93,FN_CARRIED,38,FN_CLEAR,0,FN_GOTO,94,FN_DESC,FN_EOF
    ,FN_AT,93,FN_CARRIED,39,FN_CLEAR,0,FN_GOTO,94,FN_DESC,FN_EOF
    ,FN_AT,73,FN_NOTCARR,38,FN_NOTCARR,39,FN_SET,0,FN_GOTO,71,FN_DESC,FN_EOF
    ,FN_AT,73,FN_CARRIED,38,FN_CLEAR,0,FN_GOTO,71,FN_DESC,FN_EOF
    ,FN_AT,73,FN_CARRIED,39,FN_CLEAR,0,FN_GOTO,71,FN_DESC,FN_EOF
    ,FN_AT,74,FN_NOTCARR,38,FN_NOTCARR,39,FN_SET,0,FN_GOTO,72,FN_DESC,FN_EOF
    ,FN_AT,74,FN_CARRIED,38,FN_CLEAR,0,FN_GOTO,72,FN_DESC,FN_EOF
    ,FN_AT,74,FN_CARRIED,39,FN_CLEAR,0,FN_GOTO,72,FN_DESC,FN_EOF
    ,FN_AT,146,FN_CLEAR,0,FN_GOTO,133,FN_DESC,FN_EOF
    ,FN_AT,145,FN_NOTCARR,38,FN_NOTCARR,39,FN_SET,0,FN_GOTO,144,FN_DESC,FN_EOF
    ,FN_AT,145,FN_CARRIED,38,FN_CLEAR,0,FN_GOTO,144,FN_DESC,FN_EOF
    ,FN_AT,145,FN_CARRIED,39,FN_CLEAR,0,FN_GOTO,144,FN_DESC,FN_EOF
    ,FN_AT,110,FN_NOTCARR,38,FN_NOTCARR,39,FN_SET,0,FN_GOTO,109,FN_DESC,FN_EOF
    ,FN_AT,110,FN_CARRIED,38,FN_CLEAR,0,FN_GOTO,109,FN_DESC,FN_EOF
    ,FN_AT,110,FN_CARRIED,39,FN_CLEAR,0,FN_GOTO,109,FN_DESC,FN_EOF
    ,FN_AT,112,FN_NOTCARR,38,FN_NOTCARR,39,FN_SET,0,FN_GOTO,111,FN_DESC,FN_EOF
    ,FN_AT,112,FN_CARRIED,38,FN_CLEAR,0,FN_GOTO,111,FN_DESC,FN_EOF
    ,FN_AT,112,FN_CARRIED,39,FN_CLEAR,0,FN_GOTO,111,FN_DESC,FN_EOF
    ,FN_AT,113,FN_NOTCARR,38,FN_NOTCARR,39,FN_SET,0,FN_GOTO,109,FN_DESC,FN_EOF
    ,FN_AT,113,FN_CARRIED,38,FN_CLEAR,0,FN_GOTO,109,FN_DESC,FN_EOF
    ,FN_AT,113,FN_CARRIED,39,FN_CLEAR,0,FN_GOTO,109,FN_DESC,FN_EOF
    ,FN_AT,114,FN_NOTCARR,38,FN_NOTCARR,39,FN_SET,0,FN_GOTO,113,FN_DESC,FN_EOF
    ,FN_AT,114,FN_CARRIED,38,FN_CLEAR,0,FN_GOTO,113,FN_DESC,FN_EOF
    ,FN_AT,114,FN_CARRIED,39,FN_CLEAR,0,FN_GOTO,113,FN_DESC,FN_EOF
    ,FN_AT,90,FN_NOTCARR,38,FN_NOTCARR,39,FN_SET,0,FN_GOTO,91,FN_DESC,FN_EOF
    ,FN_AT,90,FN_CARRIED,38,FN_CLEAR,0,FN_GOTO,91,FN_DESC,FN_EOF
    ,FN_AT,90,FN_CARRIED,39,FN_CLEAR,0,FN_GOTO,91,FN_DESC,FN_EOF
    ,FN_AT,92,FN_NOTCARR,38,FN_NOTCARR,39,FN_SET,0,FN_GOTO,90,FN_DESC,FN_EOF
    ,FN_AT,92,FN_CARRIED,38,FN_CLEAR,0,FN_GOTO,90,FN_DESC,FN_EOF
    ,FN_AT,92,FN_CARRIED,39,FN_CLEAR,0,FN_GOTO,90,FN_DESC,FN_EOF
    ,FN_AT,94,FN_NOTCARR,38,FN_NOTCARR,39,FN_SET,0,FN_GOTO,93,FN_DESC,FN_EOF
    ,FN_AT,94,FN_CARRIED,38,FN_CLEAR,0,FN_GOTO,93,FN_DESC,FN_EOF
    ,FN_AT,94,FN_CARRIED,39,FN_CLEAR,0,FN_GOTO,93,FN_DESC,FN_EOF
    ,FN_AT,95,FN_NOTCARR,38,FN_NOTCARR,39,FN_SET,0,FN_GOTO,93,FN_DESC,FN_EOF
    ,FN_AT,95,FN_CARRIED,38,FN_CLEAR,0,FN_GOTO,93,FN_DESC,FN_EOF
    ,FN_AT,95,FN_CARRIED,39,FN_CLEAR,0,FN_GOTO,93,FN_DESC,FN_EOF
    ,FN_AT,69,FN_NOTCARR,38,FN_NOTCARR,39,FN_SET,0,FN_GOTO,72,FN_DESC,FN_EOF
    ,FN_AT,69,FN_CARRIED,38,FN_CLEAR,0,FN_GOTO,72,FN_DESC,FN_EOF
    ,FN_AT,69,FN_CARRIED,39,FN_CLEAR,0,FN_GOTO,72,FN_DESC,FN_EOF
    ,FN_AT,71,FN_CLEAR,0,FN_GOTO,73,FN_DESC,FN_EOF
    ,FN_AT,72,FN_CLEAR,0,FN_GOTO,74,FN_DESC,FN_EOF
    ,FN_AT,144,FN_CLEAR,0,FN_GOTO,152,FN_DESC,FN_EOF
    ,FN_AT,67,FN_NOTCARR,38,FN_NOTCARR,39,FN_SET,0,FN_GOTO,70,FN_DESC,FN_EOF
    ,FN_AT,67,FN_CARRIED,38,FN_CLEAR,0,FN_GOTO,70,FN_DESC,FN_EOF
    ,FN_AT,67,FN_CARRIED,39,FN_CLEAR,0,FN_GOTO,70,FN_DESC,FN_EOF
    ,FN_AT,152,FN_NOTCARR,38,FN_NOTCARR,39,FN_SET,0,FN_GOTO,141,FN_DESC,FN_EOF
    ,FN_AT,152,FN_CARRIED,38,FN_CLEAR,0,FN_GOTO,141,FN_DESC,FN_EOF
    ,FN_AT,152,FN_CARRIED,39,FN_CLEAR,0,FN_GOTO,141,FN_DESC,FN_EOF
    ,FN_AT,109,FN_NOTCARR,38,FN_NOTCARR,39,FN_SET,0,FN_GOTO,112,FN_DESC,FN_EOF
    ,FN_AT,109,FN_CARRIED,38,FN_CLEAR,0,FN_GOTO,112,FN_DESC,FN_EOF
    ,FN_AT,109,FN_CARRIED,39,FN_CLEAR,0,FN_GOTO,112,FN_DESC,FN_EOF
    ,FN_AT,111,FN_NOTCARR,38,FN_NOTCARR,39,FN_SET,0,FN_GOTO,110,FN_DESC,FN_EOF
    ,FN_AT,111,FN_CARRIED,38,FN_CLEAR,0,FN_GOTO,110,FN_DESC,FN_EOF
    ,FN_AT,111,FN_CARRIED,39,FN_CLEAR,0,FN_GOTO,110,FN_DESC,FN_EOF
    ,FN_AT,71,FN_NOTCARR,38,FN_NOTCARR,39,FN_SET,0,FN_GOTO,68,FN_DESC,FN_EOF
    ,FN_AT,71,FN_CARRIED,38,FN_CLEAR,0,FN_GOTO,68,FN_DESC,FN_EOF
    ,FN_AT,71,FN_CARRIED,39,FN_CLEAR,0,FN_GOTO,68,FN_DESC,FN_EOF
    ,FN_AT,146,FN_NOTCARR,38,FN_NOTCARR,39,FN_SET,0,FN_GOTO,142,FN_DESC,FN_EOF
    ,FN_AT,146,FN_CARRIED,38,FN_CLEAR,0,FN_GOTO,142,FN_DESC,FN_EOF
    ,FN_AT,146,FN_CARRIED,39,FN_CLEAR,0,FN_GOTO,142,FN_DESC,FN_EOF
    ,FN_AT,113,FN_NOTCARR,38,FN_NOTCARR,39,FN_SET,0,FN_GOTO,111,FN_DESC,FN_EOF
    ,FN_AT,113,FN_CARRIED,38,FN_CLEAR,0,FN_GOTO,111,FN_DESC,FN_EOF
    ,FN_AT,113,FN_CARRIED,39,FN_CLEAR,0,FN_GOTO,111,FN_DESC,FN_EOF
    ,FN_AT,95,FN_CLEAR,0,FN_GOTO,96,FN_DESC,FN_EOF
    ,FN_AT,142,FN_NOTCARR,38,FN_NOTCARR,39,FN_SET,0,FN_GOTO,146,FN_DESC,FN_EOF
    ,FN_AT,142,FN_CARRIED,38,FN_CLEAR,0,FN_GOTO,146,FN_DESC,FN_EOF
    ,FN_AT,142,FN_CARRIED,39,FN_CLEAR,0,FN_GOTO,146,FN_DESC,FN_EOF
    ,FN_AT,110,FN_NOTCARR,38,FN_NOTCARR,39,FN_SET,0,FN_GOTO,112,FN_DESC,FN_EOF
    ,FN_AT,110,FN_CARRIED,38,FN_CLEAR,0,FN_GOTO,112,FN_DESC,FN_EOF
    ,FN_AT,110,FN_CARRIED,39,FN_CLEAR,0,FN_GOTO,112,FN_DESC,FN_EOF
    ,FN_AT,96,FN_NOTCARR,38,FN_NOTCARR,39,FN_SET,0,FN_GOTO,95,FN_DESC,FN_EOF
    ,FN_AT,96,FN_CARRIED,38,FN_CLEAR,0,FN_GOTO,95,FN_DESC,FN_EOF
    ,FN_AT,96,FN_CARRIED,39,FN_CLEAR,0,FN_GOTO,95,FN_DESC,FN_EOF
    ,FN_AT,121,FN_WORN,53,FN_MESSAGE,56,FN_PAUSE,200,FN_PAUSE,100,FN_GOTO,130,FN_DESC,FN_EOF
    ,FN_AT,68,FN_NOTCARR,38,FN_NOTCARR,39,FN_SET,0,FN_GOTO,71,FN_DESC,FN_EOF
    ,FN_AT,68,FN_CARRIED,38,FN_CLEAR,0,FN_GOTO,71,FN_DESC,FN_EOF
    ,FN_AT,68,FN_CARRIED,39,FN_CLEAR,0,FN_GOTO,71,FN_DESC,FN_EOF
    ,FN_AT,142,FN_NOTCARR,38,FN_NOTCARR,39,FN_SET,0,FN_GOTO,144,FN_DESC,FN_EOF
    ,FN_AT,142,FN_CARRIED,38,FN_CLEAR,0,FN_GOTO,144,FN_DESC,FN_EOF
    ,FN_AT,142,FN_CARRIED,39,FN_CLEAR,0,FN_GOTO,144,FN_DESC,FN_EOF
    ,FN_AT,111,FN_NOTCARR,38,FN_NOTCARR,39,FN_SET,0,FN_GOTO,111,FN_DESC,FN_EOF
    ,FN_AT,111,FN_CARRIED,38,FN_CLEAR,0,FN_GOTO,111,FN_DESC,FN_EOF
    ,FN_AT,111,FN_CARRIED,39,FN_CLEAR,0,FN_GOTO,111,FN_DESC,FN_EOF
    ,FN_AT,112,FN_NOTCARR,38,FN_NOTCARR,39,FN_SET,0,FN_GOTO,109,FN_DESC,FN_EOF
    ,FN_AT,112,FN_CARRIED,38,FN_CLEAR,0,FN_GOTO,109,FN_DESC,FN_EOF
    ,FN_AT,112,FN_CARRIED,39,FN_CLEAR,0,FN_GOTO,109,FN_DESC,FN_EOF
    ,FN_AT,109,FN_NOTCARR,38,FN_NOTCARR,39,FN_SET,0,FN_GOTO,111,FN_DESC,FN_EOF
    ,FN_AT,109,FN_CARRIED,38,FN_CLEAR,0,FN_GOTO,111,FN_DESC,FN_EOF
    ,FN_AT,109,FN_CARRIED,39,FN_CLEAR,0,FN_GOTO,111,FN_DESC,FN_EOF
    ,FN_AT,159,FN_CLEAR,0,FN_GOTO,157,FN_DESC,FN_EOF
    ,FN_AT,110,FN_NOTCARR,38,FN_NOTCARR,39,FN_SET,0,FN_GOTO,113,FN_DESC,FN_EOF
    ,FN_AT,110,FN_CARRIED,38,FN_CLEAR,0,FN_GOTO,113,FN_DESC,FN_EOF
    ,FN_AT,110,FN_CARRIED,39,FN_CLEAR,0,FN_GOTO,113,FN_DESC,FN_EOF
    ,FN_AT,112,FN_NOTCARR,38,FN_NOTCARR,39,FN_SET,0,FN_GOTO,112,FN_DESC,FN_EOF
    ,FN_AT,112,FN_CARRIED,38,FN_CLEAR,0,FN_GOTO,112,FN_DESC,FN_EOF
    ,FN_AT,112,FN_CARRIED,39,FN_CLEAR,0,FN_GOTO,112,FN_DESC,FN_EOF
    ,FN_AT,114,FN_NOTCARR,38,FN_NOTCARR,39,FN_SET,0,FN_GOTO,112,FN_DESC,FN_EOF
    ,FN_AT,114,FN_CARRIED,38,FN_CLEAR,0,FN_GOTO,112,FN_DESC,FN_EOF
    ,FN_AT,114,FN_CARRIED,39,FN_CLEAR,0,FN_GOTO,112,FN_DESC,FN_EOF
    ,FN_AT,111,FN_NOTCARR,38,FN_NOTCARR,39,FN_SET,0,FN_GOTO,114,FN_DESC,FN_EOF
    ,FN_AT,111,FN_CARRIED,38,FN_CLEAR,0,FN_GOTO,114,FN_DESC,FN_EOF
    ,FN_AT,111,FN_CARRIED,39,FN_CLEAR,0,FN_GOTO,114,FN_DESC,FN_EOF
    ,FN_AT,100,FN_NOTWORN,25,FN_MESSAGE,45,FN_EOF
    ,FN_AT,100,FN_NOTCARR,16,FN_MESSAGE,56,FN_EOF
    ,FN_AT,100,FN_WORN,25,FN_CARRIED,16,FN_GOTO,108,FN_DESC,FN_EOF
    ,FN_AT,109,FN_CLEAR,0,FN_GOTO,40,FN_DESC,FN_EOF
    ,FN_AT,25,FN_PRESENT,2,FN_DESTROY,2,FN_CREATE,1,FN_GET,1,FN_PLUS,30,5,FN_MESSAGE,8,FN_EOF
    ,FN_GET,1,FN_OK,FN_EOF
    ,FN_GET,2,FN_OK,FN_EOF
    ,FN_PRESENT,29,FN_GET,29,FN_OK,FN_EOF
    ,FN_PRESENT,38,FN_GET,38,FN_OK,FN_EOF
    ,FN_GET,3,FN_OK,FN_EOF
    ,FN_NOTCARR,1,FN_GET,5,FN_OK,FN_EOF
    ,FN_GET,6,FN_OK,FN_EOF
    ,FN_GET,7,FN_OK,FN_EOF
    ,FN_WORN,10,FN_GET,9,FN_OK,FN_EOF
    ,FN_GET,10,FN_OK,FN_EOF
    ,FN_GET,11,FN_OK,FN_EOF
    ,FN_GET,12,FN_OK,FN_EOF
    ,FN_GET,13,FN_OK,FN_EOF
    ,FN_GET,14,FN_OK,FN_EOF
    ,FN_GET,15,FN_OK,FN_EOF
    ,FN_GET,46,FN_OK,FN_EOF
    ,FN_GET,20,FN_OK,FN_EOF
    ,FN_GET,20,FN_OK,FN_EOF
    ,FN_GET,21,FN_OK,FN_EOF
    ,FN_GET,22,FN_OK,FN_EOF
    ,FN_GET,23,FN_OK,FN_EOF
    ,FN_GET,24,FN_OK,FN_EOF
    ,FN_GET,25,FN_OK,FN_EOF
    ,FN_PRESENT,26,FN_GET,26,FN_OK,FN_EOF
    ,FN_PRESENT,54,FN_GET,54,FN_OK,FN_EOF
    ,FN_CARRIED,51,FN_SWAP,51,26,FN_CREATE,13,FN_GET,13,FN_OK,FN_EOF
    ,FN_CARRIED,55,FN_SWAP,55,54,FN_CREATE,13,FN_GET,13,FN_OK,FN_EOF
    ,FN_GET,27,FN_OK,FN_EOF
    ,FN_GET,28,FN_OK,FN_EOF
    ,FN_GET,30,FN_OK,FN_EOF
    ,FN_PRESENT,39,FN_GET,39,FN_OK,FN_EOF
    ,FN_PRESENT,31,FN_GET,31,FN_OK,FN_EOF
    ,FN_GET,33,FN_OK,FN_EOF
    ,FN_GET,34,FN_OK,FN_EOF
    ,FN_GET,35,FN_OK,FN_EOF
    ,FN_GET,36,FN_OK,FN_EOF
    ,FN_PRESENT,37,FN_GET,37,FN_OK,FN_EOF
    ,FN_PRESENT,50,FN_GET,50,FN_OK,FN_EOF
    ,FN_GET,41,FN_OK,FN_EOF
    ,FN_NOTAT,126,FN_NOTAT,137,FN_NOTAT,140,FN_WORN,41,FN_GET,42,FN_MESSAGE,13,FN_EOF
    ,FN_AT,126,FN_PRESENT,27,FN_WORN,41,FN_GET,42,FN_MESSAGE,13,FN_MESSAGE,18,FN_EOF
    ,FN_AT,126,FN_ABSENT,27,FN_GET,42,FN_MESSAGE,13,FN_DROP,42,FN_MESSAGE,17,FN_EOF
    ,FN_AT,140,FN_WORN,41,FN_NOTZERO,11,FN_GET,42,FN_MESSAGE,13,FN_EOF
    ,FN_AT,59,FN_MESSAGE,19,FN_PAUSE,100,FN_GOTO,157,FN_EOF
    ,FN_GET,8,FN_OK,FN_EOF
    ,FN_GET,47,FN_OK,FN_EOF
    ,FN_GET,53,FN_OK,FN_EOF
    ,FN_NOTAT,120,FN_GET,48,FN_OK,FN_EOF
    ,FN_GET,49,FN_EOF
    ,FN_NOTAT,128,FN_GET,52,FN_OK,FN_EOF
    ,FN_GET,17,FN_OK,FN_EOF
    ,FN_AT,43,FN_PRESENT,6,FN_DESTROY,6,FN_CREATE,5,FN_GET,5,FN_PLUS,30,5,FN_OK,FN_EOF
    ,FN_AT,56,FN_CARRIED,7,FN_DROP,7,FN_DESTROY,7,FN_CREATE,44,FN_GET,44,FN_PLUS,30,5,FN_MESSAGE,20,FN_EOF
    ,FN_AT,38,FN_CARRIED,11,FN_SWAP,11,18,FN_OK,FN_EOF
    ,FN_AT,48,FN_SWAP,14,13,FN_OK,FN_EOF
    ,FN_AT,135,FN_CARRIED,28,FN_SWAP,28,53,FN_MESSAGE,62,FN_PLUS,30,5,FN_EOF
    ,FN_AT,49,FN_CARRIED,35,FN_SWAP,35,36,FN_OK,FN_EOF
    ,FN_AT,36,FN_CARRIED,36,FN_SWAP,36,49,FN_MESSAGE,48,FN_PAUSE,50,FN_OK,FN_EOF
    ,FN_WEAR,10,FN_OK,FN_EOF
    ,FN_WEAR,46,FN_OK,FN_EOF
    ,FN_WEAR,25,FN_OK,FN_EOF
    ,FN_CARRIED,28,FN_MESSAGE,43,FN_EOF
    ,FN_WORN,25,FN_WEAR,41,FN_OK,FN_EOF
    ,FN_NOTWORN,25,FN_WEAR,17,FN_OK,FN_EOF
    ,FN_REMOVE,11,FN_OK,FN_EOF
    ,FN_REMOVE,10,FN_OK,FN_EOF
    ,FN_REMOVE,46,FN_OK,FN_EOF
    ,FN_REMOVE,25,FN_OK,FN_EOF
    ,FN_REMOVE,41,FN_OK,FN_EOF
    ,FN_WORN,40,FN_GT,30,50,FN_REMOVE,40,FN_OK,FN_EOF
    ,FN_REMOVE,17,FN_OK,FN_EOF
    ,FN_MESSAGE,2,FN_EOF
    ,FN_GOTO,63,FN_DESC,FN_EOF
    ,FN_CARRIED,29,FN_NOTCARR,30,FN_MESSAGE,4,FN_EOF
    ,FN_CARRIED,29,FN_CARRIED,30,FN_SWAP,29,38,FN_CLEAR,0,FN_DESC,FN_EOF
    ,FN_CARRIED,31,FN_SWAP,31,39,FN_CLEAR,0,FN_DESC,FN_EOF
    ,FN_DROP,1,FN_OK,FN_EOF
    ,FN_AT,1,FN_PLUS,30,5,FN_OK,FN_EOF
    ,FN_AT,162,FN_DROP,1,FN_SET,14,FN_OK,FN_EOF
    ,FN_DROP,2,FN_OK,FN_EOF
    ,FN_CARRIED,29,FN_DROP,29,FN_OK,FN_EOF
    ,FN_CARRIED,38,FN_DROP,38,FN_OK,FN_EOF
    ,FN_DROP,3,FN_OK,FN_EOF
    ,FN_DROP,4,FN_OK,FN_EOF
    ,FN_DROP,5,FN_OK,FN_EOF
    ,FN_AT,1,FN_PLUS,30,5,FN_OK,FN_EOF
    ,FN_AT,162,FN_DROP,5,FN_SET,13,FN_OK,FN_EOF
    ,FN_DROP,6,FN_OK,FN_EOF
    ,FN_DROP,7,FN_OK,FN_EOF
    ,FN_DROP,8,FN_OK,FN_EOF
    ,FN_DROP,9,FN_MESSAGE,24,FN_EOF
    ,FN_DROP,10,FN_OK,FN_EOF
    ,FN_DROP,11,FN_OK,FN_EOF
    ,FN_NOTAT,11,FN_DROP,12,FN_OK,FN_EOF
    ,FN_AT,11,FN_DROP,12,FN_MESSAGE,29,FN_PAUSE,200,FN_EOF
    ,FN_NOTAT,50,FN_DROP,13,FN_OK,FN_EOF
    ,FN_AT,50,FN_MESSAGE,28,FN_CREATE,12,FN_PLUS,30,5,FN_PAUSE,200,FN_PAUSE,200,FN_DESC,FN_EOF
    ,FN_CARRIED,51,FN_DROP,51,FN_OK,FN_EOF
    ,FN_NOTAT,48,FN_DROP,14,FN_OK,FN_EOF
    ,FN_AT,48,FN_DROP,14,FN_MESSAGE,24,FN_EOF
    ,FN_NOTAT,138,FN_DROP,15,FN_OK,FN_EOF
    ,FN_AT,138,FN_DROP,15,FN_CREATE,14,FN_MESSAGE,24,FN_MESSAGE,26,FN_DESTROY,15,FN_PLUS,30,5,FN_EOF
    ,FN_DROP,16,FN_OK,FN_EOF
    ,FN_DROP,46,FN_OK,FN_EOF
    ,FN_DROP,18,FN_OK,FN_EOF
    ,FN_NOTAT,118,FN_DROP,19,FN_OK,FN_EOF
    ,FN_AT,118,FN_MESSAGE,41,FN_EOF
    ,FN_DROP,20,FN_OK,FN_EOF
    ,FN_DROP,20,FN_OK,FN_EOF
    ,FN_DROP,21,FN_OK,FN_EOF
    ,FN_DROP,22,FN_OK,FN_EOF
    ,FN_NOTAT,117,FN_DROP,23,FN_OK,FN_EOF
    ,FN_AT,117,FN_SWAP,23,19,FN_MESSAGE,44,FN_EOF
    ,FN_NOTAT,120,FN_DROP,24,FN_OK,FN_EOF
    ,FN_AT,120,FN_SWAP,24,48,FN_MESSAGE,39,FN_EOF
    ,FN_DROP,25,FN_OK,FN_EOF
    ,FN_CARRIED,26,FN_DROP,26,FN_OK,FN_MESSAGE,1,FN_EOF
    ,FN_AT,162,FN_DROP,26,FN_SET,15,FN_OK,FN_EOF
    ,FN_CARRIED,54,FN_DROP,54,FN_OK,FN_EOF
    ,FN_DROP,27,FN_OK,FN_EOF
    ,FN_DROP,28,FN_OK,FN_EOF
    ,FN_AT,135,FN_DROP,45,FN_MESSAGE,24,FN_EOF
    ,FN_DROP,30,FN_OK,FN_EOF
    ,FN_CARRIED,31,FN_DROP,31,FN_OK,FN_EOF
    ,FN_CARRIED,39,FN_DROP,39,FN_OK,FN_EOF
    ,FN_DROP,32,FN_OK,FN_EOF
    ,FN_DROP,33,FN_OK,FN_EOF
    ,FN_DROP,33,FN_OK,FN_EOF
    ,FN_DROP,34,FN_OK,FN_EOF
    ,FN_DROP,35,FN_OK,FN_EOF
    ,FN_DROP,36,FN_OK,FN_EOF
    ,FN_CARRIED,37,FN_DROP,37,FN_OK,FN_EOF
    ,FN_CARRIED,50,FN_DROP,50,FN_OK,FN_EOF
    ,FN_AT,59,FN_DROP,44,FN_CREATE,43,FN_GET,43,FN_MESSAGE,21,FN_MESSAGE,22,FN_OK,FN_EOF
    ,FN_DROP,40,FN_OK,FN_EOF
    ,FN_DROP,8,FN_OK,FN_EOF
    ,FN_DROP,47,FN_OK,FN_EOF
    ,FN_AT,130,FN_CARRIED,53,FN_MESSAGE,57,FN_PAUSE,200,FN_PAUSE,200,FN_PLUS,30,5,FN_GOTO,1,FN_EOF
    ,FN_NOTAT,130,FN_DROP,53,FN_OK,FN_EOF
    ,FN_DROP,48,FN_OK,FN_EOF
    ,FN_DROP,49,FN_OK,FN_EOF
    ,FN_CARRIED,51,FN_SWAP,51,26,FN_DROP,26,FN_OK,FN_EOF
    ,FN_NOTAT,128,FN_DROP,52,FN_OK,FN_EOF
    ,FN_AT,128,FN_DROP,4,FN_CREATE,27,FN_DESC,FN_EOF
    ,FN_DROP,17,FN_OK,FN_EOF
    ,FN_DROP,52,FN_OK,FN_EOF
    ,FN_DESC,FN_EOF
    ,FN_CARRIED,38,FN_SWAP,38,29,FN_SET,0,FN_DESC,FN_EOF
    ,FN_CARRIED,39,FN_SWAP,39,31,FN_SET,0,FN_DESC,FN_EOF
    ,FN_NOTAT,11,FN_MESSAGE,5,FN_PAUSE,200,FN_MESSAGE,6,FN_EOF
    ,FN_AT,11,FN_CHANCE,20,FN_CREATE,11,FN_MESSAGE,30,FN_PAUSE,200,FN_PAUSE,200,FN_PLUS,30,5,FN_DESC,FN_EOF
    ,FN_AT,140,FN_PRESENT,42,FN_EQ,11,0,FN_NOTWORN,41,FN_NOTWORN,25,FN_MESSAGE,16,FN_LET,11,2,FN_PLUS,30,5,FN_DONE,FN_EOF
    ,FN_AT,140,FN_NOTZERO,11,FN_NOTWORN,41,FN_NOTWORN,25,FN_PRESENT,42,FN_MESSAGE,16,FN_DONE,FN_EOF
    ,FN_AT,7,FN_ABSENT,31,FN_MESSAGE,10,FN_PAUSE,100,FN_GOTO,124,FN_DESC,FN_EOF
    ,FN_AT,133,FN_PRESENT,43,FN_DROP,43,FN_DESTROY,43,FN_CREATE,6,FN_GET,6,FN_PLUS,30,5,FN_OK,FN_EOF
    ,FN_AT,124,FN_ABSENT,27,FN_NOTCARR,54,FN_CARRIED,3,FN_CARRIED,8,FN_SWAP,8,52,FN_SWAP,3,2,FN_MESSAGE,10,FN_PAUSE,100,FN_GOTO,7,FN_DONE,FN_EOF
    ,FN_AT,124,FN_ABSENT,27,FN_NOTCARR,54,FN_NOTCARR,3,FN_NOTCARR,8,FN_MESSAGE,10,FN_PAUSE,100,FN_GOTO,7,FN_DONE,FN_EOF
    ,FN_AT,99,FN_NOTCARR,37,FN_MESSAGE,10,FN_PAUSE,100,FN_GOTO,116,FN_DESC,FN_EOF
    ,FN_AT,124,FN_ABSENT,27,FN_CARRIED,8,FN_NOTCARR,54,FN_NOTCARR,3,FN_SWAP,8,52,FN_MESSAGE,10,FN_PAUSE,200,FN_GOTO,7,FN_DONE,FN_EOF
    ,FN_AT,124,FN_ABSENT,27,FN_NOTCARR,8,FN_NOTCARR,54,FN_CARRIED,3,FN_SWAP,3,2,FN_MESSAGE,10,FN_PAUSE,200,FN_GOTO,7,FN_DONE,FN_EOF
    ,FN_AT,24,FN_SWAP,8,45,FN_PLUS,30,5,FN_OK,FN_EOF
    ,FN_AT,98,FN_SWAP,45,16,FN_OK,FN_EOF
    ,FN_AT,155,FN_PRESENT,8,FN_MESSAGE,36,FN_DESTROY,8,FN_SET,20,FN_EOF
    ,FN_AT,155,FN_CARRIED,47,FN_NOTZERO,20,FN_CREATE,8,FN_MESSAGE,37,FN_DESTROY,47,FN_OK,FN_EOF
    ,FN_AT,81,FN_CARRIED,47,FN_NOTZERO,20,FN_CREATE,8,FN_MESSAGE,37,FN_DESTROY,47,FN_EOF
    ,FN_NOTAT,81,FN_NOTAT,155,FN_CARRIED,47,FN_DESTROY,47,FN_MESSAGE,37,FN_EOF
    ,FN_AT,35,FN_MESSAGE,60,FN_MESSAGE,7,FN_TURNS,FN_SCORE,FN_END,FN_EOF
    ,FN_TURNS,FN_EOF
    ,FN_AT,40,FN_NOTCARR,38,FN_NOTCARR,39,FN_SET,0,FN_GOTO,109,FN_DESC,FN_EOF
    ,FN_AT,40,FN_CARRIED,38,FN_CLEAR,0,FN_GOTO,109,FN_DESC,FN_EOF
    ,FN_AT,40,FN_CARRIED,39,FN_CLEAR,0,FN_GOTO,109,FN_DESC,FN_EOF
    ,FN_INVEN,FN_EOF
    ,FN_NOTAT,162,FN_SCORE,FN_BEEP,40,120,FN_BEEP,20,126,FN_BEEP,20,126,FN_BEEP,20,122,FN_BEEP,20,120,FN_BEEP,40,122,FN_BEEP,20,121,FN_BEEP,60,116,FN_BEEP,40,122,FN_BEEP,20,130,FN_BEEP,20,130,FN_BEEP,20,126,FN_BEEP,20,122,FN_BEEP,60,122,FN_BEEP,60,120,FN_BEEP,40,120,FN_BEEP,20,126,FN_BEEP,20,126,FN_BEEP,20,122,FN_BEEP,20,120,FN_BEEP,40,122,FN_BEEP,20,120,FN_BEEP,60,116,FN_BEEP,40,122,FN_BEEP,20,130,FN_BEEP,40,126,FN_BEEP,20,110,FN_BEEP,60,116,FN_BEEP,60,112,FN_MESSAGE,7,FN_TURNS,FN_END,FN_EOF
    ,FN_ATLT,85,FN_SAVE,FN_EOF
    ,FN_AT,162,FN_SAVE,FN_END,FN_EOF
    ,FN_LOAD,FN_EOF
    ,FN_AT,106,FN_CARRIED,16,FN_SWAP,16,26,FN_PLUS,30,5,FN_OK,FN_EOF
    ,FN_AT,106,FN_NOTCARR,16,FN_CARRIED,45,FN_MESSAGE,58,FN_EOF
    ,FN_AT,106,FN_NOTCARR,16,FN_NOTCARR,45,FN_MESSAGE,59,FN_EOF
    ,FN_DESTROY,33,FN_OK,FN_EOF
    ,FN_MESSAGE,49,FN_PAUSE,50,FN_EOF
    ,FN_CARRIED,13,FN_CARRIED,26,FN_SWAP,26,51,FN_DESTROY,13,FN_OK,FN_EOF
    ,FN_CARRIED,26,FN_NOTCARR,13,FN_MESSAGE,50,FN_EOF
    ,FN_CARRIED,13,FN_CARRIED,54,FN_SWAP,54,55,FN_DESTROY,13,FN_OK,FN_EOF
    ,FN_CARRIED,54,FN_NOTCARR,13,FN_MESSAGE,50,FN_EOF
    ,FN_AT,26,FN_CREATE,4,FN_GET,4,FN_MESSAGE,64,FN_EOF
    ,FN_AT,127,FN_PAUSE,100,FN_GOTO,128,FN_DESC,FN_EOF
    ,FN_SCORE,FN_EOF
};
