/* Copyright 2020 Purdea Andrei
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once

#include "quantum.h"

/* This is a shortcut to help you visually see your layout.
 *
 * The first section contains all of the arguments representing the physical
 * layout of the board and position of the keys.
 *
 * The second converts the arguments into a two-dimensional array which
 * represents the switch matrix.
 */

#define LAYOUT_all( \
    k_0_7, k_1_7, k_2_7, k_3_7, k_4_7, k_5_7, k_6_7, k_7_7, k_8_7, k_9_7, k_a_7, k_b_7, k_c_7, k_d_7, k_e_7, k_f_7,  \
    k_0_5, k_0_6, k_1_6, k_2_5, k_2_6, k_3_6, k_4_5, k_4_6, k_5_6, k_6_5, k_6_6, k_7_6, k_8_6, k_8_5, k_9_6, k_a_6, k_b_5, k_b_6, \
    k_0_4, k_1_5, k_1_4, k_2_4, k_3_4, k_3_5, k_4_4, k_5_4, k_5_5, k_6_4, k_7_4, k_7_5, k_8_4, k_9_5, k_a_5, k_a_4, k_b_4, \
    k_0_3, k_1_3, k_2_2, k_2_3, k_3_3, k_4_2, k_4_3, k_5_3, k_6_2, k_6_3, k_7_3, k_8_2, k_8_3, k_9_3, \
    k_0_1, k_1_2, k_1_1, k_2_1, k_3_2, k_3_1, k_4_1, k_5_2, k_5_1, k_6_1, k_7_2, k_7_1, k_8_1, k_9_1, k_a_2, \
    k_0_0, k_1_0, k_2_0, k_3_0, k_5_0, k_6_0, k_7_0, k_8_0, k_9_0, k_a_0, k_b_0, k_b_1  \
) \
{ \
    { k_0_7, k_1_7, k_2_7, k_3_7, k_4_7, k_5_7, k_6_7, k_7_7, k_8_7, k_9_7, k_a_7, k_b_7, k_c_7, k_d_7, k_e_7, k_f_7}, \
    { k_0_6, k_1_6, k_2_6, k_3_6, k_4_6, k_5_6, k_6_6, k_7_6, k_8_6, k_9_6, k_a_6, k_b_6, KC_NO, KC_NO, KC_NO, KC_NO}, \
    { k_0_5, k_1_5, k_2_5, k_3_5, k_4_5, k_5_5, k_6_5, k_7_5, k_8_5, k_9_5, k_a_5, k_b_5, KC_NO, KC_NO, KC_NO, KC_NO}, \
    { k_0_4, k_1_4, k_2_4, k_3_4, k_4_4, k_5_4, k_6_4, k_7_4, k_8_4, KC_NO, k_a_4, k_b_4, KC_NO, KC_NO, KC_NO, KC_NO}, \
    { k_0_3, k_1_3, k_2_3, k_3_3, k_4_3, k_5_3, k_6_3, k_7_3, k_8_3, k_9_3, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO}, \
    { KC_NO, k_1_2, k_2_2, k_3_2, k_4_2, k_5_2, k_6_2, k_7_2, k_8_2, KC_NO, k_a_2, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO}, \
    { k_0_1, k_1_1, k_2_1, k_3_1, k_4_1, k_5_1, k_6_1, k_7_1, k_8_1, k_9_1, KC_NO, k_b_1, KC_NO, KC_NO, KC_NO, KC_NO}, \
    { k_0_0, k_1_0, k_2_0, k_3_0, KC_NO, k_5_0, k_6_0, k_7_0, k_8_0, k_9_0, k_a_0, k_b_0, KC_NO, KC_NO, KC_NO, KC_NO}  \
}
