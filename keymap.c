#include QMK_KEYBOARD_H
#define PREONIC_YES                 // This is the Preonic
#include "danl4_common_functions.c"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
[_WINBASE] = LAYOUT_preonic_1x2uC(  /* Base Layer */
 /*
  KC_ESC,   KC_EXLM, KC_AT,   KC_HASH, KC_DLR,  KC_PERC, KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_BSPC, \
  KC_TAB,   KC_Q,    KC_W,    KC_F,    KC_P,    KC_G,    KC_J,    KC_L,    KC_U,    KC_Y,    KC_QUOT, KC_ENT,  \
  KC_BSPC,  KC_A,    KC_R,    KC_S,    KC_T,    KC_D,    KC_H,    KC_N,    KC_E,    KC_I,    KC_O,    KC_ENT,  \
  SHFT_CAP, KC_Z,    KC_X,    KC_C,    LC_V,    KC_B,    KC_K,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT, \
  CTRLB,    TD(SUP), KC_LALT, KC_LCTL, TD(LOW), KC_SPC,      TD(RAI), KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT  \
),*/
  KC_TAB,  KC_Q,   KC_W,    KC_E,   KC_R,    KC_T,	KC_Y,	KC_U,    KC_I,     KC_O,     KC_P,	KC_BSLASH,\
  MIRR_ESC,SHFT_A, CTRL_S,  ALT_D,  GUI_F,   KC_G,	KC_H,	GUI_J,   ALT_K,    CTRL_L,   SHSQ,	TD(QUO),\
  TD(CLS), Z_UNDO, X_REDO,  KC_C,   KC_V,    KC_B,	KC_N,	KC_M,    CTRL_COMM,SHFT_DOT, SLASHES,   KC_RSHIFT,\
  KC_TAB,  KC_LGUI,MIRR_DEL,NUMPAD, KC_BSPC, CTRL_TAB,	SFT_ENT,KC_SPC,  ARROWS,   FN_ESC,   KC_EQUAL,	CPYPST,\
 _______, _______, _______, _______, _______,_______,	_______,_______, _______,  _______,  _______ \
), 

/*BATREUS: 
KC_TAB,  KC_ESC,
                   NUMPAD, KC_BSPC,CTLDEL,//regular thumbs left
                                           KC_LGUI,  MO(_MIRROR),//middle thumbs for BATreus
                                                              KC_ENT,KC_SPC,  ARROWS, //regular thumbs right
                                                                                                KC_MINUS,       KC_EQUAL,
Atreus:
KC_TAB,  KC_ESC,KC_LGUI,NUMPAD, KC_BSPC, CTLDEL,         SFT_ENT, KC_SPC,  ARROWS,   KC_MINUS, KC_EQUAL, CPYPST, 
*/

[_MIRROR] = LAYOUT_preonic_1x2uC(  /*MIRROR*/
  KC_BSLASH,  KC_P,           KC_O,    KC_I,     KC_U,    KC_Y,           KC_MS_ACCEL0, KC_MS_BTN1,	KC_MS_UP,  KC_MS_BTN2, KC_Q,KC_BSLASH, \
  _______, TD(SCL),        KC_L,    KC_K,     KC_J,    KC_H,           KC_MS_ACCEL1, KC_MS_LEFT,	KC_MS_DOWN,KC_MS_RIGHT,KC_A,TD(QUO), \
  TD(CLS), CTL_T(KC_SLASH),KC_DOT,  KC_COMM,  KC_M,    KC_N,           KC_MS_ACCEL2, KC_V,		KC_MS_DOWN,KC_X,       KC_Z,KC_RSHIFT, \
  KC_EQUAL,KC_MINUS,	_______, _______,  KC_SPC,  KC_ENT,	    LGUI(KC_DEL), KC_BSPC,	KC_TAB, TO(_WINBASE),_______, _______, \
  _______, _______,         _______, _______, _______,          _______, _______, _______,       _______, _______, _______ \
  ),
/*BATREUS:
KC_EQUAL, KC_MINUS,       _______,   KC_SPC,   RSFT_T(KC_ENT),   KC_LCTL, KC_LGUI, KC_DEL, KC_BSPC, _______, KC_LGUI,KC_LALT, \

// ATREUS:
CPYPST, KC_EQUAL, KC_MINUS,       _______,   KC_SPC, RSFT_T(KC_ENT),LGUI(KC_DEL),KC_BSPC,_______,KC_LGUI,KC_LALT,NUMPAD, \
  */



