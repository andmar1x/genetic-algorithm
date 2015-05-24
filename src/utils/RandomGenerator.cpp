//
// Created by andmar1x on 5/24/15.
//

#include <time.h>
#include <stdlib.h>
#include "RandomGenerator.hpp"

int RandomGenerator::random(int min, int max) {
    srand((unsigned int) time(NULL));
    return rand() / (RAND_MAX / (max - min));
}

float RandomGenerator::random(float min, float max) {
    srand((unsigned int) time(NULL));
    return static_cast<float>(rand()) / (RAND_MAX / (max - min));
}
