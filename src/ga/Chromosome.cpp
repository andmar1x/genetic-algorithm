//
// Created by andmar1x on 5/24/15.
//

#include <vector>
#include <string>
#include "Gene.hpp"
#include "Chromosome.hpp"
#include "GeneticAlgorithm.hpp"

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

    void Chromosome::mutate() {
        for (auto &gene : genes_) {
            if (RandomGenerator::random(0.0f, 1.0f) < MUTATION_RATE) {
                gene.randomize();
            }
        }
    }

    void Chromosome::randomize() {
        for (auto &gene : genes_) {
            gene.randomize();
        }
    }

    void Chromosome::crossover(Chromosome &anotherChromosome) {
        auto randomVal = RandomGenerator::random(0.0f, 1.0f);
        if (randomVal < CROSSOVER_RATE) {
            int count = (int) std::min(getGenesCount(), anotherChromosome.getGenesCount());
            int start = RandomGenerator::random(0, count - 1);
            for (auto i = start; i < count; ++i) {
                swapGenes(operator[](i), anotherChromosome[i]);
            }
        }
    }

    Gene &Chromosome::operator[](int index) {
        return genes_[index];
    }

    const Gene &Chromosome::operator[](int index) const {
        return genes_[index];
    }

    void Chromosome::swapGenes(Gene &gene1, Gene &gene2) {
        Gene temp(gene1);
        gene1 = gene2;
        gene2 = temp;
    }
}
