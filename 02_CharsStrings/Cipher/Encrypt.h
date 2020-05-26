unsigned short encrypt(char [], char[], char);
void cipher( char [], char );
void base52( char []);

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

void cipher( char msg[], char type ) {
    switch ( type ){
        case '1':     // Swap +-1
            {
                for( int i {0}; i<strlen(msg); i+=2 ){
                    char temp { msg[i] };
                    msg[i] = msg[i+1]  ;
                    msg[i+1] = temp;
                }
            }
            break;
        case '2':     // Swap Euler
            {
                for( int i {0}; i<(strlen(msg)/2); ++i ){
                    char temp { msg[i] };
                    msg[i] = msg[ strlen(msg)-1-i ];
                    msg[ strlen(msg)-1-i ] = temp;
                }
            }
            break;
        case '3':     // To Base-24 
            base52(msg);
            break;
        default:
            printf( "Panic!" );
            break;
    }
}

void base52 ( char msg[] ){
    for( int i {0}; i<strlen(msg); ++i ){
        if ( msg[i] >= '0' && msg[i] <= '9' ){
        } else {
            switch ( msg[i] ){
                case 'a':
                    msg[i] = '1';
                    break;
                case 'b':
                    msg[i] = '2';
                    break;
                case 'c':
                    msg[i] = '3';
                    break;
                case 'd':
                    msg[i] = '4';
                    break;
                case 'e':
                    msg[i] = '5';
                    break;
                case 'f':
                    msg[i] = '6';
                    break;
                case 'g':
                    msg[i] = '7';
                    break;
                case 'h':
                    msg[i] = '8';
                    break;
                case 'i':
                    msg[i] = '9';
                    break;
                case 'j':
                    msg[i] = 'a';
                    break;
                case 'k':
                    msg[i] = 'b';
                    break;
                case 'l':
                    msg[i] = 'c';
                    break;
                case 'm':
                    msg[i] = 'd';
                    break;
                case 'n':
                    msg[i] = 'e';
                    break;
                case 'o':
                    msg[i] = 'f';
                    break;
                case 'p':
                    msg[i] = 'g';
                    break;
                case 'q':
                    msg[i] = 'h';
                    break;
                case 'r':
                    msg[i] = 'i';
                    break;
                case 's':
                    msg[i] = 'j';
                    break;
                case 't':
                    msg[i] = 'k';
                    break;
                case 'u':
                    msg[i] = 'l';
                    break;
                case 'v':
                    msg[i] = 'm';
                    break;
                case 'w':
                    msg[i] = 'n';
                    break;
                case 'x':
                    msg[i] = 'o';
                    break;
                case 'y':
                    msg[i] = 'p';
                    break;
                case 'z':
                    msg[i] = 'q';
                    break;
                case 'A':
                    msg[i] = 'r';
                    break;
                case 'B':
                    msg[i] = 's';
                    break;
                case 'C':
                    msg[i] = 't';
                    break;
                case 'D':
                    msg[i] = 'u';
                    break;
                case 'E':
                    msg[i] = 'v';
                    break;
                case 'F':
                    msg[i] = 'w';
                    break;
                case 'G':
                    msg[i] = 'x';
                    break;
                case 'H':
                    msg[i] = 'y';
                    break;
                case 'I':
                    msg[i] = 'z';
                    break;
                case 'J':
                    msg[i] = '!';
                    break;
                case 'K':
                    msg[i] = '@';
                    break;
                case 'L':
                    msg[i] = '#';
                    break;
                case 'M':
                    msg[i] = '$';
                    break;
                case 'N':
                    msg[i] = '%';
                    break;
                case 'O':
                    msg[i] = '^';
                    break;
                case 'P':
                    msg[i] = '&';
                    break;
                case 'Q':
                    msg[i] = '*';
                    break;
                case 'R':
                    msg[i] = '(';
                    break;
                case 'S':
                    msg[i] = ')';
                    break;
                case 'T':
                    msg[i] = '-';
                    break;
                case 'U':
                    msg[i] = '_';
                    break;
                case 'V':
                    msg[i] = '=';
                    break;
                case 'W':
                    msg[i] = '+';
                    break;
                case 'X':
                    msg[i] = '[';
                    break;
                case 'Y':
                    msg[i] = ']';
                    break;
                case 'Z':
                    msg[i] = '{';
                    break;
                case ' ':
                    msg[i] = '~';
                    break;
                case '.':
                    msg[i] = '`';
                    break;
            }
        }
    }
}
