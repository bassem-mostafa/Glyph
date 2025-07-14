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

#ifndef GLYPH_H_
    #define GLYPH_H_

// #############################################################################
// #### Include(s) #############################################################
// #############################################################################

    #include <stdint.h>

// #############################################################################
// #### Public Macro(s) ########################################################
// #############################################################################

// #############################################################################
// #### Public Type(s) #########################################################
// #############################################################################

// FIXME Support Multiple Glyph Types
// typedef enum Glyph_Type
//{
//  Glyph_Type_1_PixelPerByte = 0,
//  Glyph_Type_8_PixelPerByte_Vertical_TopDown,
//  Glyph_Type_8_PixelPerByte_Vertical_BottomUp,
//  Glyph_Type_8_PixelPerByte_Horizontal_LeftToRight,
//} Glyph_Type_t;

typedef struct Glyph
{
    // FIXME Support Multiple Glyph Types
    //  const Glyph_Type_t Type;
    const uint32_t Width;
    const uint8_t Content[];
} Glyph_t;

// #############################################################################
// #### Public Method(s) #######################################################
// #############################################################################

    #ifdef __cplusplus
extern "C"
{
    #endif

    #ifdef __cplusplus
}
    #endif

// #############################################################################
// #### Public Variable(s) #####################################################
// #############################################################################

extern const Glyph_t Glyph_Space;

extern const Glyph_t Glyph_Sign_Exclamation;
extern const Glyph_t Glyph_Sign_Double_Quotes;
extern const Glyph_t Glyph_Sign_Number;
extern const Glyph_t Glyph_Sign_Dollar;
extern const Glyph_t Glyph_Sign_Percent;
extern const Glyph_t Glyph_Sign_Ampersand;
extern const Glyph_t Glyph_Sign_Single_Quote;
extern const Glyph_t Glyph_Sign_Bracket_Left;
extern const Glyph_t Glyph_Sign_Bracket_Right;
extern const Glyph_t Glyph_Sign_Asterisk;
extern const Glyph_t Glyph_Sign_Plus;
extern const Glyph_t Glyph_Sign_Comma_LTR;
extern const Glyph_t Glyph_Sign_Comma_RTL;
extern const Glyph_t Glyph_Sign_Minus;
extern const Glyph_t Glyph_Sign_Period;
extern const Glyph_t Glyph_Sign_Slash;
extern const Glyph_t Glyph_Sign_Colon;
extern const Glyph_t Glyph_Sign_Semicolon_LTR;
extern const Glyph_t Glyph_Sign_Semicolon_RTL;
extern const Glyph_t Glyph_Sign_Angle_Bracket_Left;
extern const Glyph_t Glyph_Sign_Angle_Bracket_Right;
extern const Glyph_t Glyph_Sign_Equal;
extern const Glyph_t Glyph_Sign_Question_LTR;
extern const Glyph_t Glyph_Sign_Question_RTL;
extern const Glyph_t Glyph_Sign_At;
extern const Glyph_t Glyph_Sign_Square_Bracket_Left;
extern const Glyph_t Glyph_Sign_Square_Bracket_Right;
extern const Glyph_t Glyph_Sign_Backslash;
extern const Glyph_t Glyph_Sign_Caret;
extern const Glyph_t Glyph_Sign_Underscore;
extern const Glyph_t Glyph_Sign_Backquote;
extern const Glyph_t Glyph_Sign_Curly_Bracket_Left;
extern const Glyph_t Glyph_Sign_Curly_Bracket_Right;
extern const Glyph_t Glyph_Sign_Vertical_Bar;
extern const Glyph_t Glyph_Sign_Tilda;
extern const Glyph_t Glyph_Sign_Multiply;

extern const Glyph_t Glyph_EN_0;
extern const Glyph_t Glyph_EN_1;
extern const Glyph_t Glyph_EN_2;
extern const Glyph_t Glyph_EN_3;
extern const Glyph_t Glyph_EN_4;
extern const Glyph_t Glyph_EN_5;
extern const Glyph_t Glyph_EN_6;
extern const Glyph_t Glyph_EN_7;
extern const Glyph_t Glyph_EN_8;
extern const Glyph_t Glyph_EN_9;

