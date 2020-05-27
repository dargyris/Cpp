#include <unistd.h>

void interact();
void wait( double );

void interact (){
    cin.get();
}

void wait ( double time ){
    usleep(time*1000000);
}

char read() {
    string choice;
    getline(cin, choice);
    if ( choice.length() > 1 ){
        return '0';
    } else if ( regex_match( choice, regex("^[qQ]")) ) {
        return 'q';
    } else if ( regex_match( choice, regex( "^[123]")) ) {
        return choice.at(0);
    } else {
        return '0';
    }
}

