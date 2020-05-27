#include <unistd.h>

void interact();
void wait( unsigned int);

void interact (){
    std::cin.get();
}

void wait ( unsigned int time ){
    usleep(time*1000000);
}

char read() {
    char choice[50] {};
    scanf( "%s", choice);
    if ( choice[1] != '\0' ){
        return '0';
    } else if ( choice[0] == '1' ){
        return '1';
    } else if ( choice[0] == '2' ){
        return '2';
    } else if ( choice[0] == '3' ){
        return '3';
    } else if ( choice[0] == 'q' || choice[0] == 'Q' ){
        return 'q';
    } else {
        return '0';
    }
}