extern const Glyph_t Glyph_EN_A;
extern const Glyph_t Glyph_EN_B;
extern const Glyph_t Glyph_EN_C;
extern const Glyph_t Glyph_EN_D;
extern const Glyph_t Glyph_EN_E;
extern const Glyph_t Glyph_EN_F;
extern const Glyph_t Glyph_EN_G;
extern const Glyph_t Glyph_EN_H;
extern const Glyph_t Glyph_EN_I;
extern const Glyph_t Glyph_EN_J;
extern const Glyph_t Glyph_EN_K;
extern const Glyph_t Glyph_EN_L;
extern const Glyph_t Glyph_EN_M;
extern const Glyph_t Glyph_EN_N;
extern const Glyph_t Glyph_EN_O;
extern const Glyph_t Glyph_EN_P;
extern const Glyph_t Glyph_EN_Q;
extern const Glyph_t Glyph_EN_R;
extern const Glyph_t Glyph_EN_S;
extern const Glyph_t Glyph_EN_T;
extern const Glyph_t Glyph_EN_U;
extern const Glyph_t Glyph_EN_V;
extern const Glyph_t Glyph_EN_W;
extern const Glyph_t Glyph_EN_X;
extern const Glyph_t Glyph_EN_Y;
extern const Glyph_t Glyph_EN_Z;

extern const Glyph_t Glyph_EN_a;
extern const Glyph_t Glyph_EN_b;
extern const Glyph_t Glyph_EN_c;
extern const Glyph_t Glyph_EN_d;
extern const Glyph_t Glyph_EN_e;
extern const Glyph_t Glyph_EN_f;
extern const Glyph_t Glyph_EN_g;
extern const Glyph_t Glyph_EN_h;
extern const Glyph_t Glyph_EN_i;
extern const Glyph_t Glyph_EN_j;
extern const Glyph_t Glyph_EN_k;
extern const Glyph_t Glyph_EN_l;
extern const Glyph_t Glyph_EN_m;
extern const Glyph_t Glyph_EN_n;
extern const Glyph_t Glyph_EN_o;
extern const Glyph_t Glyph_EN_p;
extern const Glyph_t Glyph_EN_q;
extern const Glyph_t Glyph_EN_r;
extern const Glyph_t Glyph_EN_s;
extern const Glyph_t Glyph_EN_t;
extern const Glyph_t Glyph_EN_u;
extern const Glyph_t Glyph_EN_v;
extern const Glyph_t Glyph_EN_w;
extern const Glyph_t Glyph_EN_x;
extern const Glyph_t Glyph_EN_y;
extern const Glyph_t Glyph_EN_z;

extern const Glyph_t Glyph_AR_0;
extern const Glyph_t Glyph_AR_1;
extern const Glyph_t Glyph_AR_2;
extern const Glyph_t Glyph_AR_3;
extern const Glyph_t Glyph_AR_4;
extern const Glyph_t Glyph_AR_5;
extern const Glyph_t Glyph_AR_6;
extern const Glyph_t Glyph_AR_7;
extern const Glyph_t Glyph_AR_8;
extern const Glyph_t Glyph_AR_9;

extern const Glyph_t Glyph_AR_Alef;
extern const Glyph_t Glyph_AR_Baa;
extern const Glyph_t Glyph_AR_Teh;
extern const Glyph_t Glyph_AR_Theh;
extern const Glyph_t Glyph_AR_Jeem;
extern const Glyph_t Glyph_AR_Hah;
extern const Glyph_t Glyph_AR_Khah;
extern const Glyph_t Glyph_AR_Dal;
extern const Glyph_t Glyph_AR_Thal;
extern const Glyph_t Glyph_AR_Reh;
extern const Glyph_t Glyph_AR_Zain;
extern const Glyph_t Glyph_AR_Seen;
extern const Glyph_t Glyph_AR_Sheen;
extern const Glyph_t Glyph_AR_Sad;
extern const Glyph_t Glyph_AR_Dad;
extern const Glyph_t Glyph_AR_Tah;
extern const Glyph_t Glyph_AR_Zah;
extern const Glyph_t Glyph_AR_Ain;
extern const Glyph_t Glyph_AR_Ghain;
extern const Glyph_t Glyph_AR_Feh;
extern const Glyph_t Glyph_AR_Qaf;
extern const Glyph_t Glyph_AR_Kaf;
extern const Glyph_t Glyph_AR_Lam;
extern const Glyph_t Glyph_AR_Meem;
extern const Glyph_t Glyph_AR_Noon;
extern const Glyph_t Glyph_AR_Heh;
extern const Glyph_t Glyph_AR_Waw;
extern const Glyph_t Glyph_AR_Ya;

