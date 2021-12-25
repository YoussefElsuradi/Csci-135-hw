

/*
Youssef elsuradi

tong yee
 merge
 */

#include <iostream>
#include <vector>
using namespace std;




vector<int> merge_sorted(vector<int> a, vector<int> b) {

    vector<int> vec;

    int i = 0, j = 0;

    while (i < a.size() || j < b.size()) {
        
        if (i >= a.size() || (j < b.size() && b[j] < a[i])) {
            vec.push_back(b[j++]);
        } else {

            vec.push_back(a[i++]);
        }
    }
    
    return vec;
}



