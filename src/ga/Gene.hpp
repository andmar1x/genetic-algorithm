//
// Created by andmar1x on 5/21/15.
//

#pragma once

#include <cstdlib>
#include <assert.h>

namespace ga {

    class Gene {

    public:

        Gene();

        virtual ~Gene();

        char getChar() const;

        void setChar(char c);

        void randomize();

    private:

        char char_;

    };

}