extern const Glyph_t Glyph_AR_Teh_Marbuta;

extern const Glyph_t Glyph_AR_Lam_Alef;
extern const Glyph_t Glyph_AR_Lam_Hamzah_On_Alef;
extern const Glyph_t Glyph_AR_Lam_Hamzah_Under_Alef;
extern const Glyph_t Glyph_AR_Lam_Maddah_On_Alef;

extern const Glyph_t Glyph_AR_Maddah_On_Alef;

extern const Glyph_t Glyph_AR_Hamzah;
extern const Glyph_t Glyph_AR_Hamzah_On_Alef;
extern const Glyph_t Glyph_AR_Hamzah_Under_Alef;
extern const Glyph_t Glyph_AR_Hamzah_On_Waw;
extern const Glyph_t Glyph_AR_Hamzah_On_Ya;

extern const Glyph_t Glyph_AR_Tatweel;

extern const Glyph_t Glyph_AR_Alef_Start;
extern const Glyph_t Glyph_AR_Baa_Start;
extern const Glyph_t Glyph_AR_Teh_Start;
extern const Glyph_t Glyph_AR_Theh_Start;
extern const Glyph_t Glyph_AR_Jeem_Start;
extern const Glyph_t Glyph_AR_Hah_Start;
extern const Glyph_t Glyph_AR_Khah_Start;
extern const Glyph_t Glyph_AR_Dal_Start;
extern const Glyph_t Glyph_AR_Thal_Start;
extern const Glyph_t Glyph_AR_Reh_Start;
extern const Glyph_t Glyph_AR_Zain_Start;
extern const Glyph_t Glyph_AR_Seen_Start;
extern const Glyph_t Glyph_AR_Sheen_Start;
extern const Glyph_t Glyph_AR_Sad_Start;
extern const Glyph_t Glyph_AR_Dad_Start;
extern const Glyph_t Glyph_AR_Tah_Start;
extern const Glyph_t Glyph_AR_Zah_Start;
extern const Glyph_t Glyph_AR_Ain_Start;
extern const Glyph_t Glyph_AR_Ghain_Start;
extern const Glyph_t Glyph_AR_Feh_Start;
extern const Glyph_t Glyph_AR_Qaf_Start;
extern const Glyph_t Glyph_AR_Kaf_Start;
extern const Glyph_t Glyph_AR_Lam_Start;
extern const Glyph_t Glyph_AR_Meem_Start;
extern const Glyph_t Glyph_AR_Noon_Start;
extern const Glyph_t Glyph_AR_Heh_Start;
extern const Glyph_t Glyph_AR_Waw_Start;
extern const Glyph_t Glyph_AR_Ya_Start;

extern const Glyph_t Glyph_AR_Teh_Marbuta_Start;

extern const Glyph_t Glyph_AR_Lam_Alef_Start;
extern const Glyph_t Glyph_AR_Lam_Hamzah_On_Alef_Start;
extern const Glyph_t Glyph_AR_Lam_Hamzah_Under_Alef_Start;
extern const Glyph_t Glyph_AR_Lam_Maddah_On_Alef_Start;

extern const Glyph_t Glyph_AR_Maddah_On_Alef_Start;

extern const Glyph_t Glyph_AR_Hamzah_Start;
extern const Glyph_t Glyph_AR_Hamzah_On_Alef_Start;
extern const Glyph_t Glyph_AR_Hamzah_Under_Alef_Start;
extern const Glyph_t Glyph_AR_Hamzah_On_Waw_Start;
extern const Glyph_t Glyph_AR_Hamzah_On_Ya_Start;

