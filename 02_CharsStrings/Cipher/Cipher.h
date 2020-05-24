unsigned short chooseCipher( char* );
void choices( char * );

unsigned short chooseCipher( char* type) {
    unsigned short int threeTries {3};
    bool mainFlag = true;
    do {
        logo();
        printf( "\n\tChoose cypher type:\n" );
        choices(type);
        printf( "\n\tQ. Cancel" );
        if ( threeTries < 3){
            printf( "\n\n\t%hu/3 tries remaning", threeTries );
        }
        printf( "\n\n\t> " );
        char tmp{ read() };
        switch ( tmp ){
            case '1': case '2': case '3':
                (*type) = tmp;
                logo();
                printf( "\n\n" );
                choices(type);
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
                printf( "Panic!" );
                break;
        }
    } while ( mainFlag );
    return 3;
}

void choices( char* type ){
    printf( "\n\t1. Swap +- 1" );
    printf( *type == '1'? "\t\t\t(NOW)": "" );
    printf( "\n\t2. Swap Euler" );
    printf( *type == '2'? "\t\t\t(NOW)": "" );
    printf( "\n\t3. Base_52" );
    printf( *type == '3'? "\t\t\t(NOW)": "" );
    fflush(stdout);
}
