#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main(){

    system( "clear" );

    int num{};
    const int min {10};
    const int max {100};

    cout << "Enter a number between " << min << " and " << max << " > ";
    cin >> num;

    if( num >= min ){
        cout << "\n\t~ If statement No.1 ~" << endl;
        cout << "\t" << num << " is greater than or eaual to " << min << endl;

        int diff {num - min};
        cout << "\t" << num << " is " << diff << " greater than " << min << endl;
    }

    if( num <= max ){
        cout << "\n\t~ If statement No.2 ~" << endl;
        cout << "\t" << num << " is less than or equal to " << max << endl;

        int diff {max - num};
        cout << "\t" << num << " is " << diff << " less than " << max << endl;
    }

    if( num >= min && num <= max ){
        cout << "\n\t~ If statement No.3 ~" << endl;
        cout << "\t" << num << " is in range " << endl;
        cout << "\tThis means statements 1 and 2 must also display." << endl;
    }

    if( num == min || num == max ){
        cout << "\n\t~ If statement No.4 ~" << endl;
        cout << "\t" << num << " is right on a boundary. " << endl;
        cout << "\tThis means all 4 statements must also display." << endl;
    }

    cin.get();
    cin.get();
    return 0;

}
