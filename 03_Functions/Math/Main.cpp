#include <iostream>
#include <cmath>
#include <cstdlib>  // rand()
#include <ctime>    // time()
#include <iomanip>

using std::cout;
using std::cin;
using std::endl;

void mathDemo();
void randomDemo();

int main(){
    system("clear");

    cout << std::setprecision(2);
    cout << std::fixed;

//    mathDemo();

    randomDemo();

    fflush(stdin);
    cin.get();
    return 0;
}

void randomDemo (){
    int random_number {};
    size_t count {10};
    int min {1}, max {6};
    cout << "RAND_MAX on my system is: " << RAND_MAX << endl;
    srand(time(nullptr));

    for( int i {1}; i<=count; ++i ){
        random_number = rand()%max + min;
        cout << random_number << endl;
    }
}

void mathDemo (){
    double num {};

    cout << "Enter a number (double)> ";
    cin >> num;

    cout << endl;
    cout << "\tsqrt\t: " << sqrt(num) << endl;
    cout << "\tcbrt\t: " << cbrt(num) << endl;
    cout << "\tsin\t: " << sin(num) << endl;
    cout << "\tcos\t: " << cos(num) << endl;
    cout << "\tceil\t: " << ceil(num) << endl;
    cout << "\tfloor\t: " << floor(num) << endl;
    cout << "\tround\t: " << round(num) << endl;

    double power {};

    cout << "\nEnter power to raise> ";
    cin >> power;
    cout << num << " raised to the " << power << ": " << pow(num, power) << endl;
}
