#include <iostream>

using std::cout;
using std::cin;
using std::endl;

unsigned long long factorial( unsigned long long n );
unsigned long long fibonacci( unsigned long long n );

int main(){
    system ( "clear" );

    cout << "factorial: " << factorial(10) << endl;

    cout << "fibonacci: " << fibonacci(10) << endl;

    fflush ( stdin );
    cin.get();
    return 0;
}

unsigned long long factorial( unsigned long long n ){
    if ( n == 0 ){
        return 1;
    } else {
        return n * factorial( n-1 );
    }
}

unsigned long long fibonacci( unsigned long long n ){
    if ( n <= 1 ){
        return n;
    } else {
        return fibonacci( n-1 ) + fibonacci(n-2);
    }
}
