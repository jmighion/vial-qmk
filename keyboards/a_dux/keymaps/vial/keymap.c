#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT_split_3x5_2(
        KC_Q,         KC_W,         KC_F,         KC_P,          KC_G,            KC_J,   KC_L,         KC_U,         KC_Y,         KC_QUOT,
        LGUI_T(KC_A), LALT_T(KC_R), LCTL_T(KC_S), LSFT_T(KC_T),  KC_D,            KC_H,   RSFT_T(KC_N), RCTL_T(KC_E), RALT_T(KC_I), RGUI_T(KC_O),
        KC_Z,         KC_X,         KC_C,         KC_V,          KC_B,            KC_K,   KC_M,         KC_COMM,      KC_DOT,       KC_SLSH,
                                                  LT(2,KC_BSPC), LT(1,KC_TAB),    KC_SPC, KC_ENT
    ),
    [1] = LAYOUT_split_3x5_2(
        KC_GRV,  KC_PGDN,       KC_UP,        KC_PGUP,       KC_HOME,    KC_BSLS, KC_7,   KC_8, KC_9, KC_DOT,
        KC_LALT, KC_LEFT,       KC_DOWN,      KC_RGHT,       KC_END,     KC_SLSH, KC_4,   KC_5, KC_6, KC_0,
        KC_CAPS, LGUI(KC_LBRC), LCTL(KC_TAB), LGUI(KC_RBRC), KC_ESC,     KC_EQL,  KC_1,   KC_2, KC_3, KC_MINS,
                                              QK_GESC,       _______,    KC_BSPC, KC_SCLN
    ),
    [2] = LAYOUT_split_3x5_2(
        KC_VOLD,   KC_VOLU,    KC_BRID,       KC_BRIU, LCAG(KC_SPC),    _______, KC_F9, KC_F10, KC_F11, KC_F12,
        KC_DELETE, LSFT(KC_9), LSFT(KC_LBRC), KC_LBRC, _______,         _______, KC_F5, KC_F6,  KC_F7,  KC_F8,
        _______,   LSFT(KC_0), LSFT(KC_RBRC), KC_RBRC, QK_GESC,         _______, KC_F1, KC_F2,  KC_F3,  KC_F4,
                                              _______, _______,         KC_DEL,  MO(3)
    ),
    [3] = LAYOUT_split_3x5_2(
        QK_BOOT, _______, _______, _______, _______,    KC_WH_U, KC_BTN1, KC_MS_U, KC_BTN2, KC_BTN5,
        _______, _______, _______, _______, _______,    KC_WH_D, KC_MS_L, KC_MS_D, KC_MS_R, _______,
        _______, _______, _______, _______, _______,    _______, KC_WH_L, KC_BTN3, KC_WH_R, _______,
                                   _______, _______,    _______, _______
    )
};
