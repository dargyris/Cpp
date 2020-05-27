#include "Include.h"
#include "Menu.h"
#include "General.h"
#include "QuitFail.h"
#include "Encrypt.h"
#include "Cipher.h"
#include "Decipher.h"

int main(){

    string * original = new string();
    string * encrypted = new string();
    char cipherType{'1'};
    unsigned short threeTries {3};
    bool mainFlag {true};
    do {
        char choice = printMenu( &threeTries );
        switch ( choice ){
            case '1':
                threeTries = encrypt( original, encrypted, cipherType );
                break;
            case '2':
                threeTries = printAll( original, encrypted, cipherType );
                break;
            case '3':
                threeTries = chooseCipher( &cipherType );
                break;
            case 'q':
                quit(&mainFlag);
                break;
            default:
                mainFlag = fail(&threeTries);
                break;
        }
    } while( mainFlag == true );
    wait(1);
    return 0;
}