extern const Glyph_t Glyph_AR_Alef_Middle;
extern const Glyph_t Glyph_AR_Baa_Middle;
extern const Glyph_t Glyph_AR_Teh_Middle;
extern const Glyph_t Glyph_AR_Theh_Middle;
extern const Glyph_t Glyph_AR_Jeem_Middle;
extern const Glyph_t Glyph_AR_Hah_Middle;
extern const Glyph_t Glyph_AR_Khah_Middle;
extern const Glyph_t Glyph_AR_Dal_Middle;
extern const Glyph_t Glyph_AR_Thal_Middle;
extern const Glyph_t Glyph_AR_Reh_Middle;
extern const Glyph_t Glyph_AR_Zain_Middle;
extern const Glyph_t Glyph_AR_Seen_Middle;
extern const Glyph_t Glyph_AR_Sheen_Middle;
extern const Glyph_t Glyph_AR_Sad_Middle;
extern const Glyph_t Glyph_AR_Dad_Middle;
extern const Glyph_t Glyph_AR_Tah_Middle;
extern const Glyph_t Glyph_AR_Zah_Middle;
extern const Glyph_t Glyph_AR_Ain_Middle;
extern const Glyph_t Glyph_AR_Ghain_Middle;
extern const Glyph_t Glyph_AR_Feh_Middle;
extern const Glyph_t Glyph_AR_Qaf_Middle;
extern const Glyph_t Glyph_AR_Kaf_Middle;
extern const Glyph_t Glyph_AR_Lam_Middle;
extern const Glyph_t Glyph_AR_Meem_Middle;
extern const Glyph_t Glyph_AR_Noon_Middle;
extern const Glyph_t Glyph_AR_Heh_Middle;
extern const Glyph_t Glyph_AR_Waw_Middle;
extern const Glyph_t Glyph_AR_Ya_Middle;

extern const Glyph_t Glyph_AR_Teh_Marbuta_Middle;

extern const Glyph_t Glyph_AR_Lam_Alef_Middle;
extern const Glyph_t Glyph_AR_Lam_Hamzah_On_Alef_Middle;
extern const Glyph_t Glyph_AR_Lam_Hamzah_Under_Alef_Middle;
extern const Glyph_t Glyph_AR_Lam_Maddah_On_Alef_Middle;

extern const Glyph_t Glyph_AR_Maddah_On_Alef_Middle;

extern const Glyph_t Glyph_AR_Hamzah_Middle;
extern const Glyph_t Glyph_AR_Hamzah_On_Alef_Middle;
extern const Glyph_t Glyph_AR_Hamzah_Under_Alef_Middle;
extern const Glyph_t Glyph_AR_Hamzah_On_Waw_Middle;
extern const Glyph_t Glyph_AR_Hamzah_On_Ya_Middle;

extern const Glyph_t Glyph_AR_Alef_End;
extern const Glyph_t Glyph_AR_Baa_End;
extern const Glyph_t Glyph_AR_Teh_End;
extern const Glyph_t Glyph_AR_Theh_End;
extern const Glyph_t Glyph_AR_Jeem_End;
extern const Glyph_t Glyph_AR_Hah_End;
extern const Glyph_t Glyph_AR_Khah_End;
extern const Glyph_t Glyph_AR_Dal_End;
extern const Glyph_t Glyph_AR_Thal_End;
extern const Glyph_t Glyph_AR_Reh_End;
extern const Glyph_t Glyph_AR_Zain_End;
extern const Glyph_t Glyph_AR_Seen_End;
extern const Glyph_t Glyph_AR_Sheen_End;
extern const Glyph_t Glyph_AR_Sad_End;
extern const Glyph_t Glyph_AR_Dad_End;
extern const Glyph_t Glyph_AR_Tah_End;
extern const Glyph_t Glyph_AR_Zah_End;
extern const Glyph_t Glyph_AR_Ain_End;
extern const Glyph_t Glyph_AR_Ghain_End;
extern const Glyph_t Glyph_AR_Feh_End;
extern const Glyph_t Glyph_AR_Qaf_End;
extern const Glyph_t Glyph_AR_Kaf_End;
extern const Glyph_t Glyph_AR_Lam_End;
extern const Glyph_t Glyph_AR_Meem_End;
extern const Glyph_t Glyph_AR_Noon_End;
extern const Glyph_t Glyph_AR_Heh_End;
extern const Glyph_t Glyph_AR_Waw_End;
extern const Glyph_t Glyph_AR_Ya_End;

