#include <iostream>
#include <vector>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::vector;
using std::string;

int main(){
//    system("clear");

    int num{};
    cout << "Enter a positive int to start the countdown! > ";
    cin >> num;

    while ( num > 0 ){
        cout << num << endl;
        --num;
    }
    cout << "Blastoff!" << endl;

    int num_1{};
    cout << "Enter a positive int to count UP to > ";
    cin >> num_1;

    int i { 1 };
    while ( num_1 >= i ){
        cout << i << endl;
        i++;
    }

    int number {};

    cout << "Enter an int less than 100 > ";
    cin >> number;

    while ( number >= 100 ){
        cout << "Enter an int less than 100 > ";
        cin >> number;
    }
    cout << "Finally!" << endl;

    bool done {false};
    number = 0;

    while ( !done ){
        cout << "Enter an int between 1 and 5 > ";
        cin >> number;
        if ( number <= 1 || number >= 5 ){
            cout << "Out of range. Please try again." << endl;
        } else {
            cout << "Thanks!" << endl;
            done = true;
        }
    }

    cin.get();
    cin.get();
    return 0;
}
