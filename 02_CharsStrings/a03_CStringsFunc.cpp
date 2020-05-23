#include <iostream>
#include <cstring>
#include <cctype>

char printMenu(unsigned short);
void inputString(char[]);
void printString(char[], unsigned short);
void toTemp(char[], char[]);
void makeCaps(char[]);
void makeLower(char[]);
void quit(bool*);
void tryAgain(unsigned short*, bool*);

int main (){
    
    const unsigned short strLength = 10;

    char myString[strLength] {};
    char myTemp[strLength] {};
    
    unsigned short threeTries {3};
    bool mainFlag {true};
    do {
        char choice = printMenu(threeTries);
        switch ( choice ){
            case '1':
                threeTries = 3;
                inputString(myString);
                break;
            case '2':
                {
                    threeTries = 3;
                    char toGo {};
                    std::printf( "\n\t%s\n\t%s\n\t%s\n\t%s", "Which one?", "1. String", "2. Temp", "> " );
                    std::scanf( " %c", &toGo);
                    toGo == '1'? printString(myString, strLength): printString(myTemp, strLength);
                    break;
                }
            case '3':
                threeTries = 3;
                toTemp(myString, myTemp);
                break;
            case '4':
                {
                    threeTries = 3;
                    char toGo {};
                    std::printf( "\n\t%s\n\t%s\n\t%s\n\t%s", "Which one?", "1. String", "2. Temp", "> " );
                    std::scanf( " %c", &toGo);
                    toGo == '1'? makeCaps(myString): makeCaps(myTemp);
                    break;
                }
            case '5':
                {
                    threeTries = 3;
                    char toGo {};
                    std::printf( "\n\t%s\n\t%s\n\t%s\n\t%s", "Which one?", "1. String", "2. Temp", "> " );
                    std::scanf( " %c", &toGo);
                    toGo == '1'? makeLower(myString): makeLower(myTemp);
                    break;
                }
            case 'q':
                quit(&mainFlag);
                break;
            default:
                tryAgain(&threeTries, &mainFlag);
                break;
        }
    } while ( mainFlag == true );

    return 0;
}

void inputString ( char str[] ){
    char in[30] {};
    std::printf( "\t%s", "> " );
    std::scanf( "%s", in );
    for( int i {0}; i < 9; ++i ){
        str[i] = in[i];
    }
}

void toTemp ( char str[], char tmp[] ){
    strcpy(tmp, str);
}

char printMenu (unsigned short threeTries){
    system("clear");
    unsigned short inputChars = 1;
    char choice[1] {};
    char cleanChoice {'0'};
    std::printf( "\n\n\n\t%s\n\t%s\n", "~ Hello! ~", "What would you like to do?" );
    std::printf( "\t%s\n", "1. Input string (10 characters)" );
    std::printf( "\t%s\n", "2. Print string" );
    std::printf( "\t%s\n", "3. To temp..." );
    std::printf( "\t%s\n", "4. To Capitals" );
    std::printf( "\t%s\n", "5. To Lower-case" );
    std::printf( "\n\t%s\n", "Q. Quit" );
    threeTries < 3 ? printf( "\n\t%s%hu%s\n", "Wrong input. Remaining: ", threeTries, " /3") : printf( "\n" );
    std::printf( "\t%s%hu%s", "(Max char input: ", inputChars, ") > " );
    std::scanf("%s", choice);
    cleanChoice = choice[0];
    if ( isalnum(choice[0]) ){
        cleanChoice = tolower(cleanChoice);
    }
    return cleanChoice;
}

void makeLower ( char str[] ){
    for( int i {0}; i < strlen(str); ++i ){
        str[i] = std::tolower(str[i]);
    }
}

void makeCaps ( char str[] ) {
    for( int i {0}; i < strlen(str); ++i ){
        str[i] = std::toupper(str[i]);
    }
}

void printString ( char str[], unsigned short length ){
    std::printf( "\n\t%s", "~ Printing ~");
    unsigned short lineNumber {1};
    std::printf( "\n\t%hu%c %s\t%s %lu\n", lineNumber++, '.', str, "Length:", strlen(str) );
    std::printf( "\t%hu%c %s", lineNumber++, '.', "{ " );
    for( int i {0}; i < strlen(str); ++i ){
        std::printf( "%c%c", '|', str[i] );
    }
    std::puts( "|| }" );
    std::printf( "\t%hu%c %s", lineNumber++, '.', "{ " );
    for( int i {0}; i < length; ++i ){
        std::printf( "%c%c", '|', str[i] );
    }
    std::puts( "| }\n" );
    lineNumber = 1;
    std::cin.ignore(1);
    std::cin.get();
}

void tryAgain (unsigned short* threeTries, bool* flag){
    (*threeTries) == 1? *flag = false: (*threeTries) --;
}

void quit (bool* flag){
    std::printf( "\t%s", "Goodbye!" );
    *flag = false;
}