extern const Glyph_t Glyph_AR_Teh_Marbuta_End;

extern const Glyph_t Glyph_AR_Lam_Alef_End;
extern const Glyph_t Glyph_AR_Lam_Hamzah_On_Alef_End;
extern const Glyph_t Glyph_AR_Lam_Hamzah_Under_Alef_End;
extern const Glyph_t Glyph_AR_Lam_Maddah_On_Alef_End;

extern const Glyph_t Glyph_AR_Maddah_On_Alef_End;

extern const Glyph_t Glyph_AR_Hamzah_End;
extern const Glyph_t Glyph_AR_Hamzah_On_Alef_End;
extern const Glyph_t Glyph_AR_Hamzah_Under_Alef_End;
extern const Glyph_t Glyph_AR_Hamzah_On_Waw_End;
extern const Glyph_t Glyph_AR_Hamzah_On_Ya_End;

extern const Glyph_t Glyph_Icon_Bell;
extern const Glyph_t Glyph_Icon_Clock;
extern const Glyph_t Glyph_Icon_Heart;
extern const Glyph_t Glyph_Icon_Melody_Single;
extern const Glyph_t Glyph_Icon_Melody_Double;
extern const Glyph_t Glyph_Icon_Stop;
extern const Glyph_t Glyph_Icon_Pause;
extern const Glyph_t Glyph_Icon_Previous;
extern const Glyph_t Glyph_Icon_Play;
extern const Glyph_t Glyph_Icon_Next;

extern const Glyph_t Glyph_Icon_Bluetooth;
extern const Glyph_t Glyph_Icon_Lock_Close;
extern const Glyph_t Glyph_Icon_Lock_Open;
extern const Glyph_t Glyph_Icon_Calendar;
extern const Glyph_t Glyph_Icon_Degree;
extern const Glyph_t Glyph_Icon_Thermometer;
extern const Glyph_t Glyph_Icon_Humidity;
extern const Glyph_t Glyph_Icon_Loading_Bar_Empty_Left;
extern const Glyph_t Glyph_Icon_Loading_Bar_Empty_Middle;
extern const Glyph_t Glyph_Icon_Loading_Bar_Empty_Right;
extern const Glyph_t Glyph_Icon_Loading_Bar_Full_Left;
extern const Glyph_t Glyph_Icon_Loading_Bar_Full_Middle;
extern const Glyph_t Glyph_Icon_Loading_Bar_Full_Right;

extern const Glyph_t Glyph_Icon_Battery_Empty;
extern const Glyph_t Glyph_Icon_Battery_Low;
extern const Glyph_t Glyph_Icon_Battery_Medium;
extern const Glyph_t Glyph_Icon_Battery_Half;
extern const Glyph_t Glyph_Icon_Battery_Fair;
extern const Glyph_t Glyph_Icon_Battery_Good;
extern const Glyph_t Glyph_Icon_Battery_Full;
extern const Glyph_t Glyph_Icon_Signal_Empty;
extern const Glyph_t Glyph_Icon_Signal_Very_Poor;
extern const Glyph_t Glyph_Icon_Signal_Poor;
extern const Glyph_t Glyph_Icon_Signal_Fair;
extern const Glyph_t Glyph_Icon_Signal_Moderate;
extern const Glyph_t Glyph_Icon_Signal_Good;
extern const Glyph_t Glyph_Icon_Signal_Very_Good;
extern const Glyph_t Glyph_Icon_Signal_Excellent;
extern const Glyph_t Glyph_Icon_Signal_Perfect;
extern const Glyph_t Glyph_Icon_WIFI_Empty;
extern const Glyph_t Glyph_Icon_WIFI_Full;
extern const Glyph_t Glyph_Icon_Alert_Clear;
extern const Glyph_t Glyph_Icon_Alert_Normal;
extern const Glyph_t Glyph_Icon_Alert_Inverse;

// #############################################################################
// #### File Guard #############################################################
// #############################################################################

#endif /* GLYPH_H_ */

// #############################################################################
// #### END OF FILE ############################################################
// #############################################################################
