#include <iostream>
using namespace std;

int main(){
    int price, nights;
    cout    << "How much does it cost per night:";
    cin >> price;
    cout    << "How many nights:";
    cin >> nights;
    //int totalPrice = price * nights;
    //cout    << "Total price:" << totalPrice << endl;
    cout    << "Total price:" << price * nights  << endl;

    return 0;
}