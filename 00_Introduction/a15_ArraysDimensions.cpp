#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main() {

    system( "clear" );

    const int rows {5};
    const int cols {10};
    int ratings[rows][cols]{};

    for ( int i = 0; i < rows; i++ ){
        for ( int j = 0; j < cols; j++ ){
            if ( j == 0 ){
                ratings[i][j] = 5;
            } else {
                ratings[i][j] = 10;
            }
        }
    }

    for  ( int i = 0; i < rows; i++ ){
        cout << endl;
        for ( int j = 0; j < cols; j++ ){
            cout << ratings[i][j] << "\t";
        }
    }
    cout << endl;

    cout << "Creating a 2D array.\n";
    const int rw {3};
    const int cl {4};
    int my_array[rw][cl] {
        {0, 4, 3, 2}, 
        {2, 3, 5, 1}, 
        {4, 2, 4, 10}
    };

    for  ( int i = 0; i < rw; i++ ){
        cout << endl;
        for ( int j = 0; j < cl; j++ ){
            cout << my_array[i][j] << "\t";
        }
    }

    cout << endl;
    return 0;

}
