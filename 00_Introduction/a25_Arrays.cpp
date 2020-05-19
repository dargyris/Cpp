#include <iostream>

using std::cout;
using std::cin;
using std::endl;
using std::string;

void printArray( int [5]);

int main(){

    system( "clear" );
    
    // ================= Initialization at 0 =================
    // Java : int[] myArrayA = new int[10];
    int myArrayA[5] = {0};
    printArray( myArrayA );
    
    // =============== in-line Initialization ================
    // Java : int[] myArrayB = { 1, 2, 3, 4, 5 };
    int myArrayB[] = { 1, 2, 3, 4, 5 };
    printArray( myArrayB );

    cin.get();
    return 0;
}

void printArray( int array[5] ){
    for(int i = 0; i < 5; i++){
        cout << "Element [" << i << "]\t: " << array[i] << endl;
    }
}
