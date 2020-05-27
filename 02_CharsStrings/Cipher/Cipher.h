unsigned short chooseCipher( char* );
void choices( char );

unsigned short chooseCipher( char* type) {
    unsigned short int threeTries {3};
    bool mainFlag = true;
    do {
        logo();
        cout << "\n\tChoose cypher type:" << endl;
        choices( *type );
        cout << "\t\t\t\t*Base_52 includes special characters:" << endl;
        cout << "\t\t\t\t\' \' (Space), and '.' (Period)" << endl;
        cout << "\tQ. Cancel" << endl;
        if ( threeTries < 3){
            cout << "\n\t/3 tries remaning" << threeTries << endl;
        }
        cout << "\n\t> ";
        char tmp{ read() };
        switch ( tmp ){
            case '1': case '2': case '3':
                (*type) = tmp;
                logo();
                cout << endl;
                choices( *type );
                wait(1);
                mainFlag = false;
                break;
            case 'q':
                mainFlag = false;
                break;
            case '0':
                if ( threeTries > 1 ){
                    threeTries --;
                    break;
                } else {
                    mainFlag = false;
                    break;
                }
            default:
                cout << "Panic!" << endl;
                break;
        }
    } while ( mainFlag );
    return 3;
}

void choices( char type ){
    cout << "\n\t1. Swap +- 1";
    cout << (type == '1'? "\t\t\t(NOW)\n": "\n");
    cout << "\t2. Swap Euler";
    cout << (type == '2'? "\t\t\t(NOW)\n": "\n");
    cout << "\t3. Base_66*";
    cout << (type == '3'? "\t\t\t(NOW)\n": "\n");
    fflush(stdout);
}
