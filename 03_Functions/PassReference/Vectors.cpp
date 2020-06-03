#include <iostream>
#include <vector>

using std::cout;
using std::cin;
using std::endl;

void print( std::vector<int> );
void printRef( const std::vector<int> & );

int main(){
    system ( "clear" );

    std::vector<int> data { 1, 2, 3, 4, 5 };
    print( data );
    cout << endl;
    printRef( data );

    fflush ( stdin );
    cin.get();
    return 0;
}

void print( std::vector<int> v ){
    cout << "{ ";
    for ( auto num: v ){
        cout << num << " ";
    }
    cout << "}";
}

void printRef( const std::vector<int> &v ){
    cout << "{ ";
    for ( auto num: v ){
        cout << num << " ";
    }
    cout << "}";
}
