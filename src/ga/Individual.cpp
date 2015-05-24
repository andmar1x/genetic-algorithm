//
// Created by andmar1x on 5/14/15.
//

#include "Individual.hpp"

namespace ga {

    Individual::Individual() {
    }

    Individual::~Individual() {
    }

    float Individual::getFitness() const {
        return fitness_;
    }

    void Individual::setFitness(float val) {
        fitness_ = val;
    }

    std::shared_ptr<Chromosome> &Individual::getChromosome() {
        return chromosome_;
    }

    void Individual::setChromosome(std::shared_ptr<Chromosome> &chromosome) {
        chromosome_ = chromosome;
    }

    void Individual::randomize() {
        chromosome_->randomize();
    }

    bool Individual::operator>(const Individual &rhs) const {
        return fitness_ > rhs.fitness_;
    }

    bool Individual::operator<(const Individual &rhs) const {
        return fitness_ < rhs.fitness_;
    }

    Individual &Individual::operator=(const Individual &rhs) {
        fitness_ = rhs.fitness_;
        chromosome_ = rhs.chromosome_;

        return *this;
    }

}
