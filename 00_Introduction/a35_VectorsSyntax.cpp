#include <iostream>
#include <vector>

using std::cout;
using std::cin;
using std::endl;
using std::vector;

void printVec(vector <int>);

int main(  ){
    
    system( "clear" );

//    Java:
//    int[] Arr = new int[];
//    int[] Arr = { 5, 2, 3 }
//    int Arr[0] {};
//    int Arr { 5, 2, 3 };
//    vector <int> theVec;
//    vector <int> theVec ( 5 );
//    vector <int> theVec { 5, 2, 3 };

    vector <int> theVec_1 { 100, 98, 89 };

    cout << "cin with array syntax" << endl;
    cin >> theVec_1[0];
    cin >> theVec_1[1];
    cin >> theVec_1[2];
    printVec(theVec_1);

    cout << "\ncin with .at() syntax" << endl;
    cin >> theVec_1.at(0);
    cin >> theVec_1.at(1);
    cin >> theVec_1.at(2);
    printVec(theVec_1);

    int score_to_add {0};
    cin >> score_to_add;
    theVec_1.push_back(score_to_add);
    printVec(theVec_1);

    cin.get();
    cin.get();
    return 0;
}

void printVec(vector <int> theVec){
    for( int i = 0; i < theVec.size(); i++ ){
        cout << "Element[" << i << "]: " << theVec[i] << endl;
    }
}
