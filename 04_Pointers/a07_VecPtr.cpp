#include <iostream>
#include <vector>

using std::cout;
using std::cin;
using std::endl;
using std::vector;

void printVec(vector<int> vec);

int main(){
    system ( "clear" );

    vector<int> intVec { 3, 6, 9, 12, 15, 18, 21, 24, 27, 30 };
    printVec( intVec);
    cout << endl;

    int *pInt0 { &intVec[0] };
    cout << "\tpInt0 -> &intVec[0]:\t" << pInt0 << endl;
    cout << endl;

    fflush ( stdin );
    cin.get();
    return 0;
}

void printVec(vector<int> vec) {
    cout << "\t{";
    for ( auto v: vec ){
        cout << " " << v;
    }
    cout << " }" << endl;
}
