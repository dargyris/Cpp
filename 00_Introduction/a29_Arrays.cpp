#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main(){
    system( "clear" );

    char theCharArray[5] {'n'};
    for( int i = 0; i < 5; i++ ){
        cout << "theCharArray[" << i << "]: " << theCharArray[i] << endl;
    }

    char theVowels[] { 'a', 'e', 'i', 'o', 'u' };
    for( int i = 0; i < 5; i++ ){
        cout << "theVowels[" << i << "]: " << theVowels[i] << endl;
    }

    cin.get();
}
