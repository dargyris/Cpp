#include <iostream>
#include <iomanip>

using std::cout;
using std::cin;
using std::endl;

double calc_cost( double base_cost, double tax_rate, double shipping );

int main(){
    system("clear");

    

    fflush(stdin);
    cin.get();
    return 0;
}

double calc_cost( double base_cost, double tax_rate = 0.06, double shipping = 3.50 ){
    return base_cost += ( base_cost * tax_rate );
}
