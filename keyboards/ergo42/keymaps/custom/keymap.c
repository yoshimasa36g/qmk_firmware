#include QMK_KEYBOARD_H

extern keymap_config_t keymap_config;

#define BASE 0
#define META 1
#define SYMB 2
#define GAME 3

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  /* BASE
   * ,------------------------------------------------.   ,------------------------------------------------.
   * |   `  |   Q  |   W  |   E  |   R  |  T   |      |   |      |  Y   |   U  |   I  |   O  |   P  | Bksp |
   * |------+------+------+------+------+------+------|   |-------------+------+------+------+------+------|
   * | TAB  |   A  |   S  |   D  |   F  |  G   |      |   |      |  H   |   J  |   K  |   L  |   ;  |   '  |
   * |------+------+------+------+------+------+------|   |------|------+------+------+------+------+------|
   * | ESC  |   Z  |   X  |   C  |   V  |B,SYMB|      |   |      |N,META|   M  |   ,  |   .  |   /  |   \  |
   * |------+------+------+------+------+------+------|   |------+------+------+------+------+------+------|
   * |      |      |      |      | LGUI |CLang2|SSpace|   |SEnter|CLang1| RALT |      |      |      |      |
   * `------------------------------------------------'   `------------------------------------------------'
   */
  [BASE] = LAYOUT( \
    KC_GRV,  KC_Q,  KC_W,  KC_E,  KC_R,    KC_T,             KC_NO,          KC_NO,          KC_Y,             KC_U,    KC_I,    KC_O,   KC_P,    KC_BSPC, \
    KC_TAB,  KC_A,  KC_S,  KC_D,  KC_F,    KC_G,             KC_NO,          KC_NO,          KC_H,             KC_J,    KC_K,    KC_L,   KC_SCLN, KC_QUOT, \
    KC_ESC,  KC_Z,  KC_X,  KC_C,  KC_V,    LT(SYMB, KC_B),   KC_NO,          KC_NO,          LT(META, KC_N),   KC_M,    KC_COMM, KC_DOT, KC_SLSH, KC_BSLS, \
    KC_NO,   KC_NO, KC_NO, KC_NO, KC_LGUI, LCTL_T(KC_LANG2), LSFT_T(KC_SPC), RSFT_T(KC_ENT), RCTL_T(KC_LANG1), KC_RALT, KC_NO,   KC_NO,  KC_NO,   KC_NO \
  ),

  /* META
   * ,------------------------------------------------.   ,------------------------------------------------.
   * |   `  |   !  |   @  |   #  |   $  |  %   |      |   |      |  ^   |   &  |   *  |   (  |   )  | Del  |
   * |------+------+------+------+------+------+------|   |-------------+------+------+------+------+------|
   * | TAB  |   1  |   2  |   3  |   4  |  5   |      |   |      |  6   |   7  |   8  |   9  |   0  |      |
   * |------+------+------+------+------+------+------|   |------|------+------+------+------+------+------|
   * | ESC  |      |      |      |      |      |      |   |      |  _   |   -  |   =  |   +  |   [  |   ]  |
   * |------+------+------+------+------+------+------|   |------+------+------+------+------+------+------|
   * |      |      |      |      | LGUI |CLang2|SSpace|   |SEnter|CLang1| RALT |      |      |      |      |
   * `------------------------------------------------'   `------------------------------------------------'
   */
  [META] = LAYOUT( \
    KC_GRV, KC_EXLM, KC_AT, KC_HASH, KC_DLR,  KC_PERC,          KC_NO,          KC_NO,          KC_CIRC,          KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_DEL,\
    KC_TAB, KC_1,    KC_2,  KC_3,    KC_4,    KC_5,             KC_NO,          KC_NO,          KC_6,             KC_7,    KC_8,    KC_9,    KC_0,    KC_NO,\
    KC_ESC, KC_NO,   KC_NO, KC_NO,   KC_NO,   KC_NO,            KC_NO,          KC_NO,          KC_UNDS,          KC_MINS, KC_EQL,  KC_PLUS, KC_LBRC, KC_RBRC,\
    KC_NO,  KC_NO,   KC_NO, KC_NO,   KC_LGUI, LCTL_T(KC_LANG2), LSFT_T(KC_SPC), RSFT_T(KC_ENT), RCTL_T(KC_LANG1), KC_RALT, KC_NO,   KC_NO,   KC_NO,   KC_NO \
  ),

  /* SYMB
   * ,------------------------------------------------.   ,------------------------------------------------.
   * |   `  |  F1  |  F2  |  F3  |  F4  |  F5  |      |   |      |  -   |   =  |   +  |   {  |   }  | Del  |
   * |------+------+------+------+------+------+------+   |-------------+------+------+------+------+------|
   * | TAB  |  F6  |  F7  |  F8  |  F9  |  F10 |      |   |      | Left | Down |  Up  |Right |      |      |
   * |------+------+------+------+------+------+------|   |------|------+------+------+------+------+------|
   * | ESC  |  F11 |  F12 |      |      |      |      |   |      |  _   |   -  |   =  |   +  |   [  |   ]  |
   * |------+------+------+------+------+------+------|   |------+------+------+------+------+------+------|
   * |      |      |      |      | LGUI |CLang2|SSpace|   |SEnter|CLang1| RALT |      |      |      |      |
   * `------------------------------------------------'   `------------------------------------------------'
   */
  [SYMB] = LAYOUT( \
    KC_GRV, KC_F1,  KC_F2,  KC_F3, KC_F4,   KC_F5,            KC_NO,          KC_NO,          KC_MINS,          KC_EQL,  KC_PLUS, KC_LCBR,  KC_RCBR, KC_DEL,\
    KC_TAB, KC_F6,  KC_F7,  KC_F8, KC_F9,   KC_F10,           KC_NO,          KC_NO,          KC_LEFT,          KC_DOWN, KC_UP,   KC_RIGHT, KC_NO,   KC_NO,\
    KC_ESC, KC_F11, KC_F12, KC_NO, KC_NO,   KC_NO,            KC_NO,          KC_NO,          KC_UNDS,          KC_MINS, KC_EQL,  KC_PLUS,  KC_LBRC, KC_RBRC,\
    KC_NO,  KC_NO,  KC_NO,  KC_NO, KC_LGUI, LCTL_T(KC_LANG2), LSFT_T(KC_SPC), RSFT_T(KC_ENT), RCTL_T(KC_LANG1), KC_RALT, KC_NO,   KC_NO,    KC_NO,   KC_NO \
  )

};

