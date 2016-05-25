#ifndef SHIP_H
#define SHIP_H

#include <iostream>
#include <string>
#include <vector>
#include <sstream>

using namespace std;

class RocketShip
{
    protected:
     string name;
     unsigned int fuel;
     vector<unsigned int> fuelCells;
     
    public:
     RocketShip();
     RocketShip(string newName, unsigned int newFuel);
     void setName(string sName);
     string getName() const; 
     void setFuel(unsigned int sFuel);
     int getFuel() const;
     void addFuelCell(unsigned int fuelAmount);
     bool removeFuelCell(unsigned int cellNumber);
     bool addFuelToCell(unsigned int cellNumber, unsigned int fuelAmount);
     string burnFuel(unsigned int cellNumber);
};

#endif