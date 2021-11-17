


#include "FuelTank.hpp"

FuelTank::FuelTank()
{
    currGasLevel = 0;
}

//If in C++11, we can call another constructor inside one constructor
//TODO: what does :: mean?
//TODO: what does : FuelTank(0) mean?
//FuelTank::FuelTank() : FuelTank(0)
//{
//}

FuelTank::FuelTank(int startLevel)
{
    if (startLevel >= 0)
       currGasLevel = startLevel;
    else currGasLevel = 0;
}

//no actual code since no dynamically allocated memory is involved
FuelTank::~FuelTank()
{
}

int FuelTank::getGasLevel() const
{
    return currGasLevel;
}

void FuelTank::fillGas(int gallons)
{
    if (gallons > 0)
       currGasLevel += gallons;
}

void FuelTank::sendGas(int gallons)
{
    if (currGasLevel >= gallons)
       currGasLevel -= gallons;
}