#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main(){
    system ( "clear" );

    int sum {0};
    for ( int i {0}; i<100; ++i ){
        sum += i;
    }
    cout << sum << endl;

    sum = 0;
    for ( int i {0}; i<200; i += 2 ){
        sum += i;
    }
    cout << sum << endl;

    sum = 45;
    for ( int i {}; i<244; i += 2 ){
        sum += i;
    }
    cout << sum << endl;

    fflush ( stdin );
    cin.get();
    return 0;
}
