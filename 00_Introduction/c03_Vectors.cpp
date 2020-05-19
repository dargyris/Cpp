#include <iostream>
#include <vector>

using std::cout;
using std::cin;
using std::endl;
using std::vector;

int main(){
    
    system( "clear" );

    // vector init methods:
    // vector <int> theVec;
    // vector <int> theVec (5);
    // vector <int> theVec { 5, 10 };

    vector <int> vector_1;
    vector_1.push_back(10);
    vector_1.push_back(20);
    cout << "vector_1.at(0): " << vector_1.at(0) << endl;
    cout << "vector_1.at(1): " << vector_1.at(1) << endl;
    cout << "vector_1 size: " << vector_1.size() << endl;
    cout << endl;

    vector <int> vector_2;
    vector_2.push_back(100);
    vector_2.push_back(200);
    cout << "vector_2.at(0): " << vector_2.at(0) << endl;
    cout << "vector_2.at(1): " << vector_2.at(1) << endl;
    cout << "vector_2 size: " << vector_2.size() << endl;
    cout << endl;

    vector <vector<int>> vector_2d;
    vector_2d.push_back(vector_1);
    vector_2d.push_back(vector_2);
    cout << "vector_2d.at(0).at(0): " << vector_2d.at(0).at(0) << endl;
    cout << "vector_2d.at(0).at(1): " << vector_2d.at(0).at(1) << endl;
    cout << "vector_2d.at(1).at(0): " << vector_2d.at(1).at(0) << endl;
    cout << "vector_2d.at(1).at(1): " << vector_2d.at(1).at(1) << endl;
    cout << "Size of vector_2d: " << vector_2d.size() << endl;
    cout << endl;

    cout << "\t~ Representation of 2d Vec:" << endl;
    cout << "{ " << vector_2d.at(0).at(0) << " " << vector_2d.at(0).at(1) <<  " }" << endl; 
    cout << "{ " << vector_2d.at(1).at(0) << " " << vector_2d.at(1).at(1) <<  " }" << endl; 
    cout << endl;

    vector_1.at(0) = 1000;
    cout << "\t~ After Change:" << endl;
    cout << "{ " << vector_2d.at(0).at(0) << " " << vector_2d.at(0).at(1) <<  " }" << endl; 
    cout << "{ " << vector_2d.at(1).at(0) << " " << vector_2d.at(1).at(1) <<  " }" << endl; 
    cout << endl;
    cout << "\t~ Vector 1 has changed:" << endl;
    cout << "{ " << vector_1.at(0) << " " << vector_1.at(1) << " }" << endl;

    return 0;
}
