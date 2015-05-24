//
// Created by andmar1x on 5/24/15.
//

#pragma once

#include <memory>
#include <vector>
#include <string>
#include <bits/shared_ptr.h>
#include "Gene.hpp"
#include "../utils/RandomGenerator.hpp"

namespace ga {

    class Chromosome {

    public:

        Chromosome(unsigned long geneCount = 0);

        virtual ~Chromosome();

        std::vector<std::shared_ptr<Gene>> &getGenes();

        unsigned long getGenesCount() const;

        void mutate();

        void randomize();

        void crossover(std::shared_ptr<Chromosome> &anotherChromosome);

        std::shared_ptr<Gene> &operator[](int index);

        const std::shared_ptr<Gene> &operator[](int index) const;

    private:

        void swapGenes(std::shared_ptr<Gene> &gene1, std::shared_ptr<Gene> &gene2);

    private:

        std::vector<std::shared_ptr<Gene>> genes_;

    };

}
