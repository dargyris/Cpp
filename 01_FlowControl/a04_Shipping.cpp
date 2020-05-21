#include <iostream>
#include <iomanip>

using std::cout;
using std::cin;
using std::endl;

int main(){

    system( "clear" );

    int length{}, width{}, height{};
    double base_cost { 2.50 };

    const int tier1_threshold { 100 };
    const int tier2_threshold { 500 };

    int max_dimension_length { 10 };

    double tier1_surcharge { 0.10 };
    double tier2_surcharge { 0.25 };

    int package_volume {};

    cout << "Welcome to the package cost calculator!" << endl;
    cout << "Enter length, width and height of the package seperated by spaces:" << endl;
    cin >> length >> width >> height;

    bool isValid {length <= max_dimension_length 
               && width <= max_dimension_length 
               && length <= max_dimension_length };

    if ( isValid ){
        package_volume = length * width * height;
        double package_cost { base_cost };
        if ( package_volume > tier2_threshold ){
            package_cost += package_cost * tier2_surcharge;
            cout << "Adding tier 2 surcharge." << endl;
        } else if ( package_volume > tier1_threshold ){
            package_cost += package_cost * tier1_surcharge;
            cout << "Adding tier 1 surcharge." << endl;
        }
        cout << std::fixed << std::setprecision(2);
        cout << "\tVolume\t: " << package_volume << endl;
        cout << "\tCost\t: $" << package_cost << endl;
    } else {
        cout << "Sorry, dimensions exceeded." << endl;
    }

    cin.get();
    cin.get();
}
