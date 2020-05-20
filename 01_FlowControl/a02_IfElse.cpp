#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main(){

    system( "clear" );

    int num{};
    const int target {10};

    cout << "Enter a number to be compared with " << target << " > ";
    cin >> num;

    if ( num >= target ){
        cout << "\n\t* * * * * * * * * * * * * * * * * *" << endl;
        cout << "\t" << num << " is greater than or equal to " << target << endl;
        int diff { num - target };
        cout << "\t" << num << " is " << diff << " greater than " << target << endl;
    } else {
        cout << "\n\t* * * * * * * * * * * * * * * * * *" << endl;
        cout << "\t" << num << " is less than " << target << endl;
        int diff { target - num };
        cout << "\t" << num << " is " << diff << " less than " << target << endl;
    }

    cout << endl;
    cin.get();
    cin.get();
    return 0;

}
