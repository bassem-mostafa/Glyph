// #############################################################################
// #### Copyright ##############################################################
// #############################################################################

/*
 * Copyright 2024 BaSSeM
 *
 *    Licensed under the Apache License, Version 2.0 (the "License");
 *    you may not use this file except in compliance with the License.
 *    You may obtain a copy of the License at
 *
 *        http://www.apache.org/licenses/LICENSE-2.0
 *
 *    Unless required by applicable law or agreed to in writing, software
 *    distributed under the License is distributed on an "AS IS" BASIS,
 *    WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *    See the License for the specific language governing permissions and
 *    limitations under the License.
 */

// #############################################################################
// #### Description ############################################################
// #############################################################################

// #############################################################################
// #### Control Include(s) #####################################################
// #############################################################################

// #############################################################################
// #### Control Macro(s) #######################################################
// #############################################################################

// #############################################################################
// #### File Guard #############################################################
// #############################################################################

// #############################################################################
// #### Include(s) #############################################################
// #############################################################################

#include "Glyph.h"

// #############################################################################
// #### Private Macro(s) #######################################################
// #############################################################################

// #############################################################################
// #### Private Type(s) ########################################################
// #############################################################################

// #############################################################################
// #### Private Method(s) Prototype ############################################
// #############################################################################

// #############################################################################
// #### Private Variable(s) ####################################################
// #############################################################################

// #############################################################################
// #### Private Method(s) ######################################################
// #############################################################################

// #############################################################################
// #### Public Method(s) #######################################################
// #############################################################################

// #############################################################################
// #### Public Variable(s) #####################################################
// #############################################################################

const Glyph_t Glyph_Icon_Bell = {
    .Width = 8,
    .Content = { 0x20, 0x3C, 0x22, 0x63, 0x22, 0x3C, 0x20, 0x00 }
};
const Glyph_t Glyph_Icon_Clock = {
    .Width = 8,
    .Content = { 0x1C, 0x22, 0x41, 0x4F, 0x49, 0x2A, 0x1C, 0x00 }
};
const Glyph_t Glyph_Icon_Heart = {
    .Width = 8,
    .Content = { 0x0E, 0x11, 0x21, 0x42, 0x21, 0x11, 0x0E, 0x00 }
};
const Glyph_t Glyph_Icon_Melody_Single = {
    .Width = 6,
    .Content = { 0x40, 0xE0, 0xE0, 0x7F, 0x02, 0x00 }
};
const Glyph_t Glyph_Icon_Melody_Double = {
    .Width = 6,
    .Content = { 0xC0, 0xF8, 0x04, 0x32, 0x3F, 0x00 }
};
const Glyph_t Glyph_Icon_Stop = {
    .Width = 6,
    .Content = { 0x38, 0x7C, 0x7C, 0x7C, 0x38, 0x00 }
};
const Glyph_t Glyph_Icon_Pause = {
    .Width = 6,
    .Content = { 0x7F, 0x7F, 0x00, 0x7F, 0x7F, 0x00 }
};
const Glyph_t Glyph_Icon_Previous = {
    .Width = 8,
    .Content = { 0x08, 0x1C, 0x3E, 0x7F, 0x00, 0x7F, 0x7F, 0x00 }
};
const Glyph_t Glyph_Icon_Play = {
    .Width = 5,
    .Content = { 0x7F, 0x3E, 0x1C, 0x08, 0x00 }
};
const Glyph_t Glyph_Icon_Next = {
    .Width = 8,
    .Content = { 0x7F, 0x7F, 0x00, 0x7F, 0x3E, 0x1C, 0x08, 0x00 }
};

const Glyph_t Glyph_Icon_Bluetooth = {
    .Width = 6,
    .Content = { 0x22, 0x14, 0x7F, 0x2A, 0x14, 0x00 }
};
const Glyph_t Glyph_Icon_Lock_Close = {
    .Width = 6,
    .Content = { 0x7C, 0x72, 0x72, 0x72, 0x7C, 0x00 }
};
const Glyph_t Glyph_Icon_Lock_Open = {
    .Width = 6,
    .Content = { 0x7E, 0x71, 0x71, 0x71, 0x70, 0x00 }
};
const Glyph_t Glyph_Icon_Calendar = {
    .Width = 6,
    .Content = { 0x7C, 0x56, 0x7C, 0x56, 0x7C, 0x00 }
};
const Glyph_t Glyph_Icon_Degree = {
    .Width = 5,
    .Content = { 0x06, 0x09, 0x09, 0x06, 0x00 }
};
const Glyph_t Glyph_Icon_Thermometer = {
    .Width = 6,
    .Content = { 0x60, 0xFE, 0xF9, 0xFE, 0x60, 0x00 }
};
const Glyph_t Glyph_Icon_Humidity = {
    .Width = 6,
    .Content = { 0x38, 0x44, 0x42, 0x44, 0x38, 0x00 }
};

