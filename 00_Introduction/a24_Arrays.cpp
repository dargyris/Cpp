#include <iostream>

using std::cout;
using std::cin;
using std::endl;
using std::string;

int main(){

    // Java : int[] myArray = new int[10];
    // C++  : int myArray[10] = {0};
    
    // Java : int[] myArray = { 1, 2, 3, 4, 5 };
    // C++  : int myArray[] = { 1, 2, 3, 4, 5 };
    system( "clear" );

    string myMonthArray[12] = { "January", "February", "March", "April", 
                                "May", "June", "July", "August", "September",
                                "October", "November", "December" };

    for( int i = 0; i < 12; i++){
        cout << "Month\t: " << myMonthArray[i] << endl;
    }

    cout << endl;
    
    int myIntArray[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

    for( int i = 0; i < 10; i++){
        cout << "Element " << i << "\t: " << myIntArray[i] << endl;
    }
    cin.get();
    return 0;
}
