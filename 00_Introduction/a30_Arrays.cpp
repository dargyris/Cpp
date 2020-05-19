#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main(){

    system( "clear" );

    int theIntArr[5] {};
    for( int i = 0; i <5; i++ ){
        cout << "Element[" << i << "]: " << theIntArr[i] << endl;
    }

    cout << endl;

    char theCharArr[5]{};
    for( int i = 0; i <5; i++ ){
        cout << "Element[" << i << "]: " << theCharArr[i] << endl;
    }

//    cin.get();

}

