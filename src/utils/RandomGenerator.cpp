//
// Created by andmar1x on 5/24/15.
//

#include <time.h>
#include <stdlib.h>
#include "RandomGenerator.hpp"

RandomGenerator::RandomGenerator() {
    srand((unsigned int) time(NULL));
}

RandomGenerator::~RandomGenerator() {
}

int RandomGenerator::random(int min, int max) {
    return rand() / (RAND_MAX / (max - min));
}

float RandomGenerator::random(float min, float max) {
    return static_cast<float>(rand()) / (RAND_MAX / (max - min));
}
