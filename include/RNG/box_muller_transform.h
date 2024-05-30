#pragma once

#include "linear_congruential_RNG.h"
#include <ctime>
#include <cmath>
#include <chrono>

# define M_PI           3.14159265358979323846

class BoxMullerTransform
{
private:
    LinConRNG* rng;

    double radius;
    double theta;
    bool areThereLeftovers = false;
    double leftovers;

public:
    BoxMullerTransform() {
        auto seed = static_cast<unsigned long>(time(nullptr));
        rng = new LinConRNG(22695477, 1, 1 << 31, seed);
    };

    double next();

private:
    double calc();
    void calcRadius(double U);
    void calcTheta(double U);
};