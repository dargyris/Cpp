#include <iostream>
#include <string>
#include <vector>

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::vector;

void print( int );
void print( double );
void print( string );
void print( string, string );
void print( vector<string> );

int main(){
    system ( "clear" );

    print( 100 );
    print( 'A' );

    print( 123.5 );
    print( 123.3F );

    print( "C-Style string" );

    string s { "C++ string" };
    print( s );

    print( "C-Style string", s );

    vector<string> three_stooges{ "Larry", "Moe", "Curly" };
    print( three_stooges );

    fflush ( stdin );
    cin.get();
    return 0;
}

void print( int num ){
    cout << "Printing int: " << num << endl;
}

void print( double num ){
    cout << "Printing double: " << num << endl;
}

void print( string s ){
    cout << "Printing string: " << s << endl;
}

void print( string s, string t ){
    cout << "Printing string string: " << s << " and " <<  t << endl;
}

void print( vector<string> v ){
    cout << "Printing vector of strings: " << endl;
    cout << "{ ";
    for ( auto s: v ){
        cout << s + " ";
    }
    cout << "}" <<  endl;
}
