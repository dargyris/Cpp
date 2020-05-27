unsigned short printAll(char[], char[], char type);
void print( char[] );
void decipher( char[], char );
void debase68( char[] );


unsigned short printAll(char original[], char encrypted[], char type) {
    logo();
    printf( "\n\t\t\t\t~ Output ~" );
    printf( "\n\t=========================================================" );

    print(original);
    
    printf( "\n\t\t\t\tLength: %lu", strlen(original) );
    printf( "\n\t=========================================================" );

    print(encrypted);

    printf( "\n\t\t\t\tLength: %lu", strlen(encrypted) );
    printf( "\n\t=========================================================" );
    char deciphered[100]{};
    strcpy( deciphered, encrypted );
    decipher(deciphered, type);

    print(deciphered);

    printf( "\n\t\t\t\tLength: %lu", strlen(deciphered) );
    printf( "\n\t=========================================================" );

    fflush(stdin);
    fflush(stdout);
    std::cin.get();

    return 3;
}

void print ( char myString[] ){
    if ( strlen(myString) == 0 ){
        printf( "\n\n\t{ !! Empty !! }" );
    } else {
        printf( "\n\t{ " );
        for( int i {0}; i<strlen(myString); ++i ){
            printf( " %c", myString[i] );
        }
        printf( "  }\n" );
    }
}

void decipher( char myString[], char type ) {
    switch ( type ){
        case '1':     // Swap +-1
            {
                for( int i {0}; i<strlen(myString); i+=2 ){
                    char temp { myString[i] };
                    myString[i] = myString[i+1]  ;
                    myString[i+1] = temp;
                }
                memset( (myString + strlen(myString)/2), '\0', strlen(myString)/2 );
            }
            break;
        case '2':     // Swap Euler
            {
                for( int i {0}; i<(strlen(myString)/2); ++i ){
                    char temp { myString[i] };
                    myString[i] = myString[ strlen(myString)-1-i ];
                    myString[ strlen(myString)-1-i ] = temp;
                }
                memset( (myString + strlen(myString)/2), '\0', strlen(myString)/2 );
            }
            break;
        case '3':     // To Base-68 
            debase68(myString);
            break;
        default:
            printf( "Panic!" );
            break;
    }
}

void debase68 ( char myString[] ){
    char inCode[] {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789 .,:!?"};
    char outCode[] {" .,:0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz~`"};
    for( int i {0}; i<strlen(myString); ++i ){
        for( int j {0}; j<strlen(inCode); ++j ){
            if ( myString[i] == outCode[j] ){
                myString[i] = inCode[j];
                break;
            }
        }
    }
    memset( (myString + strlen(myString)/2), '\0', strlen(myString)/2 );
}
