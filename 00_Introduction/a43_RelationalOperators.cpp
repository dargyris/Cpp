#include <ios>
#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main(){

    int num1{}, num2{};

    cout << std::boolalpha;
    cout << "\tEnter 2 ints > ";
    cin >> num1 >> num2;

    cout << "\n\t• num1" << " >  " << num2 << "\t: " << ( num1 > num2 ) << endl;
    cout << "\t• num1" << " >= " << num2 << "\t: " << ( num1 >= num2 ) << endl;
    cout << "\t• num1" << " <  " << num2 << "\t: " << ( num1 < num2 ) << endl;
    cout << "\t• num1" << " <= " << num2 << "\t: " << ( num1 <= num2 ) << endl;

    cin.get();
    cin.get();

    return 0;

}
