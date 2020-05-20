#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main(){

    system( "clear" );

    int total{};
    int num_1{}, num_2{}, num_3{};
    const int count {3};

    cout << "Enter 3 ints > ";
    cin >> num_1 >> num_2 >> num_3;

    total = num_1 + num_2 + num_3;

    double average{};
    average = static_cast<double>(total) / count;
    cout << "Numbers: " << num_1 << ", " << num_2 << ", " << num_3 << endl;
    cout << "Sum: " << total << endl;
    cout << "Average: " << average << endl;

    cin.get();
    cin.get();
    return 0;

}
