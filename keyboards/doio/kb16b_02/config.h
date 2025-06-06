
#pragma once

#define VENDOR_ID       0xFEED
#define PRODUCT_ID      0x6060
#define DEVICE_VER      0x0001
#define MANUFACTURER    Doio
#define PRODUCT         KB16B-02

#define MATRIX_ROWS 5
#define MATRIX_COLS 7

#define MATRIX_ROW_PINS { D0, D1, D2, D3, D5 }
#define MATRIX_COL_PINS { F0, F1, F4, F5, F6, F7, B1 }

#define DIODE_DIRECTION COL2ROW

#define ENCODERS_PAD_A { B2 }
#define ENCODERS_PAD_B { B3 }
#define ENCODER_RESOLUTION 4
