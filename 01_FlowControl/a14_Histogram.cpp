#include <iostream>
#include <vector>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::vector;
using std::string;

int main(){
    system("clear");

    int num_items {};

    cout << "\tHow many data items do you have?\n\t> ";
    cin >> num_items;

    vector<int> data {};
    for( int i {1}; i<=num_items; ++i ){
        int data_item {};
        cout << "\tEnter data item " << i << " > ";
        cin >> data_item;
        data.push_back(data_item);
    }

    cout << "\nDisplaying histogram" << endl;
    for( auto val: data ){
        cout << "\n";
        for( int i {1}; i<=val; ++i ){
            cout << ( ( i%5 == 0 )? "*": "-" );
        }
    }

    cin.get();
    cin.get();
    return 0;
}
