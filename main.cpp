

#include <iostream>
#include <iomanip>
using namespace std;


// given an interger, find the number of digits
// for example, for 123 the number of digits is 3.
// for -12, the number of digits is 2.

int main() {

    int num = 123;
    int numDigits = 0;
    /*
    while (num != 0)
    {
        num /= 10 ; // num = num /10;

        numDigits++;
    }
    */
   do 
   {
       num /= 10;
       numDigits++;
   } while (num !=0);

    cout << "the number of digits is "<< numDigits <<endl;




    return 0;
}