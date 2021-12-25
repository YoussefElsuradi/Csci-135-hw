




#include <iostream>

using namespace std;

int main(){
    int** panel = new int*[3];
    for (int i = 0; i < 3; i++)
    {
        panel[i] = new int[4];
        for (int j = 0; j < 4; j++)
        {
            panel[i][j] = i * 4 + j;
            cout << panel[i][j] << " ";
        }
        cout << endl;
    }


}