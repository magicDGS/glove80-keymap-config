// CONFIGURATION FOR THE KEYMAP

// this keymap is configured for windows
#define OPERATING_SYSTEM 'W'
// and to use es-es Spanish keycodes
#include <locale/keys_es.h>

// define the key-labels from glove80
// and the THUMBS, KEYS_L and KEYS_R standard
#include <zmk-helpers/key-labels/glove80.h>
#define THUMBS LH0 LH1 LH2 LH3 LH4 \
               LH5 RH0 RH1 RH2 RH3 RH4 RH5
#define KEYS_L LC1 LC2 LC3 LC4 LC5 \
               LN0 LN1 LN2 LN3 LN4 LN5 \
               LT0 LT1 LT2 LT3 LT4 LT5 \
               LT0 LT1 LT2 LT3 LT4 LT5 \
               LM0 LM1 LM2 LM3 LM4 LM5 \
               LB0 LB1 LB2 LB3 LB4 LB5 \
               LF1 LF2 LF3 LF4 LF5
#define KEYS_R RC1 RC2 RC3 RC4 RC5 \
               RN0 RN1 RN2 RN3 RN4 RN5 \
               RT0 RT1 RT2 RT3 RT4 RT5 \
               RT0 RT1 RT2 RT3 RT4 RT5 \
               RM0 RM1 RM2 RM3 RM4 RM5 \
               RB0 RB1 RB2 RB3 RB4 RB5 \
               RF1 RF2 RF3 RF4 RF5

// mapping layer-names to glove80 generated layer names
// these are used in include/glove80/system.dtsi
#define LAYER_Lower LOWER