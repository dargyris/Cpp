#include <iostream>
#include <vector>

using std::cout;
using std::cin;
using std::endl;
using std::vector;

int main(  ){

    system( "clear" );
    //vector <char> vowels;
    //char vowels[] {};
    //vector <char> vowels ( 5 );
    //char vowels[5] {} ;
    //vector <char> vowels { 'a', 'e', 'i', 'o', 'u' };
    //char vowels[] { 'a', 'e', 'i', 'o', 'u' };

    vector <int> theVec_1 (5);
    vector <int> theVec_2 ( 5, 10 );
    vector <int> theVec_3 { 1, 2, 3, 4, 5 };

    cout << "\t~ Contents using Array syntax ~" << endl;
    for( int i = 0; i < 5 ; i++ ){
        cout << "theVec_1[" << i << "]" << theVec_1[i] << "\t";
        cout << "theVec_2[" << i << "]" << theVec_2[i] << "\t";
        cout << "theVec_3[" << i << "]" << theVec_3[i] << "\n";
    }

    cout << "\n\t~ Contents using .at syntax! ~" << endl;
    for( int i = 0; i < 5 ; i++ ){
        cout << "theVec_1[" << i << "]" << theVec_1.at(i) << "\t";
        cout << "theVec_2[" << i << "]" << theVec_2.at(i) << "\t";
        cout << "theVec_3[" << i << "]" << theVec_3.at(i) << "\n";
    }

    cin.get();

    return 0;

}
