//
// Created by andmar1x on 5/14/15.
//

#pragma once

#include "Chromosome.hpp"

namespace ga {

    class Individual {

    public:

        Individual();

        virtual ~Individual();

        float getFitness() const;

        void setFitness(float val);

        std::shared_ptr<Chromosome> &getChromosome();

        void setChromosome(std::shared_ptr<Chromosome> &chromosome);

        void randomize();

        bool operator>(const Individual &rhs) const;

        bool operator<(const Individual &rhs) const;

        Individual &operator=(const Individual &rhs);

    private:

        float fitness_;
        std::shared_ptr<Chromosome> chromosome_;

    };

}
