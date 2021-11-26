/**
 * Marlin 3D Printer Firmware
 * Copyright (c) 2020 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Based on Sprinter and grbl.
 * Copyright (c) 2011 Camiel Gubbels / Erik van der Zalm
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <https://www.gnu.org/licenses/>.
 *
 */
#pragma once

// edit: 02-17-2021 This is a custom with offset of +18
// R25 = 100 kOhm, beta25 = 4092 K, 4.7 kOhm pull-up, bed thermistor
const temp_entry_t temptable_100[] PROGMEM = {
{ OV(23),281},
{ OV(25),276},
{ OV(27),271},
{ OV(28),266},
{ OV(31),261},
{ OV(33),256},
{ OV(35),251},
{ OV(38),246},
{ OV(41),241},
{ OV(44),236},
{ OV(48),231},
{ OV(52),226},
{ OV(56),221},
{ OV(61),216},
{ OV(66),211},
{ OV(71),206},
{ OV(78),201},
{ OV(84),196},
{ OV(92),191},
{ OV(100),186},
{ OV(109),181},
{ OV(120),176},
{ OV(131),171},
{ OV(143),166},
{ OV(156),161},
{ OV(171),156},
{ OV(187),151},
{ OV(205),146},
{ OV(224),141},
{ OV(245),136},
{ OV(268),131},
{ OV(293),126},
{ OV(320),121},
{ OV(348),116},
{ OV(379),111},
{ OV(411),106},
{ OV(445),101},
{ OV(480),96},
{ OV(516),91},
{ OV(553),86},
{ OV(591),81},
{ OV(628),76},
{ OV(665),71},
{ OV(702),66},
{ OV(737),61},
{ OV(770),56},
{ OV(801),51},
{ OV(830),46},
{ OV(857),41},
{ OV(881),36},
{ OV(903),31},
{ OV(922),26},
{ OV(939),21},
{ OV(954),16},
{ OV(966),11},
{ OV(977),6},
{ OV(985),1},
{ OV(993),-4},
{ OV(999),-9},
{ OV(1004),-14},
{ OV(1008),-19},
{ OV(1016),-28},
{ OV(1016),-47},
{ OV(1020),-66},
};
