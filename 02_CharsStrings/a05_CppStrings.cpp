#include <iostream>
#include <string>
#include <iomanip>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main (){
    system("clear");

    string s1 {"This is a test."};

    cout << s1.substr(0,4) << endl;
    cout << s1.substr(5,2) << endl;
    cout << s1.substr(8,1) << endl;
    cout << s1.substr(10,4) << endl;
    cout << s1.substr(14,1) << endl;

    s1.erase(0,5);
    cout << "s1 is now: " << s1 << endl;
    
    cout << "=======================================" << endl;

    // C-Strings: cin.getline()
    
    string full_name {};
    cout << "Enter your full name > ";
    getline(cin, full_name);

    cout << "Full name: " << full_name << endl;

    cout << "=======================================" << endl;

    s1 = "The secret word is Boo";
    string word {};

    cout << "Enter the word to find > ";
    getline(cin, word);
//    cin >> word;
    size_t position = s1.find(word);
    if ( position != string::npos ){
        cout << "Found " << word << " at position: " << position << endl;
    } else {
        cout << "Sorry, " << word << " not found." << endl;
    }


    cin.get();

    return 0;
}
