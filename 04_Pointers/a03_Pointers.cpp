#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main(){
    system ( "clear" );
    
    cout << "\tVar\tValue\t\tAddress\t\tType\tSize" << endl;
    cout << "\t----------------------------------------------------" << endl; 
    int a {5};
    cout << "\ta{5}\t" << a << "\t\t" << &a << "\t" 
         << typeid(a).name() << "\t" << sizeof(a) << endl;

    int *A {&a};
    cout << "\tA{&a}\t" << A << "\t" << &A << "\t"
         << typeid(A).name() << "\t" << sizeof(A) << endl;

    int b {*A};
    cout << "\tb{*A}\t" << b << "\t\t" << &b << "\t"
         << typeid(a).name() << "\t" << sizeof(b) << endl;
    

    fflush ( stdin );
    cin.get();
    return 0;
}

