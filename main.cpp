#include <iostream>
#include <iomanip>
#include <float.h>
using namespace std;

int main(){
    unsigned char shoeSize;
    cout << setw(10) << "Name" << setw(30) << "Min" << setw(30) << "Max" << endl;
    cout << setw(10) << "uchar" << setw(30) << 0 << setw(30) << UCHAR_MAX << endl;
    cout << setw(10) << "char" << setw(30) << SCHAR_MIN << setw(30) << SCHAR_MAX << endl;
    cout << setw(10) << "short" << setw(30) << SHRT_MIN << setw(30) << SHRT_MAX << endl;
    cout << setw(10) << "ushort" << setw(30) << 0 << setw(30) << USHRT_MAX << endl;
    cout << setw(10) << "int" << setw(30) << INT_MIN << setw(30) << INT_MAX << endl;
    cout << setw(10) << "uint" << setw(30) << 0 << setw(30) << UINT_MAX << endl;
    cout << setw(10) << "long" << setw(30) << LONG_MIN << setw(30) << LONG_MAX << endl;
    cout << setw(10) << "ulong" << setw(30) << 0 << setw(30) << ULONG_MAX << endl;
    cout << setw(10) << "llong" << setw(30) << LLONG_MIN << setw(30) << LLONG_MAX << endl;
    cout << setw(10) << "ullong" << setw(30) << 0 << setw(30) << ULLONG_MAX << endl;
    cout << setw(10) << "float" << setw(30) << FLT_MIN << setw(30) << FLT_MAX << endl;
    cout << setw(10) << "double" << setw(30) << DBL_MIN << setw(30) << DBL_MAX << endl;
    return 0;
}