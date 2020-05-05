#include <iostream>
#include <vector>

using std::cout;
using std::cin;
using std::endl;
using std::vector;

int main() {

    system( "clear" );

    vector <char> test_vowels;      // <element type>
    vector <char> other_vowels (5); // (number of elements), or size of vector
                                    // constructor initialization 
    vector <char> few_vowels {'a', 'e', 'i', 'o', 'u'};

    vector <int> test_scores;
    vector <int> other_scores (10); // auto-initialization to 0
    vector <int> few_scores {100, 98, 89, 85, 93};

    vector <double> test_doubles (365, 80.); // init of 365 elements with
                                             // init value of 80. for all of them

    return 0;

}
