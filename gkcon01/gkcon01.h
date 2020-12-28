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

#define LAYOUT( \
    K7A, K7B, K7C, K7D, K7E, K7F, K7G, K7H, K7I, K7J, K7K, K7L, K7M, K7N, K7O, K7P, K7Q, K7R, K7S, K7T, \
    K6A, K6B, K6C, K6D, K6E, K6F, K6G, K6H, K6I, K6J, K6K, K6L, K6M, K6N, K6O, K6P, K6Q, K6R, K6S, K6T, \
    K5A, K5B, K5C, K5D, K5E, K5F, K5G, K5H, K5I, K5J, K5K, K5L, K5M, K5N, K5O, K5P, K5Q, K5R, K5S, K5T, \
    K4A, K4B, K4C, K4D, K4E, K4F, K4G, K4H, K4I, K4J, K4K, K4L, K4M, K4N, K4O, K4P, K4Q, K4R, K4S, K4T, \
    K3A, K3B, K3C, K3D, K3E, K3F, K3G, K3H, K3I, K3J, K3K, K3L, K3M, K3N, K3O, K3P, K3Q, K3R, K3S, K3T, \
    K2A, K2B, K2C, K2D, K2E, K2F, K2G, K2H, K2I, K2J, K2K, K2L, K2M, K2N, K2O, K2P, K2Q, K2R, K2S, K2T, \
    K1A, K1B, K1C, K1D, K1E, K1F, K1G, K1H, K1I, K1J, K1K, K1L, K1M, K1N, K1O, K1P, K1Q, K1R, K1S, K1T, \
    K0A, K0B, K0C, K0D, K0E, K0F, K0G, K0H, K0I, K0J, K0K, K0L, K0M, K0N, K0O, K0P, K0Q, K0R, K0S, K0T \
) \
{ \
/* 00 */ {    K7A, K7B, K7C, K7D, K7E, K7F, K7G, K7H, K7I, K7J, K7K, K7L, K7M, K7N, K7O, K7P, K7Q, K7R, K7S, K7T }, \
/* 01 */ {    K6A, K6B, K6C, K6D, K6E, K6F, K6G, K6H, K6I, K6J, K6K, K6L, K6M, K6N, K6O, K6P, K6Q, K6R, K6S, K6T }, \
/* 02 */ {    K5A, K5B, K5C, K5D, K5E, K5F, K5G, K5H, K5I, K5J, K5K, K5L, K5M, K5N, K5O, K5P, K5Q, K5R, K5S, K5T }, \
/* 03 */ {    K4A, K4B, K4C, K4D, K4E, K4F, K4G, K4H, K4I, K4J, K4K, K4L, K4M, K4N, K4O, K4P, K4Q, K4R, K4S, K4T }, \
/* 04 */ {    K3A, K3B, K3C, K3D, K3E, K3F, K3G, K3H, K3I, K3J, K3K, K3L, K3M, K3N, K3O, K3P, K3Q, K3R, K3S, K3T }, \
/* 05 */ {    K2A, K2B, K2C, K2D, K2E, K2F, K2G, K2H, K2I, K2J, K2K, K2L, K2M, K2N, K2O, K2P, K2Q, K2R, K2S, K2T }, \
/* 06 */ {    K1A, K1B, K1C, K1D, K1E, K1F, K1G, K1H, K1I, K1J, K1K, K1L, K1M, K1N, K1O, K1P, K1Q, K1R, K1S, K1T }, \
/* 07 */ {    K0A, K0B, K0C, K0D, K0E, K0F, K0G, K0H, K0I, K0J, K0K, K0L, K0M, K0N, K0O, K0P, K0Q, K0R, K0S, K0T }, \
}
/*         0      1      2      3      4      5    6      7    8      9      A      B      C    D    E      F       */
