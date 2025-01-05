#include QMK_KEYBOARD_H
#include "version.h"
#define MOON_LED_LEVEL LED_LEVEL
#define ML_SAFE_RANGE SAFE_RANGE

enum custom_keycodes {
  RGB_SLD = ML_SAFE_RANGE,
  HSV_0_255_255,
  HSV_74_255_255,
  HSV_169_255_255,
  HSV_0_0_255,
};



const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_voyager(
    TO(4),          TO(5),          KC_TRANSPARENT, MO(7),          TO(1),          TO(2),                                          MO(9),          KC_TRANSPARENT, MO(8),          KC_TRANSPARENT, TO(3),          TO(6),          
    KC_TRANSPARENT, QK_ALT_REPEAT_KEY, KC_W,           KC_E,           KC_R,           KC_T,                                           KC_Y,           KC_U,           KC_I,           KC_O,           QK_REPEAT_KEY, KC_TRANSPARENT, 
    KC_Q,           KC_A,           KC_S,           KC_D,           KC_F,           KC_G,                                           KC_H,           KC_J,           KC_K,           KC_L,           KC_P,           KC_SCLN,        
    TO(0),          KC_Z,           KC_X,           KC_C,           KC_V,           KC_B,                                           KC_N,           KC_M,           KC_COMMA,       KC_DOT,         KC_SLASH,       KC_TRANSPARENT, 
                                                    KC_SPACE,       MO(4),                                          MO(5),          KC_LEFT_SHIFT
  ),
  [1] = LAYOUT_voyager(
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_NO,          KC_NO,          KC_L,           KC_D,           KC_W,           KC_Z,                                           KC_J,           KC_F,           KC_O,           KC_U,           KC_NO,          KC_NO,          
    KC_B,           KC_N,           KC_R,           KC_T,           KC_S,           KC_G,                                           KC_Y,           KC_H,           KC_A,           KC_E,           KC_I,           KC_SCLN,        
    KC_TRANSPARENT, KC_Q,           KC_X,           KC_M,           KC_C,           KC_V,                                           KC_K,           KC_P,           KC_COMMA,       KC_DOT,         KC_SLASH,       KC_TRANSPARENT, 
                                                    KC_SPACE,       MO(4),                                          MO(5),          KC_LEFT_SHIFT
  ),
  [2] = LAYOUT_voyager(
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_NO,          KC_NO,          KC_W,           KC_F,           KC_P,           KC_B,                                           KC_J,           KC_L,           KC_U,           KC_Y,           KC_NO,          KC_NO,          
    KC_Q,           KC_A,           KC_R,           KC_S,           KC_T,           KC_G,                                           KC_M,           KC_N,           KC_E,           KC_I,           KC_O,           KC_SCLN,        
    KC_TRANSPARENT, KC_Z,           KC_X,           KC_C,           KC_D,           KC_V,                                           KC_K,           KC_H,           KC_COMMA,       KC_DOT,         KC_SLASH,       KC_TRANSPARENT, 
                                                    KC_SPACE,       MO(4),                                          MO(5),          KC_LEFT_SHIFT
  ),
  [3] = LAYOUT_voyager(
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_NO,          KC_NO,          KC_W,           KC_E,           KC_R,           KC_T,                                           KC_Y,           KC_U,           KC_I,           KC_O,           KC_NO,          KC_NO,          
    KC_Q,           MT(MOD_LSFT, KC_A),MT(MOD_LALT, KC_S),MT(MOD_LGUI, KC_D),MT(MOD_LCTL, KC_F),KC_G,                                           KC_H,           MT(MOD_LCTL, KC_J),MT(MOD_LGUI, KC_K),MT(MOD_LALT, KC_L),MT(MOD_LSFT, KC_P),KC_SCLN,        
    KC_TRANSPARENT, KC_Z,           KC_X,           KC_C,           KC_V,           KC_B,                                           KC_N,           KC_M,           KC_COMMA,       KC_DOT,         KC_SLASH,       KC_TRANSPARENT, 
                                                    KC_SPACE,       MO(4),                                          MO(5),          KC_LEFT_SHIFT
  ),
  [4] = LAYOUT_voyager(
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_NO,          KC_NO,          KC_DELETE,      LCTL(LSFT(KC_TAB)),LCTL(KC_TAB),   KC_ESCAPE,                                      KC_ESCAPE,      KC_TAB,         KC_BSPC,        KC_ENTER,       KC_CAPS,        KC_NO,          
    KC_NO,          OSM(MOD_LSFT),  OSM(MOD_LALT),  OSM(MOD_LGUI),  OSM(MOD_LCTL),  KC_TAB,                                         KC_LEFT,        KC_DOWN,        KC_UP,          KC_RIGHT,       CW_TOGG,        KC_INSERT,      
    KC_TRANSPARENT, KC_NO,          KC_BSPC,        KC_ENTER,       LALT(KC_LEFT),  LALT(KC_RIGHT),                                 KC_HOME,        KC_PGDN,        KC_PAGE_UP,     KC_END,         KC_NO,          KC_NO,          
                                                    KC_NO,          KC_TRANSPARENT,                                 MO(6),          KC_TRANSPARENT
  ),
  [5] = LAYOUT_voyager(
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_NO,          KC_NO,          KC_LBRC,        KC_LCBR,        KC_LPRN,        KC_BSLS,                                        KC_PIPE,        KC_RPRN,        KC_RCBR,        KC_RBRC,        KC_NO,          KC_NO,          
    KC_NO,          KC_LABK,        KC_TILD,        KC_MINUS,       KC_QUOTE,       KC_UNDS,                                        KC_EQUAL,       KC_DQUO,        KC_PLUS,        KC_COLN,        KC_RABK,        KC_NO,          
    KC_TRANSPARENT, KC_EXLM,        KC_AT,          KC_HASH,        KC_DLR,         KC_GRAVE,                                       KC_NO,          KC_PERC,        KC_CIRC,        KC_AMPR,        KC_ASTR,        KC_NO,          
                                                    KC_TRANSPARENT, MO(6),                                          KC_TRANSPARENT, KC_NO
  ),
  [6] = LAYOUT_voyager(
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_NO,          KC_NO,          KC_5,           KC_3,           KC_1,           KC_9,                                           KC_8,           KC_0,           KC_2,           KC_4,           KC_NO,          KC_NO,          
    KC_TRANSPARENT, KC_7,           OSM(MOD_LALT),  OSM(MOD_LGUI),  OSM(MOD_LCTL),  KC_F11,                                         KC_F12,         KC_UNDS,        KC_EQUAL,       KC_CIRC,        KC_6,           KC_NO,          
    KC_TRANSPARENT, KC_F7,          KC_F5,          KC_F3,          KC_F1,          KC_F9,                                          KC_F8,          KC_F10,         KC_F2,          KC_F4,          KC_F6,          KC_NO,          
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [7] = LAYOUT_voyager(
    KC_NO,          KC_NO,          KC_NO,          KC_TRANSPARENT, KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_MS_WH_DOWN,  KC_MS_UP,       KC_MS_WH_UP,    KC_NO,          KC_NO,          
    KC_NO,          OSM(MOD_LSFT),  OSM(MOD_LALT),  OSM(MOD_LGUI),  OSM(MOD_LCTL),  KC_NO,                                          KC_MS_WH_LEFT,  KC_MS_LEFT,     KC_MS_DOWN,     KC_MS_RIGHT,    KC_MS_WH_RIGHT, KC_NO,          
    KC_TRANSPARENT, KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_MS_BTN3,     KC_NO,          
                                                    KC_NO,          KC_TRANSPARENT,                                 KC_MS_BTN2,     KC_MS_BTN1
  ),
  [8] = LAYOUT_voyager(
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_TRANSPARENT, KC_NO,          KC_NO,          KC_NO,          
    KC_NO,          KC_NO,          KC_MEDIA_PLAY_PAUSE,KC_MEDIA_STOP,  KC_MEDIA_PREV_TRACK,KC_MEDIA_NEXT_TRACK,                                KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_NO,          KC_NO,          KC_AUDIO_MUTE,  KC_AUDIO_VOL_DOWN,KC_AUDIO_VOL_UP,KC_PSCR,                                        KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_NO,          KC_NO,          KC_CALCULATOR,  KC_BRIGHTNESS_DOWN,KC_BRIGHTNESS_UP,KC_MY_COMPUTER,                                 KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
                                                    KC_NO,          KC_NO,                                          KC_NO,          KC_NO
  ),
  [9] = LAYOUT_voyager(
    KC_NO,          HSV_0_255_255,  RGB_TOG,        RGB_VAD,        RGB_VAI,        KC_NO,                                          KC_TRANSPARENT, KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_NO,          HSV_74_255_255, TOGGLE_LAYER_COLOR,RGB_SAD,        RGB_SAI,        KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_NO,          HSV_169_255_255,RGB_MODE_FORWARD,RGB_HUD,        RGB_HUI,        KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_NO,          HSV_0_0_255,    RGB_SLD,        RGB_SPD,        RGB_SPI,        KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
                                                    KC_NO,          KC_NO,                                          KC_NO,          KC_NO
  ),
};




bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {

    case RGB_SLD:
      if (record->event.pressed) {
        rgblight_mode(1);
      }
      return false;
    case HSV_0_255_255:
      if (record->event.pressed) {
        rgblight_mode(1);
        rgblight_sethsv(0,255,255);
      }
      return false;
    case HSV_74_255_255:
      if (record->event.pressed) {
        rgblight_mode(1);
        rgblight_sethsv(74,255,255);
      }
      return false;
    case HSV_169_255_255:
      if (record->event.pressed) {
        rgblight_mode(1);
        rgblight_sethsv(169,255,255);
      }
      return false;
    case HSV_0_0_255:
      if (record->event.pressed) {
        rgblight_mode(1);
        rgblight_sethsv(0,0,255);
      }
      return false;
  }
  return true;
}



