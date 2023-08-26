#define MIRYOKU_LAYER_GAME \
&kp N2,        &kp N3,            &kp N4,                &kp N5,            &kp R,                   &kp Y,             &kp U,             &kp I,             &kp O,             &kp P,     \
&kp LSHFT,     &kp A,             &kp W,                 &kp D,             &kp F,                   &kp H,             &kp J,             &kp K,             &kp L,             &kp SQT,   \
&kp LCTRL,     &kp Q,             &kp S,                 &kp E,             &kp B,                   &kp N,             &kp M,             &kp COMMA,         &kp DOT,           &kp SLASH, \
U_NP,          U_NP,              U_LT(U_GAME_MEDIA, G), &kp SPACE,         U_LT(U_GAME_MOUSE, V),   &kp ENTER,         &kp BSPC,          &kp DEL,           U_NP,              U_NP

#define MIRYOKU_LAYER_GAME_MEDIA \
&kp F2,        &kp F3,            &kp F4,                &kp F5,            &kp F6,               U_NA,              U_NA,             U_NA,             U_NA,             U_NA, \
&kp LSHFT,     &kp A,             &kp W,                 &kp D,             &kp I,                U_NA,              U_NA,             U_NA,             U_NA,             U_NA, \
&kp LCTRL,     &kp C,             &kp S,                 &kp M,             &kp TAB,              U_NA,              U_NA,             U_NA,             U_NA,             U_NA, \
U_NP,          U_NP,              U_NA,                  U_NA,              U_NA,                 U_NA,              U_NA,             U_NA,             U_NA,             U_NA   

#define MIRYOKU_LAYER_GAME_MOUSE \
&kp N6,        &kp N7,            &kp N8,                &kp KP_NUMLOCK,    &kp T,                U_NA,              U_NA,             U_NA,             U_NA,             U_NA, \
&kp LSHFT,     &kp A,             &kp W,                 &kp D,             &kp H,                U_NA,              U_NA,             U_NA,             U_NA,             U_NA, \
&kp LCTRL,     &kp Z,             &kp S,                 &kp X,             &kp N,                U_NA,              U_NA,             U_NA,             U_NA,             U_NA, \
U_NP,          U_NP,              U_NA,                  U_NA,              U_NA,                 U_NA,              U_NA,             U_NA,             U_NA,             U_NA

#define MIRYOKU_LAYER_LIST \
MIRYOKU_X(BASE,       "Base") \
MIRYOKU_X(EXTRA,      "Extra") \
MIRYOKU_X(TAP,        "Tap") \
MIRYOKU_X(BUTTON,     "Button") \
MIRYOKU_X(NAV,        "Nav") \
MIRYOKU_X(MOUSE,      "Mouse") \
MIRYOKU_X(MEDIA,      "Media") \
MIRYOKU_X(NUM,        "Num") \
MIRYOKU_X(SYM,        "Sym") \
MIRYOKU_X(FUN,        "Fun") \
MIRYOKU_X(GAME,       "Game") \
MIRYOKU_X(GAME_MEDIA, "Game Media") \
MIRYOKU_X(GAME_MOUSE, "Game Mouse")

#define U_BASE       0
#define U_EXTRA      1
#define U_TAP        2
#define U_BUTTON     3
#define U_NAV        4
#define U_MOUSE      5
#define U_MEDIA      6
#define U_NUM        7
#define U_SYM        8
#define U_FUN        9
#define U_GAME       10
#define U_GAME_MEDIA 11
#define U_GAME_MOUSE 12

#define XXX &none

#define MIRYOKU_LAYOUTMAPPING_CORNE( \
     K00, K01, K02, K03, K04,      K05, K06, K07, K08, K09, \
     K10, K11, K12, K13, K14,      K15, K16, K17, K18, K19, \
     K20, K21, K22, K23, K24,      K25, K26, K27, K28, K29, \
     N30, N31, K32, K33, K34,      K35, K36, K37, N38, N39 \
) \
XXX  K00  K01  K02  K03  K04       K05  K06  K07  K08  K09  &to U_BASE \
XXX  K10  K11  K12  K13  K14       K15  K16  K17  K18  K19  &to U_GAME \
XXX  K20  K21  K22  K23  K24       K25  K26  K27  K28  K29  XXX \
               K32  K34  K33       K36  K35  K37

