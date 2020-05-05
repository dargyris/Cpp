#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main(){

    system( "clear" );

    cout << "~ Types of Variables in C++ ~" << endl;
    cout << "-----------------------------------" << endl;
    
    cout << "\nChars:" << endl;
    cout << "-----------------------------------" << endl;
    cout << "char\t\t\t: " << sizeof(char) << endl;
    cout << "char16_t\t\t: " << sizeof(char16_t) << endl;
    cout << "char32_t\t\t: " << sizeof(char32_t) << endl;
    cout << "wchar_t\t\t\t: " << sizeof(wchar_t) << endl;

    cout << "\nSigned Integers:" << endl;
    cout << "-----------------------------------" << endl;
    cout << "signed short int\t: " << sizeof(signed short int) << endl;
    cout << "signed int\t\t: " << sizeof(signed int) << endl;
    cout << "signed long int\t\t: " << sizeof(signed long int) << endl;
    cout << "signed long long int\t: " << sizeof(long long int) << endl;

    cout << "\nUnsigned Integers:" << endl;
    cout << "-----------------------------------" << endl;
    cout << "short int\t\t: " << sizeof(short int) << endl;
    cout << "ing\t\t\t: " << sizeof(int) << endl;
    cout << "long int\t\t: " << sizeof(long int) << endl;
    cout << "long long int\t\t: " << sizeof(long long int) << endl;

    cout << "\nFloating Point:" << endl;
    cout << "-----------------------------------" << endl;
    cout << "float\t\t\t: " << sizeof(float) << endl;
    cout << "double\t\t\t: " << sizeof(double) << endl;
    cout << "long double\t\t: " << sizeof(long double) << endl;

    cout << "\nBooleans:\t" << endl;
    cout << "-----------------------------------" << endl;
    cout << "bool\t\t\t: " << sizeof(bool) << endl;

    cout << endl;   
    return 0;

}
