#include "Include.h"
#include "Utils.cpp"
#include "Menu.cpp"
#include "Func.cpp"

int main(){
    system ( "clear" );

    unsigned short threeTries {3};
    bool mainFlag {true};
    do {

        char choice = printMenu( &threeTries );
        switch ( choice ){
            case '1':
                threeTries = fun1();
                break;
            case '2':
                threeTries = fun2();
                break;
            case '3':
                threeTries = fun3();
                break;
            case '4':
                threeTries = fun4();
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
