#include <iostream>
#include <cstring>  // Character - based strings
#include <cctype>   // Character - based functions

using std::cout;
using std::cin;
using std::endl;
using std::string;

int main(){
    system("clear");

    char first_name [20] {};
    char last_name [20] {};
    char full_name [50] {};
    char temp[50] {};

    cout << "\tName > ";
    cin.getline(first_name, 20);
    cout << "\tLast name > ";
    cin.getline(last_name, 20);

    cout << "Hello, " << first_name << " your first name has: " 
         << strlen(first_name) << " characters." << endl;
    cout << "And your last name, " << last_name << " has: " 
         << strlen(last_name) << " characters." << endl;

    strcpy(full_name, first_name);
    strcat(full_name, " ");
    strcat(full_name, last_name);
    cout << "Full name: " << full_name << " Size: " << strlen(full_name) << endl;
    cout << "====================================" << endl;

    strcpy(full_name, "");
    cout << "Name > ";
    cin.getline(full_name, 50);

    cout << "Full name: " << full_name << " Size: " << strlen(full_name) << endl;
    cout << "====================================" << endl;
    
    strcpy(temp, full_name);
    if ( strcmp( temp, full_name ) == 0 ){
        cout << temp << " and " << full_name << " are the same." << endl;
    } else {
        cout << temp << " and " << full_name << " are different." << endl;
    }
    cout << "====================================" << endl;

    for( size_t i {0}; i < strlen(full_name); ++i ){
        if ( isalpha( full_name[i] ) ){
            full_name[i] = toupper(full_name[i]);
        }
    }
    cout << "Full name: " << full_name << endl;
    cout << "====================================" << endl;

    if ( strcmp( temp, full_name ) == 0 ){
        cout << temp << " and " << full_name << " are the same." << endl;
    } else {
        cout << temp << " and " << full_name << " are different." << endl;
    }
    cout << "====================================" << endl;

    cout << temp << " vs " << full_name << " : " << strcmp(temp, full_name) << endl;
    cout << full_name << " vs " << temp << " : " << strcmp(full_name, temp) << endl;


    cin.get();
    return 0;
}
