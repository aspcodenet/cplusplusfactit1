#include <iostream>
#include <iomanip>
#include <float.h>
using namespace std;

int main(){
    int totalMinutes;

    cout << "Enter minutes:";
    cin >> totalMinutes; 

    int hours = totalMinutes / 60; 
    //int minutes = totalMinutes - (hours*60);
    int minutes = totalMinutes % 60;

    cout << "Hours:" << hours << endl << "Minutes:" << minutes << endl;

    return 0;
}