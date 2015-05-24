//
// Created by andmar1x on 5/24/15.
//

#pragma once

#include <vector>
#include <string>
#include "Gene.hpp"
#include "../utils/RandomGenerator.hpp"

namespace ga {

    class Chromosome {

    public:

        Chromosome(unsigned long geneCount = 0);

        virtual ~Chromosome();

        std::vector<Gene> &getGenes();

        unsigned long getGenesCount() const;

        void mutate();

        void randomize();

        void crossover(Chromosome &anotherChromosome);

        Gene &operator[](int index);

        const Gene &operator[](int index) const;

    private:

        void swapGenes(Gene &gene1, Gene &gene2);

    private:

        std::vector<Gene> genes_;

    };

}
