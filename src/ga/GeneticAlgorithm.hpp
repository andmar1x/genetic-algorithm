//
// Created by andmar1x on 5/24/15.
//

#pragma once

#include "Population.hpp"

namespace ga {

    const float CROSSOVER_RATE = 0.6f;
    const float MUTATION_RATE = 0.02f;

    class GeneticAlgorithm {

    public:

        GeneticAlgorithm();

        virtual ~GeneticAlgorithm();

    private:

        float mutationRate_;

    };

}
