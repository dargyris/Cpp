#include <iostream>
#include <cstring>
#include <cctype>

void printString(char[], const unsigned short, unsigned short* );

int main (){
    system("clear");
    unsigned short printCount {1};
    const unsigned short charLength {10};
    
    char myName[charLength] {};
    printString(myName, charLength, &printCount);

    strcpy(myName, "Diamantis");
    printString(myName, charLength, &printCount);

    strcat(myName, "b");
    printString(myName, charLength, &printCount);

    strcpy(myName, "a");
    printString(myName, charLength, &printCount);

    strcat(myName, "b");
    printString(myName, charLength, &printCount);

    strcpy(myName, "");
    printString(myName, charLength, &printCount);

    memset(myName, '\0', charLength);
    printString(myName, charLength, &printCount);

//    char myChar_1[] {"Some text here."};
//    std::puts(myChar_1);
//    std::printf("%s\n", myChar_1);
//    std::printf("%s \"%s\" %s %lu\n", "Size of", myChar_1, "is", strlen(myChar_1) );

    return 0;
}

void printString (char name[], unsigned short length, unsigned short* count) {
    std::printf("%hu%c %s\t%s %lu\n", (*count)++, '.', name, "length:", strlen(name));
    std::printf("%hu%c %s", (*count), '.',  "{ ");
    for( int i {0}; i < length ; ++i ){
        std::printf("%c%c", '|', name[i]);
    }
    std::puts("|| }\n");
    (*count) = 1;
}
