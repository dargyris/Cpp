#include <iostream>
#include <vector>

using std::cout;
using std::cin;
using std::endl;
using std::vector;

int main() {

    system( "clear" );
    
    vector <char> vowels {'a', 'e', 'i', 'o', 'u'};

    cout << "vowels[0]\t: " << vowels[0] << endl;
    cout << "vowels.at(0)\t: " << vowels.at(0) << endl;
    cout << "vowels[1]\t: " << vowels[1] << endl;
    cout << "vowels.at(1)\t: " << vowels.at(1) << endl;


    
    return 0;
}
