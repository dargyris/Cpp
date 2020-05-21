#include <iostream>
#include <vector>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::vector;
using std::string;

int main(){
    system("clear");

    int scores [] { 100, 90, 97 };

    for ( int score: scores ){
        cout << score << endl;
    }

    vector<int> theVec ( 5, 100 );
    for ( const int &i: theVec ){
        cout << i << endl;
    }

    double average_temp {}, running_sum {};
    int size {};

    for ( auto temp: { 60.2, 80.1, 90.0, 78.2 } ){
        running_sum += temp;
        ++size;
    }
    average_temp = running_sum / size;
    cout << "Average temp: " << average_temp << endl;

    for ( auto i: "Diamantis" ){
        cout << i << endl;
    }

    vector<char> theChar {};
    for ( auto i: "Diamantis" ){
        theChar.push_back(i);
    }

    cout << "Size of theChar: " << theChar.size() << endl;
    for( int i {0}; i<theChar.size(); ++i ){
        cout << theChar.at(i) << "  ";
    }

    //cin.get();
    cin.get();
    return 0;
}
