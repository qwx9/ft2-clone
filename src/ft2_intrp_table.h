#pragma once

#include <stdint.h>
#include "ft2_audio.h"

#define CUBIC_WIDTH 4
#define CUBIC_WIDTH_BITS 2
#define CUBIC_PHASES 8192
#define CUBIC_PHASES_BITS 13

#define CUBIC_FSHIFT (MIXER_FRAC_BITS-(CUBIC_PHASES_BITS+CUBIC_WIDTH_BITS))
#define CUBIC_FMASK ((CUBIC_WIDTH*CUBIC_PHASES)-CUBIC_WIDTH)
#define CUBIC_QUANTSHIFT 15

extern const int16_t cubicSplineTable[CUBIC_WIDTH * CUBIC_PHASES];
