#pragma once

#include "box_muller_transform.h"

static BoxMullerTransform * bmt;
static bool initiated = false;

void initRNG();
double getRNG();