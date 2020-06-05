unsigned short handlePrint( const vector<int> );
unsigned short add( vector<int> );
unsigned short mean( const vector<int> );
unsigned short min( vector<int> );
unsigned short max( vector<int> );

unsigned short handlePrint( const vector<int> &num ){
    if ( num.size() == 0 ){
        cout << "[]: Empty list." << endl;
    } else {
        print(num);
    }
    return 3;   // Legal choice, restores threeTries to 3
}

unsigned short add( vector<int> &num ){
    int num_to_add {};
    cout << "Enter int to add > ";
    cin >> num_to_add;
    num.push_back( num_to_add );
    cout << num_to_add << " added." << endl;
    return 3;   // Legal choice, restores threeTries to 3
}

unsigned short mean( const vector<int> &num ){
    if ( num.size() == 0 ){
        cout << "[]: Empty list." << endl;
    } else {
        cout << "Mean\t: " << calculate_mean( num ) << endl;
    }
    return 3;   // Legal choice, restores threeTries to 3
}

unsigned short min( vector<int> num ){
    return 3;   // Legal choice, restores threeTries to 3
}

unsigned short max( vector<int> num ){
    return 3;   // Legal choice, restores threeTries to 3
}
