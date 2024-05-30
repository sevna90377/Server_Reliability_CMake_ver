#include "../../include/RNG/linear_congruential_RNG.h"

double LinConRNG::next() {
    seed = (multiplier * seed + constant) % modulo;
    return static_cast<double>(seed) / modulo;
}