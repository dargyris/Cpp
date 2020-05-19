#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main(){
    system( "clear" );
    
    // Declaration of 5 arrays:
    int myArray_0[0];       // has 0 elements!!
    int myArray_1[1] = {0}; // has 1 element
    int myArray_2[2] = {0}; // has 2 elements
    int myArray_3[3] = {0}; // has 3 elements
    int myArray_4[4] = {0}; // has 4 elements

    for( int i = 0; i < 5; i++ ){
        switch( i ){
            case 0:
                for( int j = 0; j < i ; j++ ){
                    cout << "myArray_0[" << j << "]" << myArray_0[j] << endl;
                }
                break;
            case 1:
                for( int j = 0; j < i ; j++ ){
                    cout << "myArray_1[" << j << "]" << myArray_1[j] << endl;
                }
                break;
            case 2:
                for( int j = 0; j < i ; j++ ){
                    cout << "myArray_2[" << j << "]" << myArray_2[j] << endl;
                }
                break;
            case 3:
                for( int j = 0; j < i ; j++ ){
                    cout << "myArray_3[" << j << "]" << myArray_3[j] << endl;
                }
                break;
            case 4:
                for( int j = 0; j < i ; j++ ){
                    cout << "myArray_4[" << j << "]" << myArray_4[j] << endl;
                }
                break;
            default:
                cout << "Panic!" << endl;
                break;

        }
    }

    cin.get();
}
