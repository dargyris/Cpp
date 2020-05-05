#include <iostream>
#include <vector>

using std::cout;
using std::cin;
using std::endl;
using std::vector;

int main() {

    system( "clear" );

    vector <int> my_int_vector (10);
    cout << "my_int_vector[0]:\t" << my_int_vector[0] << endl;
    cout << "my_int_vector[1]:\t" << my_int_vector[1] << endl;
    cout << "my_int_vector[2]:\t" << my_int_vector[2] << endl;
    cout << "my_int_vector[3]:\t" << my_int_vector[3] << endl;
    cout << "my_int_vector[4]:\t" << my_int_vector[4] << endl;
    cout << "my_int_vector[5]:\t" << my_int_vector[5] << endl;
    cout << "my_int_vector[6]:\t" << my_int_vector[6] << endl;
    cout << "my_int_vector[7]:\t" << my_int_vector[7] << endl;
    cout << "my_int_vector[8]:\t" << my_int_vector[8] << endl;
    cout << "my_int_vector[9]:\t" << my_int_vector[9] << endl;

    cout << endl;
    cout << "my_int_vector[0]:\t" << my_int_vector.at(0) << endl;
    cout << "my_int_vector[1]:\t" << my_int_vector.at(1) << endl;
    cout << "my_int_vector[2]:\t" << my_int_vector.at(2) << endl;
    cout << "my_int_vector[3]:\t" << my_int_vector.at(3) << endl;
    cout << "my_int_vector[4]:\t" << my_int_vector.at(4) << endl;
    cout << "my_int_vector[5]:\t" << my_int_vector.at(5) << endl;
    cout << "my_int_vector[6]:\t" << my_int_vector.at(6) << endl;
    cout << "my_int_vector[7]:\t" << my_int_vector.at(7) << endl;
    cout << "my_int_vector[8]:\t" << my_int_vector.at(8) << endl;
    cout << "my_int_vector[9]:\t" << my_int_vector.at(9) << endl;

    cin >> my_int_vector.at(0);
    cin >> my_int_vector.at(1);
    cin >> my_int_vector.at(2);
    cin >> my_int_vector.at(3);
    cin >> my_int_vector.at(4);
    cin >> my_int_vector.at(5);
    cin >> my_int_vector.at(6);
    cin >> my_int_vector.at(7);
    cin >> my_int_vector.at(8);
    cin >> my_int_vector.at(9);

    my_int_vector.at(0) = 0;
    my_int_vector.at(1) = 10;
    my_int_vector.at(2) = 20;
    my_int_vector.at(3) = 30;
    my_int_vector.at(4) = 40;
    my_int_vector.at(5) = 50;
    my_int_vector.at(6) = 60;
    my_int_vector.at(7) = 70;
    my_int_vector.at(8) = 80;
    my_int_vector.at(9) = 90;

    my_int_vector.push_back(100);
    my_int_vector.push_back(110);
    my_int_vector.push_back(120);
    my_int_vector.push_back(130);
    my_int_vector.push_back(140);
    my_int_vector.push_back(150);
    my_int_vector.push_back(160);
    my_int_vector.push_back(170);
    my_int_vector.push_back(180);
    my_int_vector.push_back(190);

    cout << endl;
    return 0;

}
