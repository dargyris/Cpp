#include <iostream>

using std::cout;
using std::cin;
using std::endl;

void swap( int &a, int &b );

int main(){
    system ( "clear" );

    int x{10}, y{20};
    cout << x << " " << y << endl;
    swap( x, y );
    cout << x << " " << y << endl;

    fflush ( stdin );
    cin.get();
    return 0;
}

void swap ( int &a, int &b ){
    int temp = a;
    a = b;
    b = temp;
}
