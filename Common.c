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

const Glyph_t Glyph_Space = {
    .Width = 2,
    .Content = { 0x00, 0x00 }
};

const Glyph_t Glyph_Sign_Exclamation = {
    .Width = 2,
    .Content = { 0x5E, 0x00 }
};
const Glyph_t Glyph_Sign_Double_Quotes = {
    .Width = 4,
    .Content = { 0x03, 0x00, 0x03, 0x00 }
};
const Glyph_t Glyph_Sign_Number = {
    .Width = 6,
    .Content = { 0x14, 0x3E, 0x14, 0x3E, 0x14, 0x00 }
};
const Glyph_t Glyph_Sign_Dollar = {
    .Width = 6,
    .Content = { 0x24, 0x2A, 0x7F, 0x2A, 0x12, 0x00 }
};
const Glyph_t Glyph_Sign_Percent = {
    .Width = 5,
    .Content = { 0x12, 0x08, 0x04, 0x12, 0x00 }
};
const Glyph_t Glyph_Sign_Ampersand = {
    .Width = 6,
    .Content = { 0x1A, 0x25, 0x2D, 0x12, 0x28, 0x00 }
};
const Glyph_t Glyph_Sign_Single_Quote = {
    .Width = 2,
    .Content = { 0x03, 0x00 }
};
const Glyph_t Glyph_Sign_Bracket_Left = {
    .Width = 3,
    .Content = { 0x0E, 0x11, 0x00 }
};
const Glyph_t Glyph_Sign_Bracket_Right = {
    .Width = 3,
    .Content = { 0x11, 0x0E, 0x00 }
};
const Glyph_t Glyph_Sign_Asterisk = {
    .Width = 6,
    .Content = { 0x14, 0x08, 0x3E, 0x08, 0x14, 0x00 }
};
const Glyph_t Glyph_Sign_Plus = {
    .Width = 4,
    .Content = { 0x04, 0x0E, 0x04, 0x00 }
};
const Glyph_t Glyph_Sign_Comma_LTR = {
    .Width = 3,
    .Content = { 0x20, 0x10, 0x00 }
};
const Glyph_t Glyph_Sign_Comma_RTL = {
    .Width = 3,
    .Content = { 0x20, 0x10, 0x00 }
};
const Glyph_t Glyph_Sign_Minus = {
    .Width = 4,
    .Content = { 0x04, 0x04, 0x04, 0x00 }
};
const Glyph_t Glyph_Sign_Period = {
    .Width = 2,
    .Content = { 0x10, 0x00 }
};
const Glyph_t Glyph_Sign_Slash = {
    .Width = 5,
    .Content = { 0x10, 0x08, 0x04, 0x02, 0x00 }
};
const Glyph_t Glyph_Sign_Colon = {
    .Width = 2,
    .Content = { 0x14, 0x00 }
};
const Glyph_t Glyph_Sign_Semicolon_LTR = {
    .Width = 3,
    .Content = { 0x20, 0x14, 0x00 }
};
const Glyph_t Glyph_Sign_Semicolon_RTL = {
    .Width = 3,
    .Content = { 0x20, 0x14, 0x00 }
};
const Glyph_t Glyph_Sign_Angle_Bracket_Left = {
    .Width = 4,
    .Content = { 0x04, 0x0A, 0x11, 0x00 }
};
const Glyph_t Glyph_Sign_Angle_Bracket_Right = {
    .Width = 4,
    .Content = { 0x11, 0x0A, 0x04, 0x00 }
};
const Glyph_t Glyph_Sign_Equal = {
    .Width = 4,
    .Content = { 0x14, 0x14, 0x14, 0x00 }
};
const Glyph_t Glyph_Sign_Question_LTR = {
    .Width = 5,
    .Content = { 0x02, 0x01, 0x59, 0x06, 0x00 }
};
const Glyph_t Glyph_Sign_Question_RTL = {
    .Width = 5,
    .Content = { 0x06, 0x59, 0x01, 0x02, 0x00 }
};
const Glyph_t Glyph_Sign_At = {
    .Width = 7,
    .Content = { 0x1E, 0x21, 0x2D, 0x2D, 0x29, 0x06, 0x00 }
};
const Glyph_t Glyph_Sign_Square_Bracket_Left = {
    .Width = 3,
    .Content = { 0x1F, 0x11, 0x00 }
};
const Glyph_t Glyph_Sign_Square_Bracket_Right = {
    .Width = 3,
    .Content = { 0x11, 0x1F, 0x00 }
};
const Glyph_t Glyph_Sign_Backslash = {
    .Width = 5,
    .Content = { 0x02, 0x04, 0x08, 0x10, 0x00 }
};
const Glyph_t Glyph_Sign_Caret = {
    .Width = 6,
    .Content = { 0x04, 0x02, 0x01, 0x02, 0x04, 0x00 }
};
const Glyph_t Glyph_Sign_Underscore = {
    .Width = 4,
    .Content = { 0x10, 0x10, 0x10, 0x00 }
};
const Glyph_t Glyph_Sign_Backquote = {
    .Width = 3,
    .Content = { 0x01, 0x02, 0x00 }
};
const Glyph_t Glyph_Sign_Curly_Bracket_Left = {
    .Width = 4,
    .Content = { 0x04, 0x1B, 0x11, 0x00 }
};
const Glyph_t Glyph_Sign_Curly_Bracket_Right = {
    .Width = 4,
    .Content = { 0x11, 0x1B, 0x04, 0x00 }
};
const Glyph_t Glyph_Sign_Vertical_Bar = {
    .Width = 2,
    .Content = { 0xFF, 0x00 }
};
const Glyph_t Glyph_Sign_Tilda = {
    .Width = 5,
    .Content = { 0x02, 0x01, 0x02, 0x01, 0x00 }
};
const Glyph_t Glyph_Sign_Multiply = {
    .Width = 4,
    .Content = { 0x0A, 0x04, 0x0A, 0x00 }
};

// #############################################################################
// #### File Guard #############################################################
// #############################################################################

// #############################################################################
// #### END OF FILE ############################################################
// #############################################################################
