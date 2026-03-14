#include QMK_KEYBOARD_H
#include "version.h"
#include "raw_hid.h"

/*
#ifndef ZSA_SAFE_RANGE
#define ZSA_SAFE_RANGE SAFE_RANGE
#endif

enum custom_keycodes {
  RGB_SLD = ZSA_SAFE_RANGE,
};
*/



const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_ergodox_pretty(
    KC_GRAVE,       KC_1,           KC_2,           KC_3,           KC_4,           KC_5,           TG(1),                                          KC_PSCR,        KC_6,           KC_7,           KC_8,           KC_9,           KC_0,           KC_BSLS,
    KC_TAB,         KC_QUOTE,       KC_COMMA,       KC_DOT,         KC_P,           KC_Y,           KC_DELETE,                                      KC_CAPS,        KC_F,           KC_G,           KC_C,           KC_R,           KC_L,           KC_SLASH,
    KC_EQUAL,       KC_A,           KC_O,           KC_E,           KC_U,           KC_I,                                                                           KC_D,           KC_H,           KC_T,           KC_N,           KC_S,           KC_MINUS,
    KC_LEFT_SHIFT,  MT(MOD_LALT, KC_SCLN),MT(MOD_LGUI, KC_Q),MT(MOD_LSFT, KC_J),MT(MOD_LCTL, KC_K),KC_X,           LT(3, KC_RBRC),                                 LT(3, KC_LBRC), KC_B,           MT(MOD_RCTL, KC_M),MT(MOD_RSFT, KC_W),MT(MOD_RGUI, KC_V),MT(MOD_RALT, KC_Z),KC_LEFT_SHIFT,
    KC_LEFT_CTRL,   KC_LEFT_GUI,    KC_LEFT_ALT,    KC_INSERT,      MO(3),                                                                                                          MO(3),          KC_INSERT,      KC_LEFT_ALT,    KC_RIGHT_GUI,   KC_LEFT_CTRL,
                                                                                                    KC_LEFT_SHIFT,  KC_LEFT_CTRL,   KC_LEFT_CTRL,   KC_LEFT_SHIFT,
                                                                                                                    KC_LEFT_CTRL,   KC_LEFT_SHIFT,
                                                                                    KC_BSPC,        LT(2, KC_ESCAPE),KC_LEFT_GUI,    KC_RIGHT_GUI,   KC_ENTER,       KC_SPACE
  ),
  [1] = LAYOUT_ergodox_pretty(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_Q,           KC_W,           KC_E,           KC_R,           KC_T,           KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_Y,           KC_U,           KC_I,           KC_O,           KC_P,           KC_MINUS,
    KC_TRANSPARENT, KC_A,           KC_S,           KC_D,           KC_F,           KC_G,                                                                           KC_H,           KC_J,           KC_K,           KC_L,           KC_SCLN,        KC_QUOTE,
    KC_TRANSPARENT, MT(MOD_LALT, KC_Z),MT(MOD_LGUI, KC_X),MT(MOD_LSFT, KC_C),MT(MOD_LCTL, KC_V),KC_B,           KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_N,           MT(MOD_RCTL, KC_M),MT(MOD_RSFT, KC_COMMA),MT(MOD_RGUI, KC_DOT),MT(MOD_RALT, KC_SLASH),KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [2] = LAYOUT_ergodox_pretty(
    KC_TRANSPARENT, KC_F1,          KC_F2,          KC_F3,          KC_F4,          KC_F5,          KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_F6,          KC_F7,          KC_F8,          KC_F9,          KC_F10,         KC_F11,
    KC_TRANSPARENT, LALT(LCTL(KC_DELETE)),KC_TRANSPARENT, LSFT(LCTL(KC_TAB)),   LCTL(KC_TAB),         KC_DELETE, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_HOME,        KC_PGDN,        KC_PAGE_UP,     KC_END,         KC_F12,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_LEFT_ALT, LSFT(KC_TAB), KC_TAB,      KC_CAPS,                                                                        KC_TRANSPARENT, KC_LEFT,        KC_DOWN,        KC_UP,          KC_RIGHT,       KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, MT(MOD_LCTL, KC_INSERT),CW_TOGG,        KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                    MO(3),          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, MO(4)
  ),
  [3] = LAYOUT_ergodox_pretty(
    KC_TRANSPARENT, KC_F1,          KC_F2,          KC_F3,          KC_F4,          KC_F5,          KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_F6,          KC_F7,          KC_F8,          KC_F9,          KC_F10,         KC_F11,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_LBRC,        KC_RBRC,        KC_BSLS,        KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_BSLS,       KC_7,           KC_8,           KC_9,           KC_EQUAL,       KC_F12,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_LPRN,        KC_RPRN,        KC_GRAVE,                                                                       KC_SLASH,        KC_4,           KC_5,           KC_6,           KC_MINUS,        KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_SLASH,       KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_0,           MT(MOD_RCTL, KC_1),MT(MOD_RSFT, KC_2),MT(MOD_RGUI, KC_3),MT(MOD_RALT, KC_DOT),KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [4] = LAYOUT_ergodox_pretty(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_F7,          KC_F8,          KC_F9,          KC_F12,         KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_BRIGHTNESS_UP,KC_MEDIA_REWIND,KC_MEDIA_PLAY_PAUSE,KC_MEDIA_FAST_FORWARD,KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_F4,          KC_F5,          KC_F6,          KC_F11,                                                                         KC_BRIGHTNESS_DOWN,KC_AUDIO_MUTE,  KC_AUDIO_VOL_DOWN,KC_AUDIO_VOL_UP,KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_F1,          KC_F2,          KC_F3,          KC_F10,         KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
};


const char chordal_hold_layout[MATRIX_ROWS][MATRIX_COLS] PROGMEM = LAYOUT_ergodox(
  'L', 'L', 'L', 'L', 'L', 'L', 'L', 
  'L', 'L', 'L', 'L', 'L', 'L', 'L', 
  'L', 'L', 'L', 'L', 'L', 'L', 
  'L', 'L', 'L', 'L', 'L', 'L', 'L', 
  'L', 'L', 'L', 'L', 'L',
  '*', '*',
  '*', '*', '*', '*',
  'R', 'R', 'R', 'R', 'R', 'R', 'R', 
  'R', 'R', 'R', 'R', 'R', 'R', 'R', 
  'R', 'R', 'R', 'R', 'R', 'R', 
  'R', 'R', 'R', 'R', 'R', 'R', 'R', 
  'R', 'R', 'R', 'R', 'R', 
  '*', '*',
  '*', '*', '*', '*'
);

const uint16_t PROGMEM combo0[] = { KC_BSPC, KC_SPACE, COMBO_END};
const uint16_t PROGMEM combo1[] = { KC_ENTER, LT(2, KC_ESCAPE), COMBO_END};

combo_t key_combos[COMBO_COUNT] = {
    COMBO(combo0, OSL(3)),
    COMBO(combo1, OSL(4)),
};





bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {

  }
  return true;
}

uint8_t layer_state_set_user(uint8_t state) {
    uint8_t layer = biton(state);
  ergodox_board_led_off();
  ergodox_right_led_1_off();
  ergodox_right_led_2_off();
  ergodox_right_led_3_off();
  switch (layer) {
    case 1:
      ergodox_right_led_1_on();
      break;
    case 2:
      ergodox_right_led_2_on();
      break;
    case 3:
      ergodox_right_led_3_on();
      break;
    case 4:
      ergodox_right_led_1_on();
      ergodox_right_led_2_on();
      break;
    case 5:
      ergodox_right_led_1_on();
      ergodox_right_led_3_on();
      break;
    case 6:
      ergodox_right_led_2_on();
      ergodox_right_led_3_on();
      break;
    case 7:
      ergodox_right_led_1_on();
      ergodox_right_led_2_on();
      ergodox_right_led_3_on();
      break;
    default:
      break;
  }
  // Notifies the host of the layer change
  uint8_t hi_layer = get_highest_layer(state);
  uint8_t response[RAW_EPSIZE];
  memset(response, 0x00, RAW_EPSIZE);
  response[PAYLOAD_BEGIN] = PAYLOAD_MARK;
  response[PAYLOAD_BEGIN + 1] = hi_layer;
  raw_hid_send(response, RAW_EPSIZE);
  return state;
};

