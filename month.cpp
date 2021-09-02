
/*
Author: Youssef Elsuradi
Course: CSCI-136
Instructor: Tong Yee
Assignment: Lab1A

*/

#include <iostream>
using namespace std;

int Count_of_days(int month_count, int year_count)
{
    
    if (month_count == 2){  // if the month is february it goes thru the following if statement
    {
        if((year_count % 400 == 0) || (year_count % 4 == 0 && year_count % 100 != 0))
        {
            return 29;
        }
        else
        {
            return 28;
        }
    }
    }else if (month_count == 1, 3, 5, 7, 8, 10, 12 ){  //April, june, Sept, Nov
    {
        return 31;
    }
    // cool beans
    }else
    { 
        return 30;
    }
}// if it isnt the months stated than it has 30 days
int main() 
{
    int days = 0, month, year;
    cout << "Enter year: ";
    cin >> year;
    cout << "enter month: ";
    cin >> month;
    days = Count_of_days(month, year);
    cout<< endl << days << "days" << endl;
    
    return 0;
}