#include QMK_KEYBOARD_H


/* THIS FILE WAS GENERATED!
 *
 * This file was generated by qmk json2c. You may or may not want to
 * edit it directly.
 */

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[0] = LAYOUT(QK_GESC, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_BSPC, KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_EQL, KC_MINS, KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT, KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_NO, KC_NO, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_RSFT, KC_LCTL, KC_LALT, KC_LGUI, MO(1), KC_SPC, KC_ENT, MO(4), KC_LGUI, KC_LALT, KC_RCTL),
	[1] = LAYOUT(KC_GRV, KC_1, KC_2, KC_3, KC_LBRC, KC_RBRC, KC_6, KC_LCBR, KC_RCBR, KC_LPRN, KC_RPRN, KC_BSPC, KC_TAB, KC_Q, KC_W, RCS(KC_L), KC_R, KC_T, KC_Y, LCTL(KC_LEFT), KC_UP, LCTL(KC_RGHT), KC_PGUP, KC_DEL, KC_MINS, KC_LSFT, RCS(KC_LBRC), RCS(KC_ENT), RCS(KC_RBRC), KC_G, KC_H, KC_LEFT, KC_DOWN, KC_RGHT, KC_PGDN, KC_QUOT, KC_LSFT, LCTL(KC_Z), LCTL(KC_X), LCTL(KC_C), LCTL(KC_V), KC_B, KC_NO, KC_NO, KC_N, KC_HOME, KC_COMM, KC_END, LCTL(KC_PGUP), LCTL(KC_PGDN), KC_LCTL, KC_LALT, KC_LGUI, KC_TRNS, KC_SPC, KC_ENT, MO(4), KC_LGUI, KC_LALT, KC_RCTL),
	[2] = LAYOUT(QK_GESC, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_BSPC, KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_EQL, KC_MINS, KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT, KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_NO, KC_NO, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_RSFT, KC_LGUI, KC_LALT, KC_RCTL, MO(3), KC_SPC, KC_ENT, MO(4), KC_RCTL, KC_LALT, KC_LGUI),
	[3] = LAYOUT(KC_GRV, KC_1, KC_2, KC_3, KC_LBRC, KC_RBRC, KC_6, KC_LCBR, KC_RCBR, KC_LPRN, KC_RPRN, KC_BSPC, KC_TAB, KC_Q, KC_W, SGUI(KC_L), KC_R, KC_T, KC_Y, LALT(KC_LEFT), KC_UP, LALT(KC_RGHT), KC_PGUP, KC_DEL, KC_MINS, KC_LSFT, SGUI(KC_LEFT), SGUI(KC_ENT), SGUI(KC_RGHT), KC_G, KC_H, KC_LEFT, KC_DOWN, KC_RGHT, KC_PGDN, KC_QUOT, KC_LSFT, LGUI(KC_Z), LGUI(KC_X), LGUI(KC_C), LGUI(KC_V), KC_B, KC_NO, KC_NO, KC_N, LGUI(KC_LEFT), KC_COMM, LGUI(KC_RGHT), LCTL(KC_PGUP), LCTL(KC_PGDN), KC_LGUI, KC_LALT, KC_LCTL, KC_TRNS, KC_SPC, KC_ENT, MO(4), KC_LCTL, KC_LALT, KC_LGUI),
	[4] = LAYOUT(KC_GRV, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_DEL, KC_NO, KC_NO, KC_BRID, KC_NO, KC_BRIU, KC_NO, KC_F11, KC_F12, KC_F13, KC_F14, KC_F15, KC_BSLS, KC_CAPS, KC_WH_U, KC_VOLD, KC_MUTE, KC_VOLU, KC_NO, KC_NO, KC_NO, KC_NO, TO(0), KC_NO, KC_NO, KC_WH_L, KC_WH_D, KC_WH_R, KC_CALC, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, TO(2), KC_NO, KC_NO, KC_PIPE, KC_RSFT, KC_LCTL, KC_LALT, KC_LGUI, KC_NO, KC_MPLY, KC_MSTP, KC_TRNS, KC_LGUI, KC_LALT, KC_RCTL)
};

/* encoder map is not working
#if defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][2] = {
    [0] = { ENCODER_CCW_CW(MS_WHLU, MS_WHLD),  ENCODER_CCW_CW(KC_VOLD, KC_VOLU)  },
    [1] = { ENCODER_CCW_CW(MS_WHLU, MS_WHLD),  ENCODER_CCW_CW(KC_VOLD, KC_VOLU)  },
    [2] = { ENCODER_CCW_CW(MS_WHLU, MS_WHLD),  ENCODER_CCW_CW(KC_VOLD, KC_VOLU)  },
    [3] = { ENCODER_CCW_CW(MS_WHLU, MS_WHLD),  ENCODER_CCW_CW(KC_VOLD, KC_VOLU)  },
    [4] = { ENCODER_CCW_CW(MS_WHLU, MS_WHLD),  ENCODER_CCW_CW(KC_VOLD, KC_VOLU)  }
    //                Encoder 1                            Encoder 2
};
#endif
*/

#ifdef ENCODER_ENABLE
bool encoder_update_user(uint8_t index, bool clockwise) {
      switch (get_highest_layer(layer_state)) {
        case 0: // default
			if (index == 0) { // Left Encoder
				if (clockwise) {
					tap_code(KC_DOWN); // Page Down
				} else {
					tap_code(KC_UP); // Page Up
				}
			} else if (index == 1) { // Right encoder
				if (clockwise) {
					tap_code(KC_VOLU); // Volume up
				} else {
					tap_code(KC_VOLD); // Volume down
				}
			}
            break;
        case 1: // left function
			if (index == 0) {
				if (clockwise) {
					tap_code(KC_MS_WH_DOWN); // Brightness Up
				} else {
					tap_code(KC_MS_WH_UP); // Brightness Down
				}
			} else if (index == 1) { // Right encoder
				if (clockwise) {
					tap_code(KC_PGDN); // Page Down
				} else {
					tap_code(KC_PGUP); // Page Up
				}
			}
            break;
	}
	// Add more layers as needed
    return false;
}
#endif
