#include <iostream>
#include <iomanip>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;

double calc_cost( double base_cost = 100., double tax_rate = 0.06, double shipping = 3.50 );
void greeting( string name, string prefix = "Mr.", string suffix = "" );

int main(){

    cout << std::fixed << std::setprecision( 2 );
    system("clear");

    double cost {};
    cost = calc_cost( 100.0, 0.08, 4.25 );
    cout << "Cost is: " << cost << endl;

    cost = calc_cost(100.0, 0.08);
    cout << "Cost is: " << cost << endl;

    cost = calc_cost(200.0);
    cout << "Cost is: " << cost << endl;

    cost = calc_cost();
    cout << "Cost is: " << cost << endl;

    greeting( "Glenn Jones", "Dr.", "M.D." );
    greeting( "James Rogers", "Professor", "Ph.D." );
    greeting( "Frank Miller", "Dr." );
    greeting( "william Smith" );
    greeting( "Mary Howard", "Mrs.", "Ph.D." );
    

    fflush(stdin);
    cin.get();
    return 0;
}

double calc_cost( double base_cost, double tax_rate, double shipping ){
    return base_cost += ( base_cost * tax_rate ) + shipping;
}

void greeting( string name, string prefix, string suffix ){
    cout << "Hello " << prefix + " " + name + " " + suffix << endl;
}
