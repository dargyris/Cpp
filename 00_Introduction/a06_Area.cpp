#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main(){

    int room_width {0};
    int room_length {0};

    cout << "Enter the width of the room: ";
    cin >> room_width;

    cout << "Enter the length of the room: ";
    cin >> room_length;

    cout << "The are of the room is " << room_width * room_length << " square feet." << endl;

    return 0;

}
