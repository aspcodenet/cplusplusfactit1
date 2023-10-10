#include <iostream>
#include <iomanip>
#include <float.h>
using namespace std;

int main(){
    string foreName;
    string lastName;

    cout << "Enter your forename:";
    getline(cin,foreName);
    cout << "Enter your lastname:";
    getline(cin,lastName);
    cout << "Your name is " << lastName << ", " << foreName;
    return 0;
}