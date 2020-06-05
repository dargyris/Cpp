void print( const vector<int> &vec );
double calculate_mean ( const vector<int> &vec );
int get_min ( const vector<int> &vec );
int get_max ( const vector<int> &vec );
bool find( const vector<int> &vec, int target );

void print( const vector<int> &vec ){
    cout << "\n\t{ ";
    for ( auto num: vec ){
        cout << num << " ";
    }
    cout << "}" << endl;
}

double calculate_mean ( const vector<int> &vec ){
    int total {};
    for ( auto num: vec ){
        total += num;
    }
    return static_cast<double>(total)/vec.size();
}

int get_min ( const vector<int> &vec ){
    int min { vec.at(0) };
    for ( auto num: vec ){
        if ( num < min ){
            min = num;
        }
    }
    return min;
}

int get_max ( const vector<int> &vec ){
    int max {vec.at(0)};
    for ( auto num: vec ){
        if ( num > max ){
            max = num;
        }
    }
    return max;
}

bool find( const vector<int> &vec, int target ){
    for ( auto num: vec ){
        if ( num == target ){
            return true;
        }
    }
    return false;
}
