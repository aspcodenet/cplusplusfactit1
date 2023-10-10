#include <iostream>
#include <iomanip>
#include <float.h>
#include <ctime>
using namespace std;

int main(){
    int birthYear;
    std::time_t t = std::time(nullptr);
    std::tm *const pTInfo = std::localtime(&t);

    cout << "Enter birthyear:";
    cin >> birthYear; 
    cout << "You are " << 1900 + pTInfo->tm_year - birthYear << " years";
    return 0;
}