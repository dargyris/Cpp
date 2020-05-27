unsigned short printAll( string*, string*, char );
void print( string* );
void decipher( string*, char );
void debase66( string* );


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
    deciphered->assign(*encrypted);
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
            for( int i {0}; i<myString->length(); i+=2 ){
                if ( i == myString->length()-1 ){
                    break;
                }
                char temp { myString->at(i) };
                myString->at(i) = myString->at(i+1);
                myString->at(i+1) = temp;
            }
            myString->erase( myString->length()/2, myString->length()/2 );
            break;

        case '2':     // Swap Euler
            for( int i {0}; i<(myString->length()/2); ++i ){
                char temp { myString->at(i) };
                myString->at(i) = myString->at( myString->length()-1-i );
                myString->at( myString->length()-1-i ) = temp;
            }
            myString->erase( myString->length()/2, myString->length()/2 );
            break;

        case '3':     // To Base-66 
            {
            string inCode {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789 .,:!?"};
            string outCode {" .,:0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz~`"};
            for( int i {0}; i<myString->length(); ++i ){
                for( int j {0}; j<outCode.length(); ++j ){
                    if ( myString->at(i) == outCode.at(j) ){
                        cout << "\t\t: " << myString->at(i) << "\t> " 
                             << outCode.at(j) << "\t--> " << inCode.at(j) << endl;
                        wait(0.1);
                        myString->at(i) = inCode.at(j);
                        break;
                    }
                }
            }
            myString->erase( myString->length()/2, myString->length()/2 );
            }
//            debase66(myString);
            break;
        default:
            printf( "Panic!" );
            break;

    }
}

void debase66 ( string* myString ){
//    string inCode {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789 .,:!?"};
//    string outCode {" .,:0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz~`"};
//    for( int i {0}; i<myString->length(); ++i ){
//        for( int j {0}; j<myString->length(); ++j ){
//            if ( myString->at(i) == outCode.at(j) ){
//                cout << "\t\t: " << myString->at(i) << "\t> " 
//                     << outCode.at(j) << "\t--> " << inCode.at(j) << endl;
//                wait(0.5);
//                myString->at(i) = inCode.at(j);
//                break;
//            }
//        }
//    }
//    myString->erase( myString->length()/2, myString->length()/2 );
}
