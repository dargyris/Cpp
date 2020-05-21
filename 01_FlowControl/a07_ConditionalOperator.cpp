#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main(){

    system( "clear" );
    int myIntA { 10 };
    int myIntB { 20 };
    cout << ( ( myIntA < myIntB ) ? 
            "I am now going through my 6th career change!\nBoy, I'd better make this one work!" 
            : "Shouldn't be here..." );
    
    int num {};
    cout << "\n\nEnter int > ";
    cin >> num;

    if ( num % 2 == 0 ){
        cout << num << " is even." << endl;
    } else {
        cout << num << " is odd." << endl;
    }
    
    cout << num << " is " << ( (num%2 == 0) ? "even" : "odd" ) << endl;

    int num1 {}, num2 {};

    cout << "\nEnter 2 ints > ";
    cin >> num1 >> num2;
    if ( num1 != num2 ){
        cout << "Largest: " << ( ( num1 > num2 )? num1: num2 ) << endl;
        cout << "Smallest: " << ( ( num1 < num2 )? num1: num2 ) << endl;
    } else {
        cout << "The numbers are the same." << endl;
    }

    cin.get();
    cin.get();
    return 0;

}
