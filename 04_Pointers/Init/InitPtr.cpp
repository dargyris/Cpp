#include <iostream>
#include <vector>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::vector;
using std::string;

int main(){
//    system ( "clear" );

    cout << endl;

    short myShort {};
    int myInt {};
    long myLong {};
    char myChar {'A'};
    string myString {"abc"};

    cout << "\t~ Name ~\t~ Val ~\t    ~ size ~\t~ address ~" << endl;
    cout << "\t------------------------------------------------------" << endl; 
    cout << "\tmyShort\t\t   " << myShort << "\t\t" << sizeof(myShort) 
         << "\t" << &myShort << endl;
    cout << "\tmyInt\t\t   " << myInt << "\t\t" << sizeof(myInt) 
         << "\t" << &myInt << endl;
    cout << "\tmyLong\t\t   " << myLong << "\t\t" << sizeof(myLong) 
         << "\t" << &myLong << endl;
    cout << "\tmyChar\t\t   " << myChar << "\t\t" << sizeof(myChar) 
         << "\t" << &myChar << endl;
    cout << "\tmyString\t  " << myString << "\t\t" << sizeof(myString) 
         << "\t" << &myString << endl;

    cout << endl;
    cout << endl;

    short* myShortPtr { nullptr };
    int* myIntPtr { nullptr };
    long* myLongPtr { nullptr };
    char* myCharPtr { nullptr };
    vector<string>* myVecPtr { nullptr };
    string* myStringPtr { nullptr };

    cout << "\t~ Name ~\t~ Val ~\t    ~ size ~\t~ address ~" << endl;
    cout << "\t------------------------------------------------------" << endl; 
    cout << "\tmyShortPtr\t  " << myShortPtr << "\t\t" << sizeof(myShortPtr) 
         << "\t" << &myShortPtr << endl;
    cout << "\tmyIntPtr\t  " << myIntPtr << "\t\t" << sizeof(myIntPtr) 
         << "\t" << &myIntPtr << endl;
    cout << "\tmyLongPtr\t  " << myLongPtr << "\t\t" << sizeof(myLongPtr) 
         << "\t" << &myLongPtr << endl;
    cout << "\tmyCharPtr\t  " << static_cast<void*>(myCharPtr) << "\t\t" 
         << sizeof(myCharPtr) << "\t" << &myCharPtr << endl;
    cout << "\tmyVecPtr\t  " << myVecPtr << "\t\t" << sizeof(myVecPtr) 
         << "\t" << &myVecPtr << endl;
    cout << "\tmyStringPtr\t  " << myStringPtr << "\t\t" << sizeof(myStringPtr) 
         << "\t" << &myStringPtr << endl;


    fflush ( stdin );
    cin.get();
    return 0;
}
