#include <iostream>
#include <vector>

using std::cout;
using std::cin;
using std::endl;
using std::vector;

void printVec(vector <int>);
void printVec(vector <vector<int>>);

int main(){

    system( "clear" );

    cout << "\t~ myVec {}~" << endl;
    vector <int> myVec {};
    printVec(myVec);

    cout << "\t~ myVecd {}~" << endl;
    vector <vector<int>> myVecd {};
    printVec(myVecd);

    cout << "=======================================\n" << endl;

    cout << "\t~ myVec_A {}~" << endl;
    vector <int> myVec_A (3);
    printVec(myVec_A);
    
    cout << "\t~ myVecd_A {}~" << endl;
    vector <vector<int>> myVecd_A (5);
    printVec(myVecd_A);

    cout << "=======================================\n" << endl;
    
    cout << "\t~ myVec_B {}~" << endl;
    vector <int> myVec_B (5, 5);
    printVec(myVec_B);

    cout << "\t~ myVecd_B {}~" << endl;
    vector <vector<int>> myVecd_B (5, myVec_B);
    printVec(myVecd_B);

    cout << "=======================================\n" << endl;

    cout << "\t~ myVec_C {}~" << endl;
    vector <int> myVec_C { 1, 2, 3, 4, 5 };
    printVec(myVec_C);
    
    cout << "\t~ myVecd_C {}~" << endl;
    vector <vector<int>> myVecd_C 
    { 
        myVec_C, myVec_C, myVec_C, myVec_C, myVec_C 
    };
    printVec(myVecd_C);

    cout << "=======================================\n" << endl;

    cout << "Changing myVecd_C elements manually:" << endl;
    myVecd_C[0] = myVec_A;
    myVecd_C[2] = myVec_B;
    myVecd_C[4] = myVec_A;
    printVec(myVecd_C);

    cin.get();

}

void printVec(vector <int> myVec){
    cout << "Size: " << myVec.size() << endl;
    cout << "\t{   ";
    for( int i=0; i<myVec.size(); i++ ){
        cout << myVec[i] << "   ";
    }
    cout << "}\n" << endl;
}

void printVec(vector <vector<int>> myVecd){
    cout << "Size: " << myVecd.size() << " (Master dimension)" << endl;
    cout << "{";
    for( int i=0; i < myVecd.size(); i++ ){
        cout << "\n\t{   ";
        for( int j=0; j < myVecd[i].size(); j++ ){
            cout << myVecd[i][j] << "   ";
        }
        cout << "}" << endl;
    }
    cout << "}\n" << endl;
}
