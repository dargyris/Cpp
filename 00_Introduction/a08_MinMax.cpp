#include <iostream>
#include <limits>

using std::cout;
using std::cin;
using std::endl;
using std::numeric_limits;

int main(){

    system( "clear" );

    cout << "~ Types of Variables in C++ ~" << endl;
    cout << "-------------------------------------------------------" << endl;
    
    cout << "\nChars:" << endl;
    cout << "-------------------------------------------------------" << endl;
    cout << "char\t\t\t: " << (int)numeric_limits<char>::min() << endl;
    cout << "char\t\t\t: " << (int)numeric_limits<char>::max() << endl;
    cout << "char16_t\t\t: " << (long long)numeric_limits<char16_t>::min() << endl;
    cout << "char16_t\t\t: " << (long long)numeric_limits<char16_t>::max() << endl;
    cout << "char32_t\t\t: " << (long long)numeric_limits<char32_t>::min() << endl;
    cout << "char32_t\t\t: " << (long long)numeric_limits<char32_t>::max() << endl;
    cout << "wchar_t\t\t\t: " << (long long)numeric_limits<wchar_t>::min() << endl;
    cout << "wchar_t\t\t\t: " << (long long)numeric_limits<wchar_t>::max() << endl;

    cout << "\nSigned Integers:" << endl;
    cout << "-------------------------------------------------------" << endl;
    cout << "signed short int\t: " << (int)numeric_limits<short int>::min() << endl;
    cout << "signed short int\t: " << (int)numeric_limits<short int>::max() << endl;
    cout << "signed int\t\t: " << (int)numeric_limits<int>::min() << endl;
    cout << "signed int\t\t: " << (int)numeric_limits<int>::max() << endl;
    cout << "signed long int\t\t: " << (long long)numeric_limits<long int>::min() << endl;
    cout << "signed long int\t\t: " << (long long)numeric_limits<long int>::max() << endl;
    cout << "signed long long int\t: " << (long long)numeric_limits<long int>::min() << endl;
    cout << "signed long long int\t: " << (long long)numeric_limits<long int>::max() << endl;

    cout << "\nUnsigned Integers:" << endl;
    cout << "-------------------------------------------------------" << endl;
    cout << "short int\t\t: " << (int)numeric_limits<short int>::min() << endl;
    cout << "short int\t\t: " << (int)numeric_limits<short int>::max() << endl;
    cout << "int\t\t\t: " << (int)numeric_limits<int>::min() << endl;
    cout << "int\t\t\t: " << (int)numeric_limits<int>::max() << endl;
    cout << "long int\t\t: " << (long int)numeric_limits<long int>::min() << endl;
    cout << "long int\t\t: " << (long int)numeric_limits<long int>::max() << endl;
    cout << "long long int\t\t: " << (long long int)numeric_limits<long long int>::min() << endl;
    cout << "long long int\t\t: " << (long long int)numeric_limits<long long int>::max() << endl;

    cout << "\nFloating Point:" << endl;
    cout << "-------------------------------------------------------" << endl;
    cout << "float\t\t\t: " << (float)numeric_limits<float>::min() << endl;
    cout << "float\t\t\t: " << (float)numeric_limits<float>::max() << endl;
    cout << "double\t\t\t: " << (double)numeric_limits<double>::min() << endl;
    cout << "double\t\t\t: " << (double)numeric_limits<double>::max() << endl;
    cout << "long double\t\t: " << (long double)numeric_limits<long double>::min() << endl;
    cout << "long double\t\t: " << (long double)numeric_limits<long double>::max() << endl;

    cout << "\nBooleans:\t" << endl;
    cout << "-------------------------------------------------------" << endl;
    cout << "bool\t\t\t: " << (long int)numeric_limits<bool>::min() << endl;
    cout << "bool\t\t\t: " << (long int)numeric_limits<bool>::max() << endl;

    cout << endl;   
    return 0;

}
