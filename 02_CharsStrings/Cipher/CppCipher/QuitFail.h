void quit ( bool* );
bool fail ( unsigned short* );

void quit ( bool* flag ) {
    cout << "\n\t\t~ Goodbye! ~" << endl;
    fflush(stdout);
    *flag = false;
}

bool fail ( unsigned short* threeTries ){
    if ( (*threeTries) > 1 ){
        (*threeTries) --;
        return true;
    } else {
        cout << "\n\tToo much wrong input.\t\tQuitting..." << endl;
        fflush(stdout);
        return false;
    }
}
