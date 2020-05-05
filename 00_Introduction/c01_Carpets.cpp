#include <iostream>
 using std::cout;
 using std::cin;
 using std::endl;

 int main(){
    
    system( "clear" ); 

    cout << "********************************" << endl;
    cout << "****** ~ Happy Carpet \u00A9 ~ ******" << endl;
    cout << "********************************" << endl;

    int number_of_small_rooms {0};
    int number_of_large_rooms {0};
    cout << "\nHow many small rooms would you like cleaned? ";
    cin >> number_of_small_rooms;
    cout << "How many large rooms would you like cleaned? ";
    cin >> number_of_large_rooms;

    const double price_per_small_room {25.};
    const double price_per_large_room {35.};
    const double sales_tax {0.06};
    const int estimate_expiry {30}; // days

    cout << "\nEstimate for carpet cleaning service" << endl;
    cout << "------------------------------------" << endl;
    cout << "Number of small rooms: " << number_of_small_rooms << endl;
    cout << "Number of large rooms: " << number_of_large_rooms << endl;
    cout << "Price per small room: $" << price_per_small_room << endl;
    cout << "Price per large room: $" << price_per_large_room << endl;

    double cost_for_small = number_of_small_rooms * price_per_small_room;
    double cost_for_large = number_of_large_rooms * price_per_large_room;
    double cost_sum = cost_for_small + cost_for_large;
    cout << "Cost: $" << cost_sum << endl;

    double cost_tax = sales_tax * cost_sum;
    cout << "Tax: $" << cost_tax << endl;

    cout << "=================================" << endl;
    
    cout << "Total estimate: $" << cost_sum + cost_tax << endl;
    cout << "This estimate is valid for " << estimate_expiry << " days." << endl;

    return 0;

 }
