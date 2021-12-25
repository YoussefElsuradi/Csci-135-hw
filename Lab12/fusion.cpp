/*
youssef elsuradi
 tong yee

 lab 12
 */

#include <iostream>
#include <vector>
using namespace std;



vector<int> goodVibes(const vector<int> v);
vector<int> makeVector(int n);
vector<int> sumPairWise( vector<int> &v1,  vector<int> &v2);
void gogeta(vector<int> goku, vector<int> vegeta);

void print(vector<int> vec){
    for (int i = 0; i < vec.size(); i++) cout << vec[i] << " ";
    cout <<endl;
}

int main(){
/*
    vector<int> vec1;
    vector<int> vec2(30); // different vector declarations 
    vector<int> vec3(30, 0);
    vector<int> vec4{0, 3, 5, 6};
    vector<int> vec5 = {99, 3, 5, 6};
    print (vec5);
    vec5.push_back(1000); // adds 1000 to the back of the vector
    print(vec5);
    cout << vec5.front() << " " << vec5.back() <<endl; //prints the first and last thiings in the vector
*/
/*
    vector<int> ans = makeVector(20);
    print(ans);

    vector<int> vec1 = {99, 3, -5, -6, -1000, -10000};
    ans = goodVibes(vec1);
    print(ans);
    cout << endl;

    print(vec1);
    vector<int> vec2 = {33, 44, -1, -6, 100, 7};
    print(vec2);
    ans = sumPairWise(vec1, vec2);
    print(ans);
*/
    vector<int> v1{1,2,3};
    vector<int> v2{4,5};
    print(v1);


}

void gogeta(vector<int> &goku, vector<int> &vegeta) {
    for (int i = 0; i < vegeta.size(); ++i) {
        goku.push_back(vegeta[i]);
    }
    vegeta.clear();
}

vector<int> goodVibes(const vector<int> v){
    vector<int> ans;
    for (int i = 0; i < v.size(); i++)
        if (v[i] > 0 ) ans.push_back(v[i]);
    return ans;
    
}

vector<int> makeVector(int n){
    vector<int> ans;
    for (int i = 0; i < n; i++ ) ans.push_back(i);
    return ans;
    
}

vector<int> sumPairWise( vector<int> &v1,  vector<int> &v2){
    vector<int> ans;
    int size1 = v1.size(), size2 = v2.size();
    if (size1 < size2) return sumPairWise(v2, v1);
    //v2 size is smaller
    for ( int i = 0; i < size1 - size2;i++) v2.push_back(0);

    for (int i= 0; i < size1; i++) ans.push_back(v1[i]+v2[i]);
    return ans;
}