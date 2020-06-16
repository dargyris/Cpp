#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main(){
    system ( "clear" );

    int sum {0};
    for ( int i {1}; i<371; i+=5 ){
        sum += i;
    }
    cout << sum << endl;

    fflush ( stdin );
    cin.get();
    return 0;
}
