

#include <iostream>
#include <iomanip>
using namespace std;

int main() {

    int amt = 15;

    cout << "possible ways to get " << amt << " from 5 dollar anf 2 dollar bils "<<endl;


    for (int x = 0; x <= amt / 2; x++)
    {
        for (int y = 0; y <= amt / 5; y++)
            if (2*x + 5*y == 15)
                cout << setw(16) << x<< "\t" << y <<endl;
    };
    return 0;
}
//not working yet 