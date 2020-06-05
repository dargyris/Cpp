#include "Include.h"
#include "Utils.cpp"
#include "Menu.cpp"
#include "Funct_L1.cpp"
#include "Funct_L2.cpp"

int main(){
    system ( "clear" );

    vector<int> number {};

    unsigned short threeTries {3};
    bool mainFlag {true};
    do {

        char choice = printMenu( &threeTries );
        switch ( choice ){
            case '1':
                threeTries = handlePrint( number );
                break;
            case '2':
                threeTries = handleAdd( number );
                break;
            case '3':
                threeTries = mean( number );
                break;
            case '4':
                threeTries = min( number );
                break;
            case '5':
                threeTries = max( number );
                break;
            case 'Q':
                mainFlag = quit();
                break;
            default:
                mainFlag = fail( &threeTries );
                break;
        }
        
    } while ( mainFlag == true );

    wait( 1 );
    return 0;
}
