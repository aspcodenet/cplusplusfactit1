#include <iostream>
#include <iomanip>
#include <float.h>
using namespace std;

int main(){
    int num1;
    int num2;

    cout << "Enter number 1:";
    cin >> num1; 
    cout << "Enter number 2:";
    cin >> num2; 
    cout << "The sum of " << num1 << " and " << num2 << " is " << num1+num2 << endl;
    cout << "The difference of " << num1 << " and " << num2 << " is " << num1-num2 << endl;
    cout << "The average of " << num1 << " and " << num2 << " is " << (num1+num2)/2.0 << endl;
    return 0;
}