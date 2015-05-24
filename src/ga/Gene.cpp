//
// Created by andmar1x on 5/21/15.
//

#pragma once

#include "Gene.hpp"

namespace ga {

    Gene::Gene() {
        randomize();
    }

    Gene::~Gene() {
    }

    char Gene::getChar() const {
        return char_;
    }

    void Gene::setChar(char c) {
        char_ = c;
    }

    void Gene::randomize() {
        char_ = (char) ((rand() % 90) + 32);
    }

}
