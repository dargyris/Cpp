#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main(){

    system( "clear" );
    const double usd_per_eur {1.19};

    cout << "\t~ EUR to USD ~" << endl;
    cout << "\n\tEnter euros > ";
    double euros {0.};
    cin >> euros;
    double dollars = euros * usd_per_eur;
    cout << "\n\tEUR " << euros << " --> " << "USD " << dollars << endl;

    cin.get();
    return 0;

}
