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

    int c {10};
    cout << "\tc{5}\t" << c << "\t\t" << &c << "\t" 
         << typeid(c).name() << "\t" << sizeof(c) << endl;

    int *B {&c};
    cout << "\tB{&a}\t" << B << "\t" << &B << "\t"
         << typeid(B).name() << "\t" << sizeof(B) << endl;

    int d {*B};
    cout << "\td{*B}\t" << d << "\t\t" << &d << "\t"
         << typeid(c).name() << "\t" << sizeof(d) << endl;
    

    fflush ( stdin );
    cin.get();
    return 0;
}

