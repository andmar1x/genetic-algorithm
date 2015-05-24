//
// Created by andmar1x on 5/24/15.
//

#pragma once

class RandomGenerator {

public:

    RandomGenerator();

    virtual ~RandomGenerator();

    int random(int min, int max);

    float random(float min, float max);

};