#define MIRYOKU_LAYOUTMAPPING_TBKMINI( \
     K00, K01, K02, K03, K04,      K05, K06, K07, K08, K09, \
     K10, K11, K12, K13, K14,      K15, K16, K17, K18, K19, \
     K20, K21, K22, K23, K24,      K25, K26, K27, K28, K29, \
     N30, N31, K32, K33, K34,      K35, K36, K37, N38, N39 \
) \
XXX  K00  K01  K02  K03  K04       K05  K06  K07  K08  K09  &to U_BASE \
XXX  K10  K11  K12  K13  K14       K15  K16  K17  K18  K19  &to U_GAME \
XXX  K20  K21  K22  K23  K24       K25  K26  K27  K28  K29  XXX \
               K32  K33  K34       K35  K36  K37

#define MIRYOKU_KLUDGE_TOPROWCOMBOS_LEFTPINKIE 2 3
#define MIRYOKU_KLUDGE_TOPROWCOMBOS_LEFTINNERINDEX 3 4
#define MIRYOKU_KLUDGE_TOPROWCOMBOS_RIGHTINNERINDEX 7 8
#define MIRYOKU_KLUDGE_TOPROWCOMBOS_RIGHTPINKIE 8 9

#define MIRYOKU_KLUDGE_BOTTOMROWCOMBOS_LEFTPINKIE 26 27
#define MIRYOKU_KLUDGE_BOTTOMROWCOMBOS_LEFTINNERINDEX 27 28
#define MIRYOKU_KLUDGE_BOTTOMROWCOMBOS_RIGHTINNERINDEX 31 32
#define MIRYOKU_KLUDGE_BOTTOMROWCOMBOS_RIGHTPINKIE 32 33

#define MIRYOKU_KLUDGE_THUMBCOMBOS_LEFT 37 38
#define MIRYOKU_KLUDGE_THUMBCOMBOS_RIGHT 39 40


#if defined (MIRYOKU_KEYBOARD_TBKMINI_ADAPTERV2) || defined (MIRYOKU_KEYBOARD_CORNE)
     #define MIRYOKU_LAYERMAPPING_GAME( \
          K00, K01, K02, K03, K04,      K05, K06, K07, K08, K09, \
          K10, K11, K12, K13, K14,      K15, K16, K17, K18, K19, \
          K20, K21, K22, K23, K24,      K25, K26, K27, K28, K29, \
          N30, N31, K32, K33, K34,      K35, K36, K37, N38, N39 \
     ) \
     &kp N1  K00  K01  K02  K03  K04       K05  K06  K07  K08  K09  &trans \
     &kp G   K10  K11  K12  K13  K14       K15  K16  K17  K18  K19  &trans \
     &kp V   K20  K21  K22  K23  K24       K25  K26  K27  K28  K29  XXX \
                       K32  K33  K34       K35  K36  K37

     #define MIRYOKU_LAYERMAPPING_GAME_MEDIA( \
          K00, K01, K02, K03, K04,      K05, K06, K07, K08, K09, \
          K10, K11, K12, K13, K14,      K15, K16, K17, K18, K19, \
          K20, K21, K22, K23, K24,      K25, K26, K27, K28, K29, \
          N30, N31, K32, K33, K34,      K35, K36, K37, N38, N39 \
     ) \
     &kp ESC   K00  K01  K02  K03  K04       K05  K06  K07  K08  K09  &trans \
     &kp GRAVE K10  K11  K12  K13  K14       K15  K16  K17  K18  K19  &trans \
     &kp LALT  K20  K21  K22  K23  K24       K25  K26  K27  K28  K29  XXX \
                         K32  K33  K34       K35  K36  K37

     #define MIRYOKU_LAYERMAPPING_GAME_MOUSE( \
          K00, K01, K02, K03, K04,      K05, K06, K07, K08, K09, \
          K10, K11, K12, K13, K14,      K15, K16, K17, K18, K19, \
          K20, K21, K22, K23, K24,      K25, K26, K27, K28, K29, \
          N30, N31, K32, K33, K34,      K35, K36, K37, N38, N39 \
     ) \
     &kp F1     K00  K01  K02  K03  K04       K05  K06  K07  K08  K09  &trans \
     &kp F13    K10  K11  K12  K13  K14       K15  K16  K17  K18  K19  &trans \
     &kp F14    K20  K21  K22  K23  K24       K25  K26  K27  K28  K29  XXX \
                          K32  K33  K34       K35  K36  K37

#endif

#if !defined (MIRYOKU_LAYERMAPPING_GAME)
     #define MIRYOKU_LAYERMAPPING_GAME MIRYOKU_MAPPING 
#endif
#if !defined (MIRYOKU_LAYERMAPPING_GAME_MEDIA)
     #define MIRYOKU_LAYERMAPPING_GAME_MEDIA MIRYOKU_MAPPING 
#endif
#if !defined (MIRYOKU_LAYERMAPPING_GAME_MOUSE)
     #define MIRYOKU_LAYERMAPPING_GAME_MOUSE MIRYOKU_MAPPING 
#endif

