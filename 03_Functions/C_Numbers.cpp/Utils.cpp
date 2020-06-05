void logo();            // Prints logo ascii art
char read();            // Legal choices: 1-9
                        // Wrong input -> 0
                        // qQ become Q: Quit
                        
void interact();        // Waits for user input + Enter
void wait( double );    // Waits <double> seconds
bool quit();            // Prints Goodbye, sets mainFlag = false
bool fail( unsigned short* ); // If tries > 1, tries--, returns true
                              // else, "Too much wrong input!"
                              // sets mainFlag = false

void logo(){

    system ( "clear" );
    cout << endl;
    cout << "                                      _            " << endl;
    cout << "                                     (_)           " << endl;
    cout << "     _ __ ____  __  __  __  _ __ ___  _ _ ___       " << endl;
    cout << "    | '_ ` _  \\/ _` \\ \\/ / | '_ ` _ \\| | '_  \\ " << endl; 
    cout << "    | | | | | | (_| |>  <  | | | | | | | | | |     " << endl;
    cout << "    |_| |_| |_|\\__,_/_/\\_\\ |_| |_| |_|_|_| |_|  " << endl;
    cout << endl;
}

char read(){

    fflush ( stdin );
    string choice {};
    getline(cin, choice);
    if ( choice.length() > 1 ){
        return '0';
    } else if ( regex_match( choice, regex("^[qQ]") ) ){
        return 'Q';
    } else if ( regex_match( choice, regex("^[1-9]") ) ){
        return choice.at(0);
    } else {
        return '0';
    }

}

void interact(){
    fflush( stdin );
    cin.get();
}

void wait( double time ){
    usleep( time*1000000 );
}

bool quit(){
    cout << "\n\t\t~ Goodbye! ~" << endl;
    fflush( stdout );
    return false;
}

bool fail( unsigned short* threeTries ){
    if ( (*threeTries) > 1 ){
        (*threeTries) -- ;
        return true;
    } else {
        cout << "\n\tToo much wrong input.\t\tQuitting..." << endl;
        fflush( stdout );
        return false;
    }
}
