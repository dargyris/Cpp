#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main(){

    cout << "Min/Max with Constants" << endl;
    cout << "----------------------------" << endl;
    cout << "Minimum values:" << endl;
    cout << "char\t: " << CHAR_MIN << endl;
    cout << "short\t: " << SHRT_MIN << endl;
    cout << "int\t: " << INT_MIN << endl;
    cout << "long\t: " << LONG_MIN << endl;
    cout << "l long\t: " << LLONG_MIN << endl;

    cout << "----------------------------" << endl;
    cout << "Maximum values:" << endl;
    cout << "char\t: " << CHAR_MAX << endl;
    cout << "short\t: " << SHRT_MAX << endl;
    cout << "int\t: " << INT_MAX << endl;
    cout << "long\t: " << LONG_MAX << endl;
    cout << "l long\t: " << LLONG_MAX << endl;

    return 0;

}
