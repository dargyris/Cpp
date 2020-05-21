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

    for( int i {0}; i<2; ++i ){
        cout << ( ( i==0 )? "" : "\n" ) << "i: " << i;
        cout << ( ( i==1 )? "\n": "");
//        ( ( i==0 )? cout << "i: " << i: cout << "\ni: " << i );
    }

    for( int i {1}; i<=10; ++i ){
        cout << i << endl;
    }

    cout << endl;
    for( int i {1}; i<=10; i+=2 ){
        cout << i << endl;
    }

    cout << endl;
    for( int i {10}; i>0; --i ){
        cout << i << endl;
    }

    cout << endl;
    for( int i {10}; i<=100; i+=10 ){
        if ( i%15 == 0 ){
            cout << i << endl;
        }
    }

    cout << endl;
    for( int i {1}, j {5}; i<=5; ++i, ++j ){
        cout << i << " + " << j << " = " << ( i+j ) << endl;
    }

    cout << endl;
    for( int i {1}; i<=100; ++i ){
        cout << i;
        if ( i%10 == 0 ){
            cout << endl;
        } else {
            cout << "\t";
        }
    }

    cout << endl;
    for( int i {1}; i<=100; ++i ){
        cout << ( ( i<10 )? "  ": " " );
        cout << i;
        cout << ( ( i%10 == 0 )? "\n": "" );
    }

    cout << endl;
    vector <int> nums { 10, 20, 30, 40, 50 };
    for( unsigned i {0}; i<nums.size(); ++i ){
        cout << nums.at(i) << endl;
    }

    //cin.get();
    cin.get();
    return 0;
}
