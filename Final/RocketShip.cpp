#include "RocketShip.h"

RocketShip::RocketShip()
{
    name = "RS NullPointer";
    fuel = 1000;
}

RocketShip::RocketShip(string newName, unsigned int newFuel)
{
    name = newName;
    fuel = newFuel;
}

void RocketShip::setName(string sName)
{
    name = sName;
}

string RocketShip::getName() const
{
    return name;
}

void RocketShip::setFuel(unsigned int sFuel)
{
    fuel = sFuel;
}

int RocketShip::getFuel() const
{
    return fuel;
}

void RocketShip::addFuelCell(unsigned int fuelAmount)
{
    fuelCells.push_back(fuelAmount);
}

bool RocketShip::removeFuelCell(unsigned int cellNumber)
{
    if (cellNumber < fuelCells.size())
    {
        fuelCells.erase(fuelCells.begin() + cellNumber);
        return true;
    }
    
    return false;
}

bool RocketShip::addFuelToCell(unsigned int cellNumber, unsigned int fuelAmount)
{
    if (cellNumber < fuelCells.size())
    {
        fuelCells[cellNumber] = fuelCells[cellNumber] + fuelAmount;
        return true;
    }
    
    return false;
}

string RocketShip::burnFuel(unsigned int cellNumber)
{
    stringstream out;
    for (int i = 0; i < fuelCells[cellNumber]; i++)
    {
        out<<"*";
    }
    
    fuelCells[cellNumber] = 0;
    return out.str();
}