#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main(){
    system ( "clear" );

    short int* ptrA;
    short int* ptrB;
    short int* ptrC;
    short int* ptrD;
    short int* ptrE;
    short int* ptrF;
    short int* ptrG;

    cout << ptrA << endl;
    cout << ptrB << endl;
    cout << ptrC << endl;
    cout << ptrD << endl;
    cout << ptrE << endl;
    cout << ptrF << endl;
    cout << ptrG << endl;

    cout << *ptrA << endl;
    cout << *ptrB << endl;
    cout << *ptrC << endl;
    cout << *ptrD << endl;
    cout << *ptrE << endl;
    cout << *ptrF << endl;
    cout << *ptrG << endl;


    fflush ( stdin );
    cin.get();
    return 0;
}
