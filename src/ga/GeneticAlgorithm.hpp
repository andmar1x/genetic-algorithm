//
// Created by andmar1x on 5/24/15.
//

#pragma once

#include "Population.hpp"

namespace ga {

    class GeneticAlgorithm {

    public:

        GeneticAlgorithm() {
        }

        virtual ~GeneticAlgorithm() {
        }

        Individual &select(Population &population);

        void crossover(Chromosome &chromosome1, Chromosome &chromosome2);

        void mutate(Chromosome &chromosome1, Chromosome &chromosome2);

    };

}
