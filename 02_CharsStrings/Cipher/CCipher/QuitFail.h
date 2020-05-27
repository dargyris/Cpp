void quit ( bool* );
bool fail ( unsigned short* );

void quit ( bool* flag ) {
    printf( "\n\t\t~ Goodbye! ~" );
    fflush(stdout);
    *flag = false;
}

bool fail ( unsigned short* threeTries ){
    if ( (*threeTries) > 1 ){
        (*threeTries) --;
        return true;
    } else {
        printf( "\n\tToo much wrong input.\t\tQuitting..." );
        fflush(stdout);
        return false;
    }
}
