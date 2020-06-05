#include <iostream>
#include <string>
#include <vector>

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::vector;

int main(){
    system ( "clear" );

    short int* my_short_int_ptr;
    int* my_int_ptr {};
    int* my_arr_int_ptr[5] { nullptr };
    long* my_long_ptr { nullptr };
    string* my_string_ptr { nullptr };
    vector<int>* my_vec_int_ptr { nullptr };

    cout << "my_short_int_ptr\t: " << my_short_int_ptr << endl;
    cout << "my_int_ptr\t\t: " << my_int_ptr << endl;
    cout << "my_arr_int_ptr\t\t: " << my_arr_int_ptr << endl;
    cout << "my_long_ptr\t\t: " << my_long_ptr << endl;
    cout << "my_string_ptr\t\t: " << my_string_ptr << endl;
    cout << "my_vec_int_ptr\t\t: " << my_vec_int_ptr << endl;

    fflush ( stdin );
    cin.get();
    return 0;
}
