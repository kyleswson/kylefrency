#ifndef CONFIG_H
#define CONFIG_H

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID       0x0127
#define PRODUCT_ID      0x0127
#define DEVICE_VER      0x0001
#define MANUFACTURER    kyle son
#define PRODUCT         kylefrency
#define DESCRIPTION     Keyboard

#define MASTER_LEFT
#define SPLIT_USB_DETECT

/* key matrix size */
#define MATRIX_ROWS 10
#define MATRIX_COLS 9

/* key matrix pins */
#define MATRIX_ROW_PINS { F4, F5, F6, F7, B1 }
#define MATRIX_COL_PINS { B3, B2, B6, B5, B4, E6, D7, C6, D4 }
#define MATRIX_ROW_PINS_RIGHT { F4, F5, F6, F7, B1 }
#define MATRIX_COL_PINS_RIGHT { B3, B2, B6, B5, B4, E6, D7, C6, D4 }
// #define USE_I2C
#define SOFT_SERIAL_PIN D3

/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION COL2ROW

/* Encoders */
#define ENCODERS_PAD_A { }
#define ENCODERS_PAD_B { }
#define ENCODER_RESOLUTIONS { }
#define ENCODERS_PAD_A_RIGHT { D5 }
#define ENCODERS_PAD_B_RIGHT { B0 }
#define ENCODER_RESOLUTIONS_RIGHT { 4 }

/* Set 0 if debouncing isn't needed */
#define DEBOUNCE 5

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#undef LOCKING_SUPPORT_ENABLE

/* Locking resynchronize hack */
#undef LOCKING_RESYNC_ENABLE

/* key combination for command */
#define IS_COMMAND() ( \
    keyboard_report->mods == (MOD_BIT(KC_LSHIFT) | MOD_BIT(KC_RSHIFT)) \
)

#define SPLIT_OLED_ENABLE
#define OLED_TIMEOUT 300000

#define SPLIT_MODS_ENABLE
#define SPLIT_LED_STATE_ENABLE
#define SPLIT_LAYER_STATE_ENABLE

#define CMK 1
#define NUM 2
#define SYM 3
#define FNC 4

#define RGB_DI_PIN D2
#ifdef RGB_DI_PIN
#define RGBLIGHT_SPLIT
#define RGBLIGHT_ANIMATIONS
#define RGBLIGHT_EFFECT_TWINKLE
#define RGBLIGHT_EFFECT_RAINBOW_MOOD
#define RGBLIGHT_EFFECT_ALTERNATING
#define RGBLIGHT_EFFECT_RAINBOW_SWIRL
#define RGBLED_NUM 20
#define RGBLED_SPLIT { 10, 10 }
#define RGBLIGHT_HUE_STEP 8
#define RGBLIGHT_SAT_STEP 8
#define RGBLIGHT_VAL_STEP 8
#endif

#endif