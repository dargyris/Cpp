#include <iostream>
#include <vector>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::vector;
using std::string;

int main(){
    system("clear");

    cout << "===============================================" << endl;
    cout << "\t~ Myltiplication table ~" << endl;

    cout << "{";
    for( int i {1}; i <= 10; ++i ){
        cout << "\n   {";
        for( int j {1}; j <= 10; ++j ){
            cout << ( ( i*j < 10 )? "   ": "  " ) << i*j;
        }
        cout << ( ( i == 10 )? "  }": "   }" );
    }
    cout << "\n}" << endl;

    cout << "===============================================" << endl;

    //cin.get();
    cin.get();
    return 0;
}
