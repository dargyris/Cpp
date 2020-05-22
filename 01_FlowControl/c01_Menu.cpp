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

    vector<int> numbers {};
    char selection {};

    do {
        // Display menu unconditionally
        cout << "\nP: Print numbers" << endl;
        cout << "A: Add a number" << endl;
        cout << "M: Display mean of the numbers" << endl;
        cout << "S: Display the smallest number" << endl;
        cout << "L: Display the largest number" << endl;
        cout << "Q: Quit" << endl;
        cout << "\n> ";
        cin >> selection;

        if( selection == 'P' || selection == 'p' ){
            if ( numbers.size() == 0 ){
                cout << "[] - the list is empty." << endl;
            } else {
                cout << "[ ";
                for ( auto num: numbers ){
                    cout << num << " ";
                }
                cout << "]" << endl;
            }
        } else if ( selection == 'A' || selection == 'a' ){
            int num_to_add {};
            cout << "Enter an int to add to the list > ";
            cin >> num_to_add;
            numbers.push_back(num_to_add);
            cout << num_to_add << " added." << endl;
        } else if ( selection == 'M' || selection == 'm' ){
            if ( numbers.size() == 0 ){
                cout << "[] - the list is empty." << endl;
            } else {
                int total {};
                for ( auto num: numbers ){
                    total += num;
                }
                cout << "Mean: " << static_cast<double>(total) / numbers.size() << endl;
            }
        } else if ( selection == 'S' || selection == 's' ){
            if ( numbers.size() == 0 ){
                cout << "[] - the list is empty." << endl;
            } else {
                int min = numbers.at(0);
                for ( auto num: numbers ){
                    if ( num < min ){
                        min = num;
                    }
                }
                cout << "Min: " << min << endl;
            }
        } else if ( selection == 'L' || selection == 'l' ){
            if ( numbers.size() == 0 ){
                cout << "[] - the list is empty." << endl;
            } else {
                int max = numbers.at(0);
                for ( auto num: numbers ){
                    if ( num > max ){
                        max = num;
                    }
                }
                cout << "Max: " << max << endl;
            }
        } else if ( selection == 'Q' || selection == 'q' ){
            cout << "Goodbye." << endl;
        } else {
            cout << "Unknown selection. Please try again." << endl;
        }

        
    } while ( selection != 'q' && selection != 'Q' );

    cin.get();
    cin.get();
    return 0;
}
