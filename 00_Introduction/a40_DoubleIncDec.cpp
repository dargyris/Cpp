#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main(){

    int i = 0;
    cout << "i\t: " << i << endl;
    cout << "i++\t: " << i++ << endl;
    cout << "++i\t: " << ++i << endl;

    int x = i = 0;
    cout << "\n\t~ x = i = 0 ~" << endl;
    cout << "i\t: " << i << endl;
    cout << "x\t: " << x << endl;
    x = i++;
    cout << "x = i++: " << x << endl;
    x = ++i;
    cout << "x = ++i: " << x << endl;
    

}
