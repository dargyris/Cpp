#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main(){

    system( "clear" );

    enum Direction{
        left, right, up, down
    };

    Direction heading { left };

    switch( heading ){
        case left:
            cout << "Going left." << endl;
            break;
        case right:
            cout << "Going right." << endl;
            break;
        default:
            cout << "Going wherever." << endl;
    }

    cin.get();

    return 0;

}
