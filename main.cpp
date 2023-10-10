#include <iostream>
#include <iomanip>
#include <float.h>
using namespace std;

int main(){
    int amount;

    cout << "Enter amount:";
    cin >> amount; 

    cout << "With VAT " << amount * 1.25 << endl;
    return 0;
}