#include <iostream>
#include <array>

using std::cout;
using std::cin;
using std::endl;
using std::array;

const int ARR_LENGTH {10};

void printArr(array<int, ARR_LENGTH> arr);

int main(){
    system ( "clear" );

    array<int, 10> intArr { 3, 6, 9, 12, 15, 18, 21, 24, 27, 30 };
    printArr( intArr);
    cout << endl;

    int *pInt { &intArr[0] };
    int *pIntInc { &intArr[0] };
    for ( int i {0}; i<10; ++i ){
        cout << "\t&intArr\t: " << &intArr[0] + i << " = " << *( &intArr[0] + i ) << endl;
        cout << "\tpInt\t: " << pInt + i << " = " << *( pInt +i ) << endl;
        cout << "\tpIntInc\t: " << pIntInc << " = " << *( pIntInc++ ) << endl;
        cout << endl;
    }

    fflush ( stdin );
    cin.get();
    return 0;
}

void printArr(array<int, ARR_LENGTH> arr) {
    cout << "\t{";
    for ( auto a: arr ){
        cout << " " << a;
    }
    cout << " }" << endl;
}
