#include <iostream>
using namespace std;
 bool isLeapYear(int year){
    if(year % 400 == 0) return true;
    if(year % 100 == 0) return false;
    return year % 400 == 0;
 }
 int main(){
    int year;
    cout << "Enter a year :";
    cin >> year;
    if(isLeapYear(year))
        cout << year << " is a leap year"<< endl;
    else 
    cout << year << " is not a leap year"<< endl;

    return 0;
 }