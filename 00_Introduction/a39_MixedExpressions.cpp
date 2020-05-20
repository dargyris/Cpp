#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main(){

    system( "clear" );
    
    int total_amount {100};
    int total_numbers {8};
    double average {0.};

    average = static_cast<double>(total_amount) / total_numbers;
    cout << average << endl;
    return 0;

}