[_ARROWS] = LAYOUT_preonic_1x2uC(  /* RAISE - Arrows */
  ALT_TAB, 	KC_LALT,   	XXXXXXX,	KC_PIPE,   	KC_TILD,	XXXXXXX, XXXXXXX,  KC_HOME, KC_UP,   KC_PGUP,  XXXXXXX,   _______,\
  _______, 	_______,   	_______, 	_______, 	_______,	XXXXXXX, KC_PSCR,  KC_LEFT, KC_DOWN, KC_RIGHT, XXXXXXX,   _______,\
  _______, 	LCTL(KC_Z),	LCTL(KC_X),	LCTL(KC_C),	LCTL(KC_V),	XXXXXXX, XXXXXXX,  KC_END,  KC_DOWN, KC_PGDN,  XXXXXXX,   _______,\
  TO(_WINBASE),	KC_APP,		_______,   	_______,   	CTLDEL,	_______, _______,  _______, _______, _______,  _______, _______, \
  _______, 	_______,   	_______,   	_______,   	_______,	_______, _______,  _______, _______, _______, _______\
/*
BATreus
  _______, _______, FUNCTN, _______, _______, _______, _______,  _______, _______, FUNCTN,  _______, _______, \

Atreus
  _______, _______, _______, _______, _______, _______, _______,  _______,  FUNCTN,_______,  _______, _______, \

*/


),

[_NUMPAD] = LAYOUT_preonic_1x2uC(  /* LOWER - Numpad */
/*  KC_TILD, KC_EXLM, KC_AT,   KC_HASH, KC_DLR,  KC_PERC, KC_CIRC, KC_AMPR, KC_ASTR, KC_QUES, KC_DQT,  KC_DEL,  \
  KC_TILD, KC_EXLM, KC_AT,   KC_HASH, KC_DLR,  KC_PERC, KC_CIRC, KC_AMPR, KC_ASTR, KC_QUES, KC_DQT,  KC_DEL,  \
  KC_DEL,  KC_LBRC, KC_RBRC, KC_MINS, KC_UNDS, KC_HOME, KC_END,  KC_LPRN, KC_RPRN, KC_SLSH, KC_SCLN, KC_PGUP, \
  CPYPST,  XXXXXXX, C(KC_X), KC_LABK, KC_RABK, XXXXXXX, XXXXXXX, KC_LCBR, KC_RCBR, KC_BSLS, KC_COLN, KC_PGDN, \
  _______, _______, _______, _______, _______,      KC_TAB,      _______, _______, _______, _______, _______  \*/

  ALT_TAB, KC_VOLU, KC_AT,  KC_HASH, KC_DLR,  KC_PERC,		KC_ASTR,KC_7,   KC_8,	KC_9,   KC_0,    _______,\
  LANGSWP, KC_VOLD, CURLY,   SQUAR,   PARAN,    XXXXXXX,	KC_SLSH,KC_4,   KC_5,	KC_6,   KC_PLUS, KC_ASTR,\
  _______, KC_MUTE, KC_CUT,  KC_COPY, KC_PASTE, KC_PSCR,	KC_0,	KC_1,   KC_2,	KC_3,	KC_MINS, KC_PLUS,\
  _______, KC_APP,  TO(_WINBASE), _______, CTLDEL,_______,	_______,_______,_______,KC_KP_DOT, _______, _______, \
  _______, _______, _______, _______, _______,  _______, 	_______,_______,_______,_______, _______\

/*
BATreus
  _______, _______, FUNCTN, _______, _______, _______, _______,  _______, _______, FUNCTN,  _______, _______, \

Atreus
  _______, _______, _______, FUNCTN, _______, _______, _______,  _______ ,_______,_______,  _______, _______, \

*/
),

[_FUNC] = LAYOUT_preonic_1x2uC(  /* ADJUST - Macros, Layer Switching, Function Keys */
/*  UNIWIN,  XXXXXXX, XXXXXXX, RANDIG,  RANDIG,  KC_INS,  XXXXXXX, XXXXXXX,  XXXXXXX, XXXXXXX, AU_TOG, MU_TOG,  \
  UNILIN,  SUPA2,   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_F1,    KC_F2,   KC_F3,   KC_F4,  XXXXXXX, \
  XXXXXXX, DEGREE,  IBANG,   LAROW,   RAROW,   SWCOLE,  COLEMAK, KC_F5,    KC_F6,   KC_F7,   KC_F8,  BL_INC,  \
  _______, CADKEY,  MICRO,   WOMEGA,  OMEGA,   XXXXXXX, XXXXXXX, KC_F9,    KC_F10,  KC_F11,  KC_F12, BL_DEC,  \
  _______, _______, _______, _______, _______,      RESET,       _______,  XXXXXXX, MUV_DE,  MUV_IN, BL_TOGG  \*/

  _______,	KC_VOLU,   RESET,  	XXXXXXX, XXXXXXX, KC_APP,	XXXXXXX,KC_F7,  KC_F8,   KC_F9, KC_F10,  KC_F11,  \
  TO(_WINBASE), KC_LSHIFT, KC_LCTRL, 	KC_LALT, KC_LGUI, LCTL(KC_LALT),XXXXXXX,KC_F4,  KC_F5,   KC_F6, KC_F11,  XXXXXXX, \
  XXXXXXX, 	KC_CAPS,   KC_INSERT,	XXXXXXX, KC_F,    KC_PSCR,	XXXXXXX,KC_F1,  KC_F2,   KC_F3, KC_F12,  KC_F12,  \
  RESET, 	_______,   _______,	_______, _______, _______,	_______,_______,_______, _______,_______, _______,  \
  _______, 	_______,   _______,	_______, _______, RESET,	_______,XXXXXXX,MUV_DE,  MUV_IN, BL_TOGG  \

)


};
