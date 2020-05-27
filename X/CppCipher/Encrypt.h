unsigned short encrypt( string*, string*, char);
void cipher( string*, char );
void base68( string* );

unsigned short encrypt(string* original, string* encrypted, char type) {
    logo();
    cout << "\n\tPlease enter your message.\n\t> ";
    fflush(stdin);
    getline(cin, *original );
    encrypted->assign(*original);
    encrypted->append(*original);
    cipher( encrypted, type );

    fflush(stdin);
    fflush(stdout);
    return 3;
}

void cipher( string* myString, char type ) {
    switch ( type ){
        case '1':     // Swap +-1
            for( int i{0}; i<myString->length(); i+=2 ){
                if ( i == myString->length()-1 ){ // Never executes, since encrypted
                    break;                        // is 2*original and therefore always
                }                                 // even.
                char temp { myString->at(i) };
                myString->at(i) = myString->at(i+1);
                myString->at(i+1) = temp;
            }
            break;
            
        case '2':     // Swap Euler
            for( int i {0}; i<(myString->length()/2); ++i ){
                char temp { myString->at(i) };
                myString->at(i) = myString->at( myString->length()-1-i );
                myString->at( myString->length()-1-i ) = temp;
            }
            break;

        case '3':     // Base-66 
            base68(myString);
            break;
        default:
            printf( "Panic!" );
            break;

    }
}

void base68 ( string* myString ){
    string inCode {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789 .,:!?"};
    string outCode {" .,:0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz~`"};
    for( int i {0}; i<myString->length(); ++i ){
        for ( int j{0}; j<inCode.length(); ++j){
            if ( myString->at(i) == inCode.at(j) ){
                cout << "\t: " << myString->at(i) << "\t> " << inCode.at(j) << "\t--> " << outCode.at(j) << endl;
                myString->at(i) = outCode.at(j);
                wait(0.1);
                break;
            }
        }
    }
}
