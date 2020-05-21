#include <ios>
#include <iostream>
#include <vector>
#include <string>
#include <iomanip>

using std::cout;
using std::cin;
using std::endl;
using std::vector;
using std::string;

int main(){
    system("clear");

    cout << "Array ===================================================" << endl;
    int scores[] { 10, 20, 30 };
    cout << "\t{  ";
    for ( int i: scores ){
        cout << i << "  ";
    }
    cout << "}\n" << endl;

    cout << "Vector ==================================================" << endl;
    vector<double> temperatures { 87.9, 77.9, 80., 72.5 };
    double average_temp {};
    double total {};
    cout << "\t{  ";
    for ( double& i: temperatures ){
        cout << i << "  ";
    }
    cout << "}\n" << endl;
    
    for ( double& temp: temperatures ){
        total += temp;
    }
    if ( temperatures.size() != 0 ){
        average_temp = total / temperatures.size();
    }
    cout << "\tAverage temp: " << average_temp << endl;

    cout << "\t--------------------------------------------" << endl;
    cout << std::fixed << std::setprecision(1) << endl;

    cout << "\tAverage: " << ( ( temperatures.size() != 0 )? total / temperatures.size(): 0 );
    cout << endl;

    temperatures.clear();
    cout << "\tAverage: " << ( ( temperatures.size() != 0 )? total / temperatures.size(): 0 );
    cout << endl;

    cout << "\t--------------------------------------------" << endl;
    cout << "\t{  ";
    for ( auto val: { 1, 2, 3, 4, 5 } ){
        cout << val << "  ";
    }
    cout << "}\n" << endl;

    cout << "String ==================================================" << endl;
    // Introduces one space between each and every character of a c-style string.
    cout << "\t";
    for ( auto c: "This is a test." ){
        cout << c << " ";
    }
    
    // Takes away the spaces from a c-style string.
    cout << "\n\t";
    for ( auto c: "This is a test." ){
        cout << ( ( c == ' ' )? '\0': c );
    }

    cout << "=========================================================" << endl;

    //cin.get();
    cin.get();
    return 0;
}
