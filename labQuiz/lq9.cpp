/*
youssef elsuradi
tong yee
lab quiz 9 
*/



#include <iostream>

using namespace std;

int unbalanced_brackets(string input)
{

	int j= 0;

	for (char s : input)
	     j+= (s == '{' ? 1 : s == '}' ? -1 : 0);
	 return j;

}