//
// Created by andmar1x on 5/24/15.
//

#pragma once

#include <vector>
#include <string>
#include "Gene.hpp"

namespace ga {

    class Chromosome {

    public:

        Chromosome(unsigned long geneCount = 0);

        virtual ~Chromosome();

        std::vector<Gene> &getGenes();

        unsigned long getGenesCount() const;

        void randomize();

        Gene &operator[](int index);

        const Gene &operator[](int index) const;

    private:

        std::vector<Gene> genes_;

    };

}
