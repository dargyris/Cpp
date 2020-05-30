void logo();            // Prints logo ascii art
char read();            // Returns char a-zA-Z0-9
                        // 0 is wrong input
                        // qQ become Q: Quit
void interact();        // Waits for user input + Enter
void wait( double );    // Waits 1 second
bool quit();            // Prints Goodbye, sets mainFlag = false
bool fail( unsigned short* ); // If tries > 1, tries--, returns true
                              // else, "Too much wrong input!"
                              // sets mainFlag = false

void logo(){

    system ( "clear" );
    cout << endl;
    cout << "\tLogoLogoLogoLogoLogoLogoLogoLogoLogoLogo" << endl;
    cout << "\tLogoLogoLogoLogoLogoLogoLogoLogoLogoLogo" << endl;
    cout << "\tLogoLogoLogoLogoLogoLogoLogoLogoLogoLogo" << endl;
    cout << "\tLogoLogoLogoLogoLogoLogoLogoLogoLogoLogo" << endl;
    cout << "\tLogoLogoLogoLogoLogoLogoLogoLogoLogoLogo" << endl;
    cout << "\tLogoLogoLogoLogoLogoLogoLogoLogoLogoLogo" << endl;
    cout << "\tLogoLogoLogoLogoLogoLogoLogoLogoLogoLogo" << endl;
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
    } else if ( regex_match( choice, regex("^[0-9]") ) ){
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
