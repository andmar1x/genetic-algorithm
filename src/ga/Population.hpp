//
// Created by andmar1x on 5/21/15.
//

#pragma once

#include <algorithm>
#include "Individual.hpp"

namespace ga {

    class Population {

    public:

        Population();

        virtual ~Population();

        unsigned long getIndividualCount() const;

        float getTotalFitness() const;

        std::vector<Individual> &getIndividuals();

        void evolve();

        Individual &select();

        void randomize();

        void sort();

        bool operator<(const Population &rhs) const;

        Population &operator=(const Population &rhs);

        Individual &operator[](int index);

    private:

        std::vector<Individual> individuals_;

    };

}
