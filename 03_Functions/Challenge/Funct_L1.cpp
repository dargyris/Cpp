#include "Funct_L2.cpp"

unsigned short handlePrint( const vector<int> &vec );
unsigned short add( vector<int> &vec );
unsigned short mean( const vector<int> &vec );
unsigned short min( const vector<int> &vec );
unsigned short max( const vector<int> &vec );
unsigned short handleFind( const vector<int> &vec );

unsigned short handlePrint( const vector<int> &vec ){
    if ( vec.size() == 0 ){
        cout << "\n\t[]: Empty list." << endl;
    } else {
        print( vec );
    }
    wait(1);
    return 3;   // Legal choice, restores threeTries to 3
}

unsigned short add( vector<int> &vec ){
    int num_to_add {};
    cout << "\n\tEnter int to add > ";
    cin >> num_to_add;
    vec.push_back( num_to_add );
    cout << "\t" << num_to_add << " added." << endl;
    wait(1);
    return 3;   // Legal choice, restores threeTries to 3
}

unsigned short mean( const vector<int> &vec ){
    if ( vec.size() == 0 ){
        cout << "\n\t[]: Empty list." << endl;
    } else {
        cout << "\n\tMean\t: " << calculate_mean( vec ) << endl;
    }
    wait(1);
    return 3;   // Legal choice, restores threeTries to 3
}

unsigned short min( const vector<int> &vec ){
    if ( vec.size() == 0 ){
        cout << "\n\t[]: Empty list." << endl;
    } else {
        cout << "\n\tMin\t: " << get_min( vec ) << endl;
    }
    wait(1);
    return 3;   // Legal choice, restores threeTries to 3
}

unsigned short max( const vector<int> &vec ){
    if ( vec.size() == 0 ){
        cout << "\n\t[]: Empty list." << endl;
    } else {
        cout << "\n\tMax\t: " << get_max( vec ) << endl;
    }
    wait(1);
    return 3;   // Legal choice, restores threeTries to 3
}

unsigned short handleFind( const vector<int> &vec ){
    int target {};
    cout << "\n\tEnter number to find > ";
    cin >> target;
    if ( find( vec, target ) ){
        cout << "\t" << target << " was found." << endl;
    } else {
        cout << "\t" << target << " wasn't found." << endl;
    }
    wait(1);
    return 3;
}
