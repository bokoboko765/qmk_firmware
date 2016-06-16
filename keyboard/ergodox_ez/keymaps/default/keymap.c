// modified following file.
// https://github.com/msc654/qmk_firmware/blob/master/keyboard%2Fergodox_ez%2Fkeymaps%2Fdefault%2Fkeymap.c

#include "ergodox_ez.h"
#include "debug.h"
#include "action_layer.h"

#define BASE 0  // default layer
#define KSL  1  // kersol
#define NUM  2  // num
#define FN   3  // function

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
/* Keymap 0: BASE layer
 *
 * ,--------------------------------------------------.           ,--------------------------------------------------.
 * | ESC    |   1  |   2  |   3  |   4  |   5  | F13  |           | `~   |   6  |   7  |   8  |   9  |   0  | Bkspc  |
 * |--------+------+------+------+------+-------------|           |------+------+------+------+------+------+--------|
 * | Tab    |   Q  |   W  |   E  |   R  |   T  | copy |           | _    |   Y  |   U  |   I  |   O  |   P  |   \|   |
 * |--------+------+------+------+------+------|      |           | -    |------+------+------+------+------+--------|
 * | ~L1    |   A  |   S  |   D  |   F  |   G  |------|           |------|   H  |   J  |   K  |   L  |   ;  |   /?   |
 * |--------+------+------+------+------+------|paste |           | +    |------+------+------+------+------+--------|
 * | LShift |Z/Ctrl|   X  |   C  |   V  |   B  |      |           | =    |   N  |   M  |   ,  |   .  |  Up  |  '/L3  |
 * `--------+------+------+------+------+-------------'           `-------------+------+------+------+------+--------'
 *   |LCtrl | LGui |paste | copy | LAlt |                                       | F13  |RCtrl | Left | Down | Right|
 *   `----------------------------------'                                       `----------------------------------'
 *                                        ,-------------.       ,-------------.
 *                                        | ~L2  |      |       | Ins  | Del  |
 *                                 ,------|------|------|       |------+--------+------.
 *                                 |      |      |PrtSc |       |      |        |      |
 *                                 |Space | ~L2  |------|       |------|  -_    |Enter |
 *                                 |      |      | F13  |       | F7   |        |      |
 *                                 `--------------------'       `----------------------'
 */
// If it accepts an argument (i.e, is a function), it doesn't need KC_.
// Otherwise, it needs KC_*
[BASE] = KEYMAP(  // layer 0 : default
        // left hand
        KC_ESC,         KC_1,         KC_2,        KC_3,      KC_4,   KC_5,   KC_F13,
        KC_TAB,         KC_Q,         KC_W,        KC_E,      KC_R,   KC_T,   LCTL(KC_C),
        LT(KSL,KC_EQL), KC_A,         KC_S,        KC_D,      KC_F,   KC_G,
        KC_LSFT,        CTL_T(KC_Z),  LT(NUM,KC_X),KC_C,      KC_V,   KC_B,   LCTL(KC_V),
        KC_LCTRL,       KC_LGUI,      LCTL(KC_V),LCTL(KC_C),KC_LALT,
                                                               LT(NUM,KC_TRNS),KC_TRNS,
                                                                              KC_PSCR,
                                                               KC_SPC,LT(NUM,KC_TRNS),LT(FN,KC_TRNS),
        // right hand
             KC_GRV,      KC_6,   KC_7,   KC_8,   KC_9,   KC_0,             KC_BSPC,
             KC_MINS,     KC_Y,   KC_U,   KC_I,   KC_O,   KC_P,             KC_BSLS,
                          KC_H,   KC_J,   KC_K,   KC_L,   LT(FN,KC_SCLN),          KC_SLSH,
             KC_EQL,      KC_N,   KC_M,   KC_COMM,KC_DOT, KC_UP,            LT(FN,KC_QUOT),
                                  KC_F13, KC_RCTL,KC_LEFT,KC_DOWN,          KC_RGHT,
             KC_INS,         KC_DELT,
             KC_TRNS,
             KC_F7,KC_MINS, KC_ENT
    ),

/* Keymap 1: KERSOL
 *
 * ,--------------------------------------------------.           ,--------------------------------------------------.
 * | ESC    |  F1  |  F2  |  F3  |  F4  |  F5  |      |           |PrtSc |  F6  |  F7  |  F8  |  F9  |  F10 |  F11   |
 * |--------+------+------+------+------+-------------|           |------+------+------+------+------+------+--------|
 * | CapsLk |      |      |      |      |      |      |           |      | Home |  Del |Bkspc |  End |      |  F12   |
 * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
 * |        |LShift|      |      |      |      |------|           |------| Left | Down |  Up  | Right|      | Enter  |
 * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
 * |        |      |      |      |      |      |      |           |      |  `~  |  '"  |  =+  |  -_  | PgUp |        |
 * `--------+------+------+------+------+-------------'           `-------------+------+------+------+------+--------'
 *   |      | -L1  | LGui |      | LAlt |                                       |  [{  |  ]}  | Home | PgDn | End  |
 *   `----------------------------------'                                       `----------------------------------'
 *                                        ,-------------.       ,-------------.
 *                                        |      |      |       |      |      |
 *                                 ,------|------|------|       |------+--------+------.
 *                                 |      |      |      |       |      |        |      |
 *                                 |Space |      |------|       |------|        |Enter |
 *                                 |      |      |      |       | App  |        |      |
 *                                 `--------------------'       `----------------------'
 */
