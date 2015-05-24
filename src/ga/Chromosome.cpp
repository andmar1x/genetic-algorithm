//
// Created by andmar1x on 5/24/15.
//

#include <vector>
#include <string>
#include "Gene.hpp"
#include "Chromosome.hpp"

namespace ga {

    Chromosome::Chromosome(unsigned long geneCount) : genes_(std::vector<Gene>(geneCount, Gene())) {
    }

    Chromosome::~Chromosome() {
    }

    std::vector<Gene> &Chromosome::getGenes() {
        return genes_;
    }

    unsigned long Chromosome::getGenesCount() const {
        return genes_.size();
    }

    void Chromosome::randomize() {
        for (auto &gene : genes_) {
            gene.randomize();
        }
    }

    Gene &Chromosome::operator[](int index) {
        return genes_[index];
    }

    const Gene &Chromosome::operator[](int index) const {
        return genes_[index];
    }
}
