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
    cout << "char\t\t\t: " << sizeof(char) << " byte." << endl;
    cout << "char16_t\t\t: " << sizeof(char16_t) << " bytes." << endl;
    cout << "char32_t\t\t: " << sizeof(char32_t) << " bytes." << endl;
    cout << "wchar_t\t\t\t: " << sizeof(wchar_t) << " bytes." << endl;

    cout << "\nSigned Integers:" << endl;
    cout << "-----------------------------------" << endl;
    cout << "signed short int\t: " << sizeof(signed short int) << " bytes." << endl;
    cout << "signed int\t\t: " << sizeof(signed int) << " bytes." << endl;
    cout << "signed long int\t\t: " << sizeof(signed long int) << " bytes." << endl;
    cout << "signed long long int\t: " << sizeof(long long int) << " bytes." << endl;

    cout << "\nUnsigned Integers:" << endl;
    cout << "-----------------------------------" << endl;
    cout << "short int\t\t: " << sizeof(short int) << " bytes." << endl;
    cout << "ing\t\t\t: " << sizeof(int) << " bytes." << endl;
    cout << "long int\t\t: " << sizeof(long int) << " bytes." << endl;
    cout << "long long int\t\t: " << sizeof(long long int) << " bytes." << endl;

    cout << "\nFloating Point:" << endl;
    cout << "-----------------------------------" << endl;
    cout << "float\t\t\t: " << sizeof(float) << " bytes." << endl;
    cout << "double\t\t\t: " << sizeof(double) << " bytes." << endl;
    cout << "long double\t\t: " << sizeof(long double) << " bytes." << endl;

    cout << "\nBooleans:\t" << endl;
    cout << "-----------------------------------" << endl;
    cout << "bool\t\t\t: " << sizeof(bool) << " byte." << endl;

    cout << endl;   
    return 0;

}