// If it accepts an argument (i.e, is a function), it doesn't need KC_.
// Otherwise, it needs KC_*
[KSL] = KEYMAP(  // layer 0 : default
        // left hand
        KC_ESC,         KC_F1,        KC_F2,  KC_F3,  KC_F4,  KC_F5,  KC_TRNS,
        KC_CAPS,        KC_TRNS,      KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,
        KC_TRNS,      KC_LSFT,      KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,
        KC_TRNS,        KC_TRNS,      KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,
        KC_TRNS,        KC_TRNS,      KC_LGUI,KC_TRNS,KC_LALT,
                                               KC_TRNS,       KC_TRNS,
                                                              KC_TRNS,
                                               KC_SPC,KC_TRNS,KC_TRNS,
        // right hand
             KC_PSCR,     KC_F6,  KC_F7,  KC_F8,  KC_F9,  KC_F10,           KC_F11,
             KC_TRNS,     KC_HOME,KC_DELT,KC_BSPC,KC_END, KC_TRNS,          KC_F12,
                          KC_LEFT,KC_DOWN,KC_UP,  KC_RGHT,KC_TRNS,          KC_ENT,
             KC_TRNS,     KC_GRV, KC_QUOT,KC_EQL, KC_MINS,KC_PGUP,          KC_TRNS,
                                  KC_LBRC,KC_RBRC,KC_HOME,KC_PGDN,          KC_END,
             KC_TRNS,        KC_TRNS,
             KC_TRNS,
             KC_APP,KC_TRNS, KC_ENT
    ),

/* Keymap 2: Numeric Layer
 *
 * ,--------------------------------------------------.           ,--------------------------------------------------.
 * | ESC    |  F1  |  F2  |  F3  |  F4  |  F5  |Teensy|           |NumLk |  F7  |  F8  |  /   |  *   |      | Bkspc  |
 * |--------+------+------+------+------+-------------|           |------+------+------+------+------+------+--------|
 * | Tab    |      |      |      |      |      |      |           |      | -_   |  7&  |  8*  |  9(  |  *   |   -    |
 * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
 * |        |      |LShift|      |      |      |------|           |------|  -   |  4$  |  5%  |  6^  |  +   |  =+    |
 * |--------+------+------+------+------+------|LShift|           |      |------+------+------+------+------+--------|
 * | LShift |      |      |      |      |      |      |           |      |  &   |  1!  |  2@  |  3#  |  \   | Enter  |
 * `--------+------+------+------+------+-------------'           `-------------+------+------+------+------+--------'
 *   |LCtrl |      |      |      | LAlt |                                       |  0   |  ,<  |  .>  |      |      |
 *   `----------------------------------'                                       `----------------------------------'
 *                                        ,-------------.       ,-------------.
 *                                        |      |      |       |      | Del  |
 *                                 ,------|------|------|       |------+------+------.
 *                                 |      |      |      |       |      |      |      |
 *                                 |Space |      |------|       |------|      |Enter |
 *                                 |      |      |      |       |      |      |      |
 *                                 `--------------------'       `--------------------'
 */
// Fnctions
[NUM] = KEYMAP(
       // left hand
       KC_ESC,      KC_F1,      KC_F2,   KC_F3,   KC_F4,   KC_F5,   RESET,
       KC_TAB,      KC_TRNS,    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
       KC_TRNS,     KC_TRNS,    KC_LSFT, KC_TRNS, KC_TRNS, KC_TRNS,
       KC_LSFT,     KC_TRNS,    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_LSFT,
       KC_LCTL,     KC_TRNS,    KC_TRNS, KC_TRNS, KC_LALT,
                                                            KC_TRNS, KC_TRNS,
                                                                     KC_TRNS,
                                                     KC_SPC, KC_TRNS,KC_TRNS,
       // right hand
       KC_NLCK, KC_F7,   KC_F8,   KC_SLSH, KC_ASTR,  KC_TRNS, KC_BSPC,
       KC_TRNS, KC_MINS, KC_7,    KC_8,    KC_9,     KC_ASTR, KC_MINS,
                KC_MINS, KC_4,    KC_5,    KC_6,     KC_PLUS, KC_EQL,
       KC_TRNS, KC_AMPR, KC_1,    KC_2,    KC_3,     KC_BSLS, KC_ENT,
                KC_0,    KC_COMM, KC_DOT,  KC_TRNS,  KC_TRNS,
       KC_TRNS, KC_DELT,
       KC_TRNS,
       KC_TRNS, KC_TRNS, KC_ENT
    ),
    
