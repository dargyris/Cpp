#include <iostream>
#include <vector>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::vector;
using std::string;

void pass_by_ref1( int &num );
void pass_by_ref2( string &s );
void pass_by_ref3( vector<string> &v );
void print_vector( const vector<string> &v );

int main(){
    system ( "clear" );

    cout << "Pass by value: The default."
         << "\nA copy of the actual parameter is made" << endl;

    int num { 10 };
    int another_num { 20 };

    cout << "\nnum b4 calling pass_by_ref1: " << num << endl;
    pass_by_ref1(num);
    cout << "num after calling pass_by_ref1: " << num << endl;

    cout << "\nanother_num b4 calling pass_by_ref1: " << another_num << endl;
    pass_by_ref1(another_num);
    cout << "another_num after calling pass_by_ref1: " << another_num << endl;

    string name { "Diamanti" };
    cout << "\nname b4 calling pass_by_ref2: " << name << endl;
    pass_by_ref2(name);
    cout << "\nname after calling pass_by_ref2: " << name << endl;

    vector<string> stooges{ "Larry", "Moe", "Curly" };
    cout << "\nstooges b4 calling pass_by_ref3: ";
    print_vector(stooges);
    pass_by_ref3(stooges);
    cout << "stooges after calling pass_by_ref3: ";
    print_vector(stooges);

    fflush ( stdin );
    cin.get();
    return 0;
}

void pass_by_ref1( int &num ){
    num = 1000;
}

void pass_by_ref2( string &s ){
    s = "Changed!";
}

void pass_by_ref3( vector<string> &v ){
    v.clear();
}

void print_vector( const vector<string> &v ){
    cout << "{ ";
    for ( auto s: v ){
        cout << s << " ";
    }
    cout << "}" << endl;
}
