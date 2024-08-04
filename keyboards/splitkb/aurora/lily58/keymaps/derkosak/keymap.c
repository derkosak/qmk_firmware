#include QMK_KEYBOARD_H

#include "keymap_german_mac_iso.h"

#ifdef SSD1306OLED
#    include "ssd1306.h"
#endif

enum layer_number {
    _QWERTY_MAC = 0,
    _LOWER_MAC  = 1,
    _RAISE_MAC  = 2,
    _QWERTY_WIN = 3,
    _LOWER_WIN  = 4,
    _RAISE_WIN  = 5,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    /* QWERTY
     * ,-----------------------------------------.                    ,-----------------------------------------.
     * | ESC  |   1  |   2  |   3  |   4  |   5  |                    |   6  |   7  |   8  |   9  |   0  |  ß   |
     * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
     * | Tab  |   Q  |   W  |   E  |   R  |   T  |                    |   Y  |   U  |   I  |   O  |   P  |  ü   |
     * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
     * |LCTRL |   A  |   S  |   D  |   F  |   G  |-------.    ,-------|   H  |   J  |   K  |   L  |   ö  |  ä   |
     * |------+------+------+------+------+------|   <   |    |    +  |------+------+------+------+------+------|
     * |LShift|   Z  |   X  |   C  |   V  |   B  |-------|    |-------|   N  |   M  |   ,  |   .  |   -  |RShift|
     * `-----------------------------------------/       /     \      \-----------------------------------------'
     *                   | LAlt | LGUI |LOWER | /Space  /       \Enter \  |BackSP|RAISE | RGUI |
     *                   |      |      |      |/       /         \      \ |      |      |      |
     *                   `----------------------------'           '------''--------------------'
     */

    [0] = LAYOUT(KC_ESC, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, DE_SS, KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, DE_Z, KC_U, KC_I, KC_O, KC_P, DE_UDIA, KC_LCTL, KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, DE_ODIA, DE_ADIA, KC_LSFT, DE_Y, KC_X, KC_C, KC_V, KC_B, DE_LABK, DE_PLUS, KC_N, KC_M, KC_COMM, KC_DOT, DE_MINS, KC_RSFT, KC_LALT, KC_LGUI, MO(_LOWER_MAC), KC_SPC, KC_ENT, KC_BSPC, MO(_RAISE_MAC), KC_RALT),
    [1] = LAYOUT(KC_TRNS, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_TRNS, DE_PIPE, DE_QUOT, DE_ACUT, DE_EQL, DE_TILD, DE_SLSH, DE_LPRN, KC_UP, DE_RPRN, DE_HASH, KC_F12, KC_TRNS, DE_EXLM, DE_DQUO, DE_QUES, DE_PERC, DE_ASTR, DE_RBRC, KC_LEFT, KC_DOWN, KC_RGHT, DE_AT, KC_NO, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_GRV, DE_LBRC, DE_LCBR, DE_RCBR, RSA(KC_7), KC_NO, KC_NO, KC_NO, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_DEL, KC_TRNS, KC_TRNS, KC_TRNS),
    [2] = LAYOUT(TG(3), KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_GRV, KC_1, LCA(KC_U), LCA(KC_D), LCA(KC_I), KC_5, KC_KB_MUTE, KC_MPLY, KC_PGUP, KC_9, KC_0, KC_TRNS, KC_F1, KC_F2, LCA(KC_LEFT), LCA(KC_E), LCA(KC_RGHT), KC_F6, KC_KB_VOLUME_UP, KC_MFFD, KC_PGDN, KC_UP, KC_RGHT, KC_NO, KC_F7, KC_F8, LCA(KC_J), LCA(KC_G), LCA(KC_K), KC_F12, DE_LCBR, KC_TRNS, KC_KB_VOLUME_DOWN, KC_MPRV, KC_EQL, KC_LBRC, KC_RBRC, KC_BSLS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),
    [3] = LAYOUT(KC_ESC, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, DE_SS, KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, DE_Z, KC_U, KC_I, KC_O, KC_P, DE_UDIA, KC_LCTL, KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, DE_ODIA, DE_ADIA, KC_LSFT, DE_Y, KC_X, KC_C, KC_V, KC_B, DE_LABK, DE_PLUS, KC_N, KC_M, KC_COMM, KC_DOT, DE_MINS, KC_RSFT, KC_LALT, KC_LGUI, MO(_LOWER_MAC), KC_SPC, KC_ENT, KC_BSPC, MO(_RAISE_MAC), KC_RALT),
    [4] = LAYOUT(KC_TRNS, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_TRNS, DE_PIPE, DE_QUOT, DE_ACUT, DE_EQL, DE_TILD, DE_SLSH, DE_LPRN, KC_UP, DE_RPRN, DE_HASH, KC_F12, KC_TRNS, DE_EXLM, DE_DQUO, DE_QUES, DE_PERC, DE_ASTR, DE_RBRC, KC_LEFT, KC_DOWN, KC_RGHT, DE_AT, KC_NO, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_GRV, DE_LBRC, DE_LCBR, DE_RCBR, RSA(KC_7), KC_NO, KC_NO, KC_NO, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_DEL, KC_TRNS, KC_TRNS, KC_TRNS),
    [5] = LAYOUT(TG(3), KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_GRV, KC_1, LCA(KC_U), LCA(KC_D), LCA(KC_I), KC_5, KC_KB_MUTE, KC_MPLY, KC_PGUP, KC_9, KC_0, KC_TRNS, KC_F1, KC_F2, LCA(KC_LEFT), LCA(KC_E), LCA(KC_RGHT), KC_F6, KC_KB_VOLUME_UP, KC_MFFD, KC_PGDN, KC_UP, KC_RGHT, KC_NO, KC_F7, KC_F8, LCA(KC_J), LCA(KC_G), LCA(KC_K), KC_F12, DE_LCBR, KC_TRNS, KC_KB_VOLUME_DOWN, KC_MPRV, KC_EQL, KC_LBRC, KC_RBRC, KC_BSLS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),

#if defined(ENCODER_ENABLE) && defined(ENCODER_MAP_ENABLE)
    const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {

    };
#endif // defined(ENCODER_ENABLE) && defined(ENCODER_MAP_ENABLE)

#ifdef OLED_ENABLE
bool oled_task_user(void) {
    // Host Keyboard Layer Status
    oled_write_P(PSTR("Layer: "), false);

    switch (get_highest_layer(layer_state)) {
        case _QWERTY_MAC:
            oled_write_P(PSTR("Default\n"), false);
            break;
        case _LOWER_MAC:
            oled_write_P(PSTR("_LOWER_MAC\n"), false);
            break;
        case _RAISE_MAC:
            oled_write_P(PSTR("_RAISE_MAC\n"), false);
            break;
        default:
            // Or use the write_ln shortcut over adding '\n' to the end of your string
            oled_write_ln_P(PSTR("Undefined"), false);
    }

    // Host Keyboard LED Status
    led_t led_state = host_keyboard_led_state();
    oled_write_P(led_state.num_lock ? PSTR("NUM ") : PSTR("    "), false);
    oled_write_P(led_state.caps_lock ? PSTR("CAP ") : PSTR("    "), false);
    oled_write_P(led_state.scroll_lock ? PSTR("SCR ") : PSTR("    "), false);

    return false;
}
#endif
