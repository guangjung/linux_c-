// director.h
#ifndef DIRECTOR_H
#define DIRECTOR_H

#include "builder.h"

// 指挥者
class Direcror
{
public:
    void Create(IBuilder *builder) {
        builder->BuildCpu();
        builder->BuildMainboard();
        builder->BuildRam();
        builder->BuildVideoCard();
    }
};

#endif // DIRECTOR_H