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
        auto fitness = 0.0f;
        for (auto &individual : individuals_) {
            fitness += individual->getFitness();
        }
        return fitness;
    }

    std::vector<std::shared_ptr<Individual>> &Population::getIndividuals() {
        return individuals_;
    }

    void Population::evolve() {
        std::vector<std::shared_ptr<Individual>> newGeneration;
        while (newGeneration < individuals_) {
            std::shared_ptr<Chromosome> chromosome1 = select()->getChromosome();
            std::shared_ptr<Chromosome> chromosome2 = select()->getChromosome();
            chromosome1->crossover(chromosome2);

            std::shared_ptr<Individual> newIndividual1 = std::make_shared<Individual>();
            newIndividual1->setChromosome(chromosome1);
            // TODO set fitness
            newGeneration.push_back(newIndividual1);
            if (newGeneration < individuals_) {
                std::shared_ptr<Individual> newIndividual2 = std::make_shared<Individual>();
                newIndividual2->setChromosome(chromosome2);
                // TODO set fitness
                newGeneration.push_back(newIndividual2);
            }
        }
        individuals_ = newGeneration;
        sort();
    }

    std::shared_ptr<Individual> &Population::select() {
        auto totalFitness = getTotalFitness();
        auto ballPos = RandomGenerator::random(0.0f, totalFitness);
        auto sum = 0.0f;
        for (auto &individual : individuals_) {
            sum += individual->getFitness();
            if (ballPos <= sum) {
                return individual;
            }
        }
    }

    void Population::randomize() {
        for (auto &individual : individuals_) {
            individual->randomize();
        }
    }

    void Population::sort() {
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

    std::shared_ptr<Individual> &Population::operator[](int index) {
        return individuals_[index];
    }
}
