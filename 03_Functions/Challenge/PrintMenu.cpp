char printMenu( unsigned short* );

char printMenu( unsigned short* threeTries ){

        logo();
        cout << "\t\t~ Welcome! ~" << endl;
        cout << "\t\tPlease choose:" << endl;
        cout << "\t\t1." << endl;
        cout << "\t\t2." << endl;
        cout << "\t\t3." << endl;
        cout << "\t\t4." << endl;
        cout << "\t\tQ." << endl;
        if ( *threeTries < 3 ){
            cout << "\n\t\tBad input. Rem tries: " << *threeTries << "/3\n\t\t> ";
        } else {
            cout << "\n\t\t> ";
        }

    return read();
}
