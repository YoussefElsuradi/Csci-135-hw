

/*
Youssef elsuradi

tong yee
 append hw 
 */

#include <iostream>
#include <vector>
using namespace std;



vector<int> append(vector<int> a, vector<int> b);


int main(){}

vector<int> append(vector<int> a, vector<int> b)
{
    vector<int> v;
    for (int i = 0; i < a.size(); ++i) { // appends a to v using push back 
        v.push_back(a[i]);
    }

    for (int i = 0; i < b.size(); ++i) { // appends b to v
        v.push_back(b[i]);
    }

    return v;
    
}
