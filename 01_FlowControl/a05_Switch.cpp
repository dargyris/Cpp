#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main(){

    char grade {};
    cout << "\tWhat grade would you like in your exam? > ";
    cin >> grade;
    switch( grade ){
        case 'A': case 'a':
            cout << "You need 90 - 100 for an " << grade << endl;
            break;
        case 'B': case 'b':
            cout << "You need 80 - 89 for a " << grade << endl;
            break;
        case 'C': case 'c':
            cout << "You need 70 - 79 for a " << grade << endl;
            break;
        case 'D': case 'd':
            cout << "You need 60 - 69 for a " << grade << endl;
            break;
        case 'F': case 'f':
            {
                char confirm {};
                cout << "You sure? (y/n) > ";
                cin >> confirm;
                if ( confirm == 'y' || confirm == 'Y' ){
                    cout << "You sly little ankle biter!" << endl;
                } else if ( confirm == 'n' || confirm == 'N' ){
                    cout << "Lame!" << endl;
                } else {
                    cout << "Dunno 'bout that..." << endl;
                }
            }
            break;
        default:
            cout << "That's not a grade..." << endl;
    }

    cin.get();
    cin.get();

    return 0;

}
