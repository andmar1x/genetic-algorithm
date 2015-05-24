//
// Created by andmar1x on 5/21/15.
//

#include <algorithm>
#include "Individual.hpp"
#include "Population.hpp"

namespace ga {

    Population::Population() : individuals_() {
    }

    Population::~Population() {
    }

    unsigned long Population::getIndividualCount() const {
        return individuals_.size();
    }

    float Population::getTotalFitness() const {
        int fitness = 0;
        for (auto &individual : individuals_) {
            fitness += individual.getFitness();
        }

        return fitness;
    }

    std::vector<Individual> &Population::getIndividuals() {
        return individuals_;
    }

    void Population::addIndividual(Individual &individual) {
        individuals_.push_back(individual);
    }

    void Population::randomize() {
        for (auto &ind : individuals_) {
            ind.randomize();
        }
    }

    void Population::sortPopulation() {
        std::sort(individuals_.begin(), individuals_.end(), [](const Individual &a, const Individual &b) {
            return a > b;
        });
    }

    bool Population::operator<(const Population &rhs) const {
        return individuals_.size() < rhs.individuals_.size();
    }

    Population &Population::operator=(const Population &rhs) {
        individuals_ = rhs.individuals_;

        return *this;
    }

    Individual &Population::operator[](int index) {
        return individuals_[index];
    }

}
