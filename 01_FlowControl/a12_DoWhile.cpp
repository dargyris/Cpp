#include <iostream>
#include <vector>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::vector;
using std::string;

int main(){

    char selection {};
    do {
        system("clear");
        cout << "\n========================" << endl;
        cout << "1. Do this." << endl;
        cout << "2. Do that." << endl;
        cout << "3. Do the other thing." << endl;
        cout << "Q. Quit" << endl;
        cout << "\nEnter selection > ";
        cin >> selection;
        if ( selection == '1' ){
            cout << "You chose 1 - doing this." << endl;
            cin.get();
        } else if ( selection == '2' ) {
            cout << "You chose 2 - doing that" << endl;
            cin.get();
        } else if ( selection == '3' ){
            cout << "You chose 3 - doing the other thing" << endl;
            cin.get();
        } else if ( selection == 'q' || selection == 'Q' ){
            cout << "Goodbye!" << endl;
            cin.get();
        } else {
            cout << "Unknown option. Try again." << endl;
            cin.get();
        }
    } while ( selection != 'q' && selection != 'Q');
    // while ( !(selection == 'q' || selection == 'Q') )

    //cin.get();
    cin.get();
    return 0;
}