const Glyph_t Glyph_Icon_Loading_Bar_Empty_Left = {
    .Width = 6,
    .Content = { 0x18, 0x24, 0x42, 0x42, 0x42, 0x00 }
};
const Glyph_t Glyph_Icon_Loading_Bar_Empty_Middle = {
    .Width = 6,
    .Content = { 0x42, 0x42, 0x42, 0x42, 0x42, 0x00 }
};
const Glyph_t Glyph_Icon_Loading_Bar_Empty_Right = {
    .Width = 6,
    .Content = { 0x42, 0x42, 0x42, 0x24, 0x18, 0x00 }
};
const Glyph_t Glyph_Icon_Loading_Bar_Full_Left = {
    .Width = 6,
    .Content = { 0x18, 0x24, 0x42, 0x5A, 0x5A, 0x00 }
};
const Glyph_t Glyph_Icon_Loading_Bar_Full_Middle = {
    .Width = 6,
    .Content = { 0x5A, 0x5A, 0x42, 0x5A, 0x5A, 0x00 }
};
const Glyph_t Glyph_Icon_Loading_Bar_Full_Right = {
    .Width = 6,
    .Content = { 0x5A, 0x5A, 0x42, 0x24, 0x18, 0x00 }
};

const Glyph_t Glyph_Icon_Battery_Empty = {
    .Width = 6,
    .Content = { 0xFE, 0x81, 0x81, 0x81, 0xFE, 0x00 }
};
const Glyph_t Glyph_Icon_Battery_Low = {
    .Width = 6,
    .Content = { 0xFE, 0xC1, 0xC1, 0xC1, 0xFE, 0x00 }
};
const Glyph_t Glyph_Icon_Battery_Medium = {
    .Width = 6,
    .Content = { 0xFE, 0xE1, 0xE1, 0xE1, 0xFE, 0x00 }
};
const Glyph_t Glyph_Icon_Battery_Half = {
    .Width = 6,
    .Content = { 0xFE, 0xF1, 0xF1, 0xF1, 0xFE, 0x00 }
};
const Glyph_t Glyph_Icon_Battery_Fair = {
    .Width = 6,
    .Content = { 0xFE, 0xF9, 0xF9, 0xF9, 0xFE, 0x00 }
};
const Glyph_t Glyph_Icon_Battery_Good = {
    .Width = 6,
    .Content = { 0xFE, 0xFD, 0xFD, 0xFD, 0xFE, 0x00 }
};
const Glyph_t Glyph_Icon_Battery_Full = {
    .Width = 6,
    .Content = { 0xFE, 0xFF, 0xFF, 0xFF, 0xFE, 0x00 }
};
const Glyph_t Glyph_Icon_Signal_Empty = {
    .Width = 2,
    .Content = { 0x00, 0x00 }
};
const Glyph_t Glyph_Icon_Signal_Very_Poor = {
    .Width = 2,
    .Content = { 0x80, 0x00 }
};
const Glyph_t Glyph_Icon_Signal_Poor = {
    .Width = 4,
    .Content = { 0x80, 0x00, 0xC0, 0x00 }
};
const Glyph_t Glyph_Icon_Signal_Fair = {
    .Width = 6,
    .Content = { 0x80, 0x00, 0xC0, 0x00, 0xE0, 0x00 }
};
const Glyph_t Glyph_Icon_Signal_Moderate = {
    .Width = 8,
    .Content = { 0x80, 0x00, 0xC0, 0x00, 0xE0, 0x00, 0xF0, 0x00 }
};
const Glyph_t Glyph_Icon_Signal_Good = {
    .Width = 10,
    .Content = { 0x80, 0x00, 0xC0, 0x00, 0xE0, 0x00, 0xF0, 0x00, 0xF8, 0x00 }
};
const Glyph_t Glyph_Icon_Signal_Very_Good = {
    .Width = 12,
    .Content = { 0x80, 0x00, 0xC0, 0x00, 0xE0, 0x00, 0xF0, 0x00, 0xF8, 0x00, 0xFC, 0x00 }
};
const Glyph_t Glyph_Icon_Signal_Excellent = {
    .Width = 14,
    .Content = { 0x80, 0x00, 0xC0, 0x00, 0xE0, 0x00, 0xF0, 0x00, 0xF8, 0x00, 0xFC, 0x00, 0xFE, 0x00 }
};
const Glyph_t Glyph_Icon_Signal_Perfect = {
    .Width = 16,
    .Content = { 0x80, 0x00, 0xC0, 0x00, 0xE0, 0x00, 0xF0, 0x00, 0xF8, 0x00, 0xFC, 0x00, 0xFE, 0x00, 0xFF, 0x00 }
};

const Glyph_t Glyph_Icon_WIFI_Empty;
const Glyph_t Glyph_Icon_WIFI_Full = {
    .Width = 10,
    .Content = { 0x04, 0x12, 0x49, 0x25, 0xA5, 0x25, 0x49, 0x12, 0x04, 0x00 }
};
const Glyph_t Glyph_Icon_Alert_Clear = {
    .Width = 16,
    .Content = { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 }
};
const Glyph_t Glyph_Icon_Alert_Normal = {
    .Width = 16,
    .Content = { 0x80, 0xC0, 0xA0, 0x90, 0x88, 0x84, 0x82, 0xDD, 0x82, 0x84, 0x88, 0x90, 0xA0, 0xC0, 0x80, 0x00 }
};
const Glyph_t Glyph_Icon_Alert_Inverse;

// #############################################################################
// #### File Guard #############################################################
// #############################################################################

// #############################################################################
// #### END OF FILE ############################################################
// #############################################################################
