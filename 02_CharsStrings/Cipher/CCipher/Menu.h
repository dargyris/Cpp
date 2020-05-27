void logo();
char read();
char printMenu( unsigned short* );

char printMenu ( unsigned short* threeTries ){
    logo();
    printf("\n\t\t~ Welcome! ~" );
    printf("\n\n\tWhat would you like to do?" );
    printf("\n\t1. Encrypt Message" );
    printf("\n\t2. Decipher Message" );
    printf("\n\t3. Choose Cypher" );
    printf("\n\tQ. Quit" );
    printf("\n\n\tOnly single character choices are accepted.");
    if ( (*threeTries) < 3 ){
        printf( "\n\t%hu/3 tries remaining", (*threeTries) );
    }
    printf("\n\t> ");
    char choice {};
    choice = read();
    return choice;
}

void logo (){
    system("clear");
    printf("\n\n\n");
    printf("\n\t       _       _                   " );
    printf("\n\t      (_)     | |                  " );
    printf("\n\t   ___ _ _ __ | |__   ___ _ __     " );
    printf("\n\t  / __| | '_ \\| '_ \\ / _ \\ '__| \u2122" );
    printf("\n\t | (__| | |_) | | | |  __/ |       " );
    printf("\n\t  \\___|_| .__/|_| |_|\\___|_|     " );
    printf("\n\t        | |                       " );
    printf("\n\t        |_|                       " );
    printf( "\n" );
}
