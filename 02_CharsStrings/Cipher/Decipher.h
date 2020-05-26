unsigned short printAll( string*, string*, char );
void print( string* );
void decipher( string*, char );
void debase52( char[] );


unsigned short printAll( string* original, string* encrypted, char type ) {
    logo();
    cout << "\n\t\t\t\t~ Output ~" << endl;
    cout << "\t=========================================================" << endl;

    print( original );
    
    cout << "\t\t\t\tLength: " << original->length() << endl;
    cout << "\t=========================================================" << endl;

    print( encrypted );

    cout << "\t\t\t\tLength: " << encrypted->length() << endl;
    cout << "\t=========================================================" << endl;
    string * deciphered = new string();
    *deciphered = *encrypted;
    decipher( deciphered, type );

    print( deciphered );

    cout << "\t\t\t\tLength: " << deciphered->length() << endl;
    cout << "\t=========================================================" << endl;

    cin.get();

    return 3;
}

void print ( string* myString ){
    if ( myString->length() == 0 ){
        cout << "\t{ !! Empty !! }" << endl;
    } else {
        cout << "\n\t{ ";
        for( int i {0}; i<myString->length(); ++i ){
            cout << " " << myString->at(i);
        }
        cout << "  }\n" << endl;
    }
}

void decipher( string* myString, char type ) {
    switch ( type ){
        case '1':     // Swap +-1
            {
                for( int i {0}; i<myString->length(); i+=2 ){
                    char temp { myString->at(i) };
                    myString[i] = myString[i+1]  ;
                    myString[i+1] = temp;
                }
            }
            break;

//        case '2':     // Swap Euler
//            {
//                for( int i {0}; i<(strlen(myString)/2); ++i ){
//                    char temp { myString[i] };
//                    myString[i] = myString[ strlen(myString)-1-i ];
//                    myString[ strlen(myString)-1-i ] = temp;
//                }
//                memset( (myString + strlen(myString)/2), '\0', strlen(myString)/2 );
//            }
//            break;
//        case '3':     // To Base-24 
//            debase52(myString);
//            break;
//        default:
//            printf( "Panic!" );
//            break;

    }
}

void debase52 ( char myString[] ){
    for( int i {0}; i<strlen(myString); ++i ){
        if ( myString[i] >= '0' && myString[i] <= '9' ){
            continue;
        } else {
            switch ( myString[i] ) {
                case '1':
                    myString[i] =  'a';
                    break;
                case '2':
                    myString[i] =  'b';
                    break;
                case '3':
                    myString[i] =  'c';
                    break;
                case '4':
                    myString[i] =  'd';
                    break;
                case '5':
                    myString[i] =  'e';
                    break;
                case '6':
                    myString[i] =  'f';
                    break;
                case '7':
                    myString[i] =  'g';
                    break;
                case '8':
                    myString[i] =  'h';
                    break;
                case '9':
                    myString[i] =  'i';
                    break;
                case 'a':
                    myString[i] =  'j';
                    break;
                case 'b':
                    myString[i] =  'k';
                    break;
                case 'c':
                    myString[i] =  'l';
                    break;
                case 'd':
                    myString[i] =  'm';
                    break;
                case 'e':
                    myString[i] =  'n';
                    break;
                case 'f':
                    myString[i] =  'o';
                    break;
                case 'g':
                    myString[i] =  'p';
                    break;
                case 'h':
                    myString[i] =  'q';
                    break;
                case 'i':
                    myString[i] =  'r';
                    break;
                case 'j':
                    myString[i] =  's';
                    break;
                case 'k':
                    myString[i] =  't';
                    break;
                case 'l':
                    myString[i] =  'u';
                    break;
                case 'm':
                    myString[i] =  'v';
                    break;
                case 'n':
                    myString[i] =  'w';
                    break;
                case 'o':
                    myString[i] =  'x';
                    break;
                case 'p':
                    myString[i] =  'y';
                    break;
                case 'q':
                    myString[i] =  'z';
                    break;
                case 'r':
                    myString[i] =  'A';
                    break;
                case 's':
                    myString[i] =  'B';
                    break;
                case 't':
                    myString[i] =  'C';
                    break;
                case 'u':
                    myString[i] =  'D';
                    break;
                case 'v':
                    myString[i] =  'E';
                    break;
                case 'w':
                    myString[i] =  'F';
                    break;
                case 'x':
                    myString[i] =  'G';
                    break;
                case 'y':
                    myString[i] =  'H';
                    break;
                case 'z':
                    myString[i] =  'I';
                    break;
                case '!':
                    myString[i] =  'J';
                    break;
                case '@':
                    myString[i] =  'K';
                    break;
                case '#':
                    myString[i] =  'L';
                    break;
                case '$':
                    myString[i] =  'M';
                    break;
                case '%':
                    myString[i] =  'N';
                    break;
                case '^':
                    myString[i] =  'O';
                    break;
                case '&':
                    myString[i] =  'P';
                    break;
                case '*':
                    myString[i] =  'Q';
                    break;
                case '(':
                    myString[i] =  'R';
                    break;
                case ')':
                    myString[i] =  'S';
                    break;
                case '-':
                    myString[i] =  'T';
                    break;
                case '_':
                    myString[i] =  'U';
                    break;
                case '=':
                    myString[i] =  'V';
                    break;
                case '+':
                    myString[i] =  'W';
                    break;
                case '[':
                    myString[i] =  'X';
                    break;
                case ']':
                    myString[i] =  'Y';
                    break;
                case '{':
                    myString[i] =  'Z';
                    break;
                case '~':
                    myString[i] =  ' ';
                    break;
                case '`':
                    myString[i] =  '.';
                    break;
            }
        }
    }
    memset( (myString + strlen(myString)/2), '\0', strlen(myString)/2 );
}
