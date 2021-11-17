
/* 
Youssef Elsuradi
*/




#include <iostream>
#include "FuelTank.hpp"

using namespace std;

int main()
{
   FuelTank tank;
   tank.fillGas(5);
   cout << "after filling 5 gallons, tank has: ";
   cout << tank.getGasLevel() << endl;

   tank.sendGas(3);
   cout << "after sending 3 gallons, tank has: ";
   cout << tank.getGasLevel() << endl;

   //tank.currGasLevel = 10;
         //WRONG. The current class is not FuelTank,
         //cannot access private data member
         //of FuelTank class.
   return 0;
}
