#include <iostream>
#include <iomanip>

using std::cout;
using std::cin;
using std::endl;

double calc_cost( double base_cost, double tax_rate, double shipping );

int main(){
    system("clear");

    double base_cost {};
    double tax_rate {};
    double base_shipping {};

    cout << "Welcome!" << endl;
    cout << "Base cost: ";
    cin >> base_cost;
    cout << "\nTax rate: ";
    cin >> tax_rate;
    cout << "Base shipping: ";
    cin >> base_shipping;

    

    fflush(stdin);
    cin.get();
    return 0;
}

double calc_cost( double base_cost, double tax_rate = 0.06, double shipping = 3.50 ){
    return base_cost += ( base_cost * tax_rate );
}
