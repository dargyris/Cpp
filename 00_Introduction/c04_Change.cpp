#include <iostream>

using std::cout;
using std::cin;
using std::endl;

void divChange( int );
void modChange( int );

int main(){

    system( "clear" );

    cout << "\t~ Hello! ~" << endl;
    cout << "\tEnter cents > ";
    int cents{};
    cin >> cents;
    divChange(cents);

    modChange(cents);

    cin.get();
    cin.get();
    return 0;

}

void divChange( int cents ){
    cout << "\n\t~ Using / ~" << endl;

    const int dollar_value{100};
    const int quarter_value{25};
    const int dime_value{10};
    const int nickel_value{5};

    int dollars{}, quarters{}, dimes{}, nickels{}, pennies{};
    dollars = cents / dollar_value;
    cents -= dollars * dollar_value;
    quarters = cents / quarter_value;
    cents -= quarters * quarter_value;
    dimes = cents / dime_value;
    cents -= dimes * dime_value;
    nickels = cents / nickel_value;
    cents -= nickels * nickel_value;
    pennies = cents;
    cout << "\n\t• dollars\t: "<< dollars << "\tx 100 \t--> " << dollars * dollar_value << endl;
    cout << "\t• quarters\t: " << quarters << "\tx  25 \t--> " << quarters * quarter_value << endl;
    cout << "\t• dimes \t: " << dimes << "\tx  10 \t--> " << dimes * dime_value << endl;
    cout << "\t• nickels\t: " << nickels << "\tx   5 \t--> " << nickels *  nickel_value << endl;
    cout << "\t• pennies\t: " << pennies << "\tx   1 \t--> " << pennies *  1 << endl;
}

void modChange( int cents ){
    cout << "\n\t~ Using % ~" << endl;

    const int dollar_value{100};
    const int quarter_value{25};
    const int dime_value{10};
    const int nickel_value{5};

    int dollars{}, quarters{}, dimes{}, nickels{}, pennies{};
    dollars = cents / dollar_value;
    cents %= dollar_value;
    quarters = cents / quarter_value;
    cents %= quarter_value;
    dimes = cents / dime_value;
    cents %= dime_value;
    nickels = cents / nickel_value;
    cents %= nickel_value;
    pennies = cents;
    cout << "\n\t• dollars\t: "<< dollars << "\tx 100 \t--> " << dollars * dollar_value << endl;
    cout << "\t• quarters\t: " << quarters << "\tx  25 \t--> " << quarters * quarter_value << endl;
    cout << "\t• dimes \t: " << dimes << "\tx  10 \t--> " << dimes * dime_value << endl;
    cout << "\t• nickels\t: " << nickels << "\tx   5 \t--> " << nickels *  nickel_value << endl;
    cout << "\t• pennies\t: " << pennies << "\tx   1 \t--> " << pennies *  1 << endl;
}
