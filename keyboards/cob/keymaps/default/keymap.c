// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
     /*
      * Row/columt layout
      *      0   1   2   3           0   1   2   3
      *    ┌───┬───┬───┬───┐       ┌───┬───┬───┬───┐
      * 0  │ Q │ W │ E │ R │     4 │ P │ O │ I │ U │
      *    ├───┼───┼───┼───┤       ├───┼───┼───┼───┤
      * 1  │ A │ S │ D │ T │     5 │   │ L │ K │ Y │
      *    ├───┼───┼───┼───┤       ├───┼───┼───┼───┤
      * 2  │ Z │ X │ F │ G │     6 │   │ M │ J │ H │
      *    ├───┼───┼───┼───┤       ├───┼───┼───┼───┤
      * 3  │ C │ V │MO1│Spc│     7 │ N │ B │MO2│ENT│
      *    └───┴───┴───┴───┘       └───┴───┴───┴───┘
      *
      * Physical layout
      *                ┌───┐                         ┌───┐
      *            ┌───┤ R ├───┐                 ┌───┤ U ├───┐
      *        ┌───┤ E ├───┤ T ├───┐         ┌───┤ Y ├───┤ I ├───┐
      *    ┌───┤ W ├───┤ D ├───┤ G |         | H ├───┤ K ├───┤ O ├───┐
      *    │ Q ├───┤ S ├───┤ F ├───┤         ├───┤ J ├───┤ L ├───┤ P |
      *    └───┤ A ├───┤ X ├───┤ V |         | B ├───┤ M ├───┤   ├───┘
      *        └───┤ Z ├───┤ C ├───┘         └───┤ N ├───┤   ├───┘
      *            └───┘   └───┘                 └───┘   └───┘
      *                     ┌───┐               ┌───┐
      *                     |MO1├───┐       ┌───┤MO2|
      *                     └───┤Spc|       |ENT├───┘
      *                         └───┘       └───┘
      */
    [0] = LAYOUT_cob(
        KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,             KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,
        KC_A,    KC_S,    KC_D,    KC_F,    KC_G,             KC_H,    KC_J,    KC_K,    KC_L,
                 KC_Z,    KC_X,    KC_C,    KC_V,             KC_B,    KC_N,    KC_M,
                                   MO(1),   KC_SPC,           KC_ENT,  MO(2)
    )
};