/* Keymap 3: Functions
 *
 * ,--------------------------------------------------.           ,--------------------------------------------------.
 * |        |      |      |      |      |      |      |           |      |      |  F10 |  F11 |  F12 |      |        |
 * |--------+------+------+------+------+-------------|           |------+------+------+------+------+------+--------|
 * |        |   !  |   @  |   {  |   }  |   |  |      |           |      |      |  F7  |  F8  |  F9  |      |        |
 * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
 * |        |   #  |   $  |   (  |   )  |   `  |------|           |------|      |  F4  |  F5  |  F6  |      |        |
 * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
 * |        |   %  |   ^  |   [  |   ]  |   ~  |      |           |      |      |  F1  |  F2  |  F3  |RShift|        |
 * `--------+------+------+------+------+-------------'           `-------------+------+------+------+------+--------'
 *   |      |      |      |      |      |                                       |      |      |      |      |      |
 *   `----------------------------------'                                       `----------------------------------'
 *                                        ,-------------.       ,-------------.
 *                                        |      |      |       |      |      |
 *                                 ,------|------|------|       |------+------+------.
 *                                 |      |      |      |       |      |      |      |
 *                                 |      |      |------|       |------|      |      |
 *                                 |      |      |      |       |      |      |      |
 *                                 `--------------------'       `--------------------'
 */
// FN
[FN] = KEYMAP(
       // left hand
       KC_TRNS,KC_F1,  KC_F2,  KC_F3,  KC_F4,  KC_F5,  KC_TRNS,
       KC_TRNS,KC_EXLM,KC_AT,  KC_LCBR,KC_RCBR,KC_PIPE,KC_TRNS,
       KC_TRNS,KC_HASH,KC_DLR, KC_LPRN,KC_RPRN,KC_GRV,
       KC_TRNS,KC_PERC,KC_CIRC,KC_LBRC,KC_RBRC,KC_TILD,KC_TRNS,
       KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,
                                                            KC_TRNS, KC_TRNS,
                                                                     KC_TRNS,
                                                     KC_TRNS, KC_TRNS, KC_TRNS,
       // right hand
       KC_TRNS,       KC_TRNS, KC_F10,  KC_F11,  KC_F12,   KC_TRNS,  KC_TRNS,
       KC_TRNS,       KC_TRNS, KC_F7,   KC_F8,   KC_F9,    KC_TRNS, KC_TRNS,
                      KC_TRNS, KC_F4,   KC_F5,   KC_F6,    KC_TRNS, KC_TRNS,
       KC_TRNS,       KC_TRNS, KC_F1,   KC_F2,   KC_F3,    KC_RSFT, KC_TRNS,
                      KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS,
       KC_TRNS, KC_TRNS,
       KC_TRNS,
       KC_TRNS, KC_TRNS, KC_TRNS
    ),
};

const uint16_t PROGMEM fn_actions[] = {
    [1] = ACTION_LAYER_TAP_TOGGLE(FN)                // FN1 - Momentary Layer 1 (functions)
};

const macro_t *action_get_macro(keyrecord_t *record, uint8_t id, uint8_t opt)
{
    // MACRODOWN only works in this function
    switch(id) {
        case 0:
            if (record->event.pressed) {
                register_code(KC_RSFT);
            } else {
                unregister_code(KC_RSFT);
            }
            break;
    }
    return MACRO_NONE;
};

// Runs just one time when the keyboard initializes.
void matrix_init_user(void) {
    ergodox_board_led_off();
    ergodox_right_led_1_on();
    ergodox_right_led_2_on();
    ergodox_right_led_3_on();
    ergodox_board_led_off();
    ergodox_right_led_1_on();
    ergodox_right_led_2_on();
    ergodox_right_led_3_on();
    ergodox_board_led_off();    
};

// Runs constantly in the background, in a loop.
void matrix_scan_user(void) {

    uint8_t layer = biton32(layer_state);

    ergodox_board_led_off();
    ergodox_right_led_1_off();
    ergodox_right_led_2_off();
    ergodox_right_led_3_off();
    switch (layer) {
      // TODO: Make this relevant to the ErgoDox EZ.
        case BASE:
            ergodox_right_led_1_on();
            break;
        case KSL:
            ergodox_right_led_2_on();
            break;
        case NUM:
            ergodox_right_led_3_on();
            break;
        case FN:
            ergodox_led_all_on();
            break;
        default:
            // none
            break;
    }

};
