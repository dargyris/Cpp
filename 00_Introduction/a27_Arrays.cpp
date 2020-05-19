#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main(){

    // All elements of the same type

    system( "clear" );

    // Java: int testScore_1 = 0;
    int testScore_0 {0};
    int testScore_1 {0};
    int testScore_2 {0};
    int testScore_3 {0};
    int testScore_4 {0};

//    WRONG!!!! =======================================================
//    for( int i = 0; i < 5; i ){
//        cout << "testScore_" << i << "\t: " << testScore_i << endl;
//    }

    // int myArrayA[number_of_elements] = {init value for ALL elements};
    int myArrayA[5] = {0};
    for( int i = 0; i < 5; i++ ){
        cout << "Element [" << i << "]\t: " << myArrayA[i] << endl;
    }

    cin.get();

}
