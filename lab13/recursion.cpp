

/*
youssef elsuradi 

tong yee 
lab 13 
*/

#include <iostream>
#include <string>
using namespace std;

void printRange(int left, int right);

int sumRange(int left, int right);

int sumArray(int *arr, int size);

bool isAlphanumeric(string s);

bool nestedParens(string s);


int main(){}

bool nestedParens(string s)
{
    if (s.length() == 0){
        return true;
    }
    if (s.length()%2 == 1 or !(s[0]== '(' and s[s.length()-1] == ')')){
        return false;
    }

    return nestedParens(s.substr(1, s.length ()-2));
}

bool isAlphanumeric(string s)
{
    if (s.length() == 0 )
        return true;

    if (!isalpha(s[0]) and !isdigit(s[0]))
    {
        return false;
    }
    return isAlphanumeric(s.substr(1, s.length()-1));
}

int sumArray(int *arr, int size){

    if (size == 1)  //base case, dont call the function here
    {
        return arr[0];
    }
    
    return arr[size-1] + sumArray(arr, size - 1);

}

void printRange(int left, int right)
{
    if (left == right)          //if base case is fullfilled, then it just prints left and is over
        cout<< left << " ";
    else if (left < right) // if right is > than left, then the loop will cont until L == R
    {
        cout << left << " ";
        printRange(left + 1, right); // increase left by 1 until it equalls right
    }
}



int sumRange (int left, int right){
    if (left > right)   // base case 1 
    {
        return 0;   
    }
    else if (left == right) // base case 2
    {
        return left;
    }
    else 
    {
        return left + sumRange(left + 1 , right);
    }


}




// my attempt 
/*
int sumRange(int left, int right)
{
    int sum;

   if( left < right)
   {
       sum = left + (left + 1);

       sumRange(left + 1, right);
   }
   else if {
       cout << sum <<endl;
   }

}
*/