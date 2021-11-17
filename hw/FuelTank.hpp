#ifndef FUEL_TANK_H //header guard
#define FUEL_TANK_H
//#pragma once //only works for C++ 11 and above
class FuelTank
{
public: 
    //TODO: when do we need to declare a data member public?
    //const
    //TODO: why header file?
    //TODO: why header guard
    FuelTank();
    FuelTank(int startLevel);
    ~FuelTank(); //~FuelTank() means destructor
    int getGasLevel() const;
    void sendGas(int gallons);
    void fillGas(int gallons);
private:
    int currGasLevel;
};
#endif
