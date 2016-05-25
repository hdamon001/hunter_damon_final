#ifndef SPEC_H
#define SPEC_H

#include "RocketShip.h"

class SpecialRocketShip: public RocketShip
{
    private:
     bool cloaked;
     
    public:
     SpecialRocketShip();
     void setCloaked(bool isCloaked);
     bool getCloaked() const;
};

#endif