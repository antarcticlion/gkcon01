/* Copyright 2020 Antarcticlion
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

#include "gkcon01.h"

void keyboard_pre_init_kb(void) {
  //NUM
  setPinOutput(E9);
  writePin(E9, 0);

  //CAPS
  setPinOutput(E8);
  writePin(E8, 0);

  //SCROLL
  setPinOutput(E10);
  writePin(E10, 0);

  //COMPOSE
  setPinOutput(E15);
  writePin(E15, 0);

  //KANA
  setPinOutput(E11);
  writePin(E11, 0);
}

bool led_update_kb(led_t led_state) {
  if(led_update_user(led_state)){
    writePin(E9, led_state.num_lock);
    writePin(E8, led_state.caps_lock);
    writePin(E10, led_state.scroll_lock);
    writePin(E15, led_state.compose);
    writePin(E11, led_state.kana);
  }

  return 0;
}

