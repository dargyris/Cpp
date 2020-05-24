#include <iostream>
#include <vector>
#include <string>
#include <curses.h>

using std::cout;
using std::cin;
using std::endl;
using std::vector;
using std::string;

void logo();
char printMenu( unsigned short* );
void encrypt();

int main(){

    unsigned short threeTries {3};

    bool mainFlag {true};
    while ( mainFlag ){
        char choice = printMenu(&threeTries);

    }

    //cin.get();
    cin.get();
    return 0;
}

char printMenu ( unsigned short* threeTries ){
    logo();
    cout << "\t~ Welcome! ~" << endl;
    cout << "\tWhat would you like to do?" << endl;
    cout << "\t1. Encrypt Message" << endl;
    cout << "\t2. Decipher Message" << endl;
    cout << "\t3. Choose Cypher" << endl;
    cout << "\tQ. Quit" << endl;
    cout << "\n\tOnly single character choices are accepted.";
    cout << "\t> ";
    char choice[50] {};
    scanf("%s", choice);
    if (choice[1] != '\0'){
        return '0';
    }
    return choice[0];
}

void logo (){
    system("clear");
    cout << "\n\n\n";
    cout << "\t       _       _                   " << endl;
    cout << "\t      (_)     | |                  " << endl;
    cout << "\t   ___ _ _ __ | |__   ___ _ __     " << endl;
    cout << "\t  / __| | '_ \\| '_ \\ / _ \\ '__| \u2122" << endl;
    cout << "\t | (__| | |_) | | | |  __/ |       " << endl;
    cout << "\t  \\___|_| .__/|_| |_|\\___|_|     " << endl;
    cout << "\t        | |                       " << endl;
    cout << "\t        |_|                       " << endl;
    cout << endl;
}

void encrypt();
