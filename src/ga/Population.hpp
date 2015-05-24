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

        std::vector<std::shared_ptr<Individual>> &getIndividuals();

        void evolve();

        std::shared_ptr<Individual> &select();

        void randomize();

        void sort();

        bool operator<(const Population &rhs) const;

        Population &operator=(const Population &rhs);

        std::shared_ptr<Individual> &operator[](int index);

    private:

        std::vector<std::shared_ptr<Individual>> individuals_;

    };

}
