//
// Created by andmar1x on 5/24/15.
//

#include "GeneticAlgorithm.hpp"

namespace ga {

    GeneticAlgorithm::GeneticAlgorithm() {
        std::shared_ptr<Population> population = std::make_shared<Population>();
    }
}