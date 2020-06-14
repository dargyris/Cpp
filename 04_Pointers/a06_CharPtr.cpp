#include <iostream>
#include <array>

using std::cout;
using std::cin;
using std::endl;
using std::array;

const int ARR_LENGTH {10};

void prcharArr(array<char, ARR_LENGTH> arr);

int main(){
    system ( "clear" );

    array<char, 10> charArr { '0', '1', '2', '3', '4', '5', '6', '7', '8', '9' };
    prcharArr( charArr);
    cout << endl;

    char *pChar { &charArr[0] };
    char *pCharInc { &charArr[0] };
    for ( char i {0}; i<10; ++i ){
        cout << "\t&charArr\t: " << static_cast<void*>(&charArr[0] + i) 
             << " = " << *( &charArr[0] + i ) << endl;
        cout << "\tpChar\t\t: " << static_cast<void*>(pChar + i) 
             << " = " << *( pChar +i ) << endl;
        cout << "\tpCharInc\t: " << static_cast<void*>(pCharInc) 
             << " = " << *( pCharInc ) << endl;
        pCharInc++;
        cout << endl;
    }

    fflush ( stdin );
    cin.get();
    return 0;
}

void prcharArr(array<char, ARR_LENGTH> arr) {
    cout << "\t{";
    for ( auto a: arr ){
        cout << " " << a;
    }
    cout << " }" << endl;
}
