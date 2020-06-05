#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::vector;

void pass_by_value1( int num );
void pass_by_value2( string s );
void pass_by_value3( vector<string> v );
void print_vector( vector<string> v );

int main(){
    system("clear");

    int num {10};
    int another_num {20};

    cout << "num b4 calling pass_by_value1: " << num << endl;
    pass_by_value1(num);
    cout << "num after calling pass_by_value1: " << num << endl;

    cout << "\nanother_num b4 calling pass_by_value1: " << another_num << endl;
    pass_by_value1(another_num);
    cout << "another_num after calling pass_by_value1: " << another_num << endl;

    string name {"Diamantis"};
    cout << "\nname b4 calling pass_by_value2: " << name << endl;
    pass_by_value2(name);
    cout << "num after calling pass_by_value2: " << name << endl;

    vector<string> stooges { "Larry", "Moe", "Curly" };
    cout << "\nstooges b4 calling pass_by_value3: ";
    print_vector(stooges);
    pass_by_value3(stooges);
    cout << "stooges after calling pass_by_value3: ";
    print_vector(stooges);

    fflush(stdin);
    cin.get();
    return 0;
}

void pass_by_value1( int num ){
    num = 1000;
}

void pass_by_value2( string s ){
    s = "Changed!";
}

void pass_by_value3( vector<string> v ){
    v.clear();
}

void print_vector( vector<string> v ){
    for( auto s: v ) {
        cout << s << " ";
    }
    cout << endl;
}
