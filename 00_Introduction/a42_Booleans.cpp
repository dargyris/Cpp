#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main(){

    bool equal_result{false};
    bool not_equal_result{false};
    
    int num_1{}, num_2{};

    cout << "\tEnter two ints > ";
    cin >> num_1 >> num_2;
    equal_result = (num_1 == num_2);
    not_equal_result = (num_1 != num_2);
    
    cout << std::boolalpha;
    cout << "\t~ boolalpha ~" << endl;
    cout << "Comparison result (eq): " << equal_result << endl;
    cout << "Comparison result (neq): " << not_equal_result << endl;
    cout << std::noboolalpha;
    cout << "\n\t~ noboolalpha ~" << endl;
    cout << "Comparison result (eq): " << equal_result << endl;
    cout << "Comparison result (neq): " << not_equal_result << endl;

    char myChar_1{}, myChar_2{};
    cout << "\n\tEnter two chars > ";
    cin >> myChar_1 >> myChar_2;
    equal_result = (myChar_1 == myChar_2);
    not_equal_result = (myChar_1 != myChar_2);

    cout << std::boolalpha;
    cout << "\t~ boolalpha ~" << endl;
    cout << "Comparison result (eq): " << equal_result << endl;
    cout << "Comparison result (neq): " << not_equal_result << endl;
    cout << std::noboolalpha;
    cout << "\n\t~ noboolalpha ~" << endl;
    cout << "Comparison result (eq): " << equal_result << endl;
    cout << "Comparison result (neq): " << not_equal_result << endl;

    cout << "\n\t~ Important Note ~" << "\n\"For the computer at the moment " 
        << "12. and 11.9999999 ARE equal. That's the glass through which "
        << "computers see the world. At the moment. Such approximations "
        << "are universal and constant in computers. With humans they are "
        << "dynamic. We can appreciate the difference between those two numbers. "
        << "But are we using such information in every day life?"
        << "\nAn interesting thought. But this is computer class.\"" << endl;

    cin.get();
    cin.get();

}
