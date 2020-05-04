#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main(){

    int myAInt = 0, myBInt = 1, myCInt = 2;
    double myADouble = 0., myBDouble = 1, myCDouble = 2;
    cout << "*** Memory Locations ***" << endl;
    cout << "myAInt\t\t: " << myAInt << "\t" << &myAInt << endl;
    cout << "myBInt\t\t: " << myBInt << "\t" << &myBInt << endl;
    cout << "myCInt\t\t: " << myCInt << "\t" << &myCInt << endl;
    cout << "myADouble\t: " << myADouble << "\t" << &myADouble << endl;
    cout << "myBDouble\t: " << myBDouble << "\t" << &myBDouble << endl;
    cout << "myCDouble\t: " << myCDouble << "\t" << &myCDouble << endl;

    return 0;

}
