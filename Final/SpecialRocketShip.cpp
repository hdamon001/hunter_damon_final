#include "SpecialRocketShip.h"

SpecialRocketShip::SpecialRocketShip()
{
    name = "RS Cloaky";
    fuel = 1000;
    cloaked = false;
}

void SpecialRocketShip::setCloaked(bool isCloaked)
{
    cloaked = isCloaked;
}

bool SpecialRocketShip::getCloaked() const
{
    return cloaked;
}