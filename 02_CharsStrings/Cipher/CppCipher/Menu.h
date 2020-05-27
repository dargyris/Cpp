void logo();
char read();
char printMenu( unsigned short* );

char printMenu ( unsigned short* threeTries ){
    logo();
    cout << "\t\t~ Welcome! ~" << endl;
    cout << "\n\tWhat would you like to do?" << endl;
    cout << "\t1. Encrypt Message" << endl;
    cout << "\t2. Decipher Message" << endl;
    cout << "\t3. Choose Cypher" << endl;
    cout << "\tQ. Quit" << endl;
    cout << endl;
    if ( (*threeTries) < 3 ){
        cout <<  "\t" << (*threeTries) << "/3 tries remaining" << endl;
    }
    cout << "\t> ";
    char choice {};
    choice = read();
    return choice;
}

void logo (){
    system("clear");
    cout << "\n\n" << endl;
    cout << "\t       _       _                   " << endl;
    cout << "\t      (_)     | |                  " << endl;
    cout << "\t   ___ _ _ __ | |__   ___ _ __     " << endl;
    cout << "\t  / __| | '_ \\| '_ \\ / _ \\ '__| \u2122" << endl;
    cout << "\t | (__| | |_) | | | |  __/ |       " << endl;
    cout << "\t  \\___|_| .__/|_| |_|\\___|_|     " << endl;
    cout << "\t        | |                       " << endl;
    cout << "\t        |_|                       " << endl;
    cout <<  "" << endl;
}
