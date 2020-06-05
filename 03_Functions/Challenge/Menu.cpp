char printMenu( unsigned short* );

char printMenu( unsigned short* threeTries ){

        logo();
        cout << "\t\t~ Welcome! ~" << endl;
        cout << "\t\tPlease choose:" << endl;
        cout << "\t\t1. Print" << endl;
        cout << "\t\t2. Add" << endl;
        cout << "\t\t3. Mean" << endl;
        cout << "\t\t4. Minimum" << endl;
        cout << "\t\t5. Maximum" << endl;
        cout << "\t\t6. Find a number" << endl;
        cout << "\t\tQ. Quit" << endl;
        if ( *threeTries < 3 ){
            cout << "\n\t\tBad input. Rem tries: " << *threeTries << "/3\n\t\t> ";
        } else {
            cout << "\n\t\t> ";
        }

    return read();
}
