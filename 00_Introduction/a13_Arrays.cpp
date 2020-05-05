#include <iostream>

using std::cout;
using std::cin;
using std::endl;
using std::string;

int main(){

    system( "clear" );
    
    const int days_in_year {365};
    string title_of_the_day [days_in_year] {"Null"};

    title_of_the_day [0] = "A very nice day.";
    title_of_the_day [1] = "A sunny day!";

    for (int i = 0; i < 2; i++) {
        cout << "Title of the day: " << title_of_the_day [i] << endl;
    }

    const int months_in_year {12};
    string name_of_month [months_in_year] {"Diamantis"};

    name_of_month [0] = "Jan";
    name_of_month [1] = "Feb";
    name_of_month [2] = "Mar";
    name_of_month [3] = "Apr";
    name_of_month [4] = "May";
    name_of_month [5] = "Jun";

    for ( int i = 0; i < months_in_year; i++ ){
        cout << "Month: " << name_of_month [i] << endl;
    }

    const int days_in_week {7};
    string name_of_day [days_in_week] {"Null"};

}
