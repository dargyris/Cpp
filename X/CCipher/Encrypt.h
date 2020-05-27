unsigned short encrypt(char [], char[], char);
void cipher( char [], char );
void base68( char []);

unsigned short encrypt(char message[], char encrypted[], char type) {
    logo();
    printf( "\n\tPlease enter your message. (Max 50 characters.)\n\t> " );
    fflush(stdin);
    scanf( "%[^\n]", message );
    strcpy( encrypted, message );
    strcat( encrypted, message );
    cipher( encrypted, type );

    fflush(stdin);
    fflush(stdout);
    return 3;
}

void cipher( char myString[], char type ) {
    switch ( type ){
        case '1':     // Swap +-1
            {
                for( int i {0}; i<strlen(myString); i+=2 ){
                    char temp { myString[i] };
                    myString[i] = myString[i+1]  ;
                    myString[i+1] = temp;
                }
            }
            break;
        case '2':     // Swap Euler
            {
                for( int i {0}; i<(strlen(myString)/2); ++i ){
                    char temp { myString[i] };
                    myString[i] = myString[ strlen(myString)-1-i ];
                    myString[ strlen(myString)-1-i ] = temp;
                }
            }
            break;
        case '3':     // Match 68 characters
            base68(myString);
            break;
        default:
            printf( "Panic!" );
            break;
    }
}

void base68 ( char myString[] ){
    char inCode[] {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789 .,:!?"};
    char outCode[] {" .,:0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz~`"};
    for( int i {0}; i<strlen(myString); ++i ){
        for( int j {0}; j<strlen(inCode); ++j ){
            if ( myString[i] == inCode[j] ){
                myString[i] = outCode[j];
                break;
            }
        }
    }
}
