#include <iostream>
#include <vector>

using std::cout;
using std::cin;
using std::endl;
using std::vector;

int main(  ){

    system( "clear" );
    //vector <char> vowels;
    //char vowels[] {};
    //vector <char> vowels ( 5 );
    //char vowels[5] {} ;
    //vector <char> vowels { 'a', 'e', 'i', 'o', 'u' };
    //char vowels[] { 'a', 'e', 'i', 'o', 'u' };

    vector <char> vowels { 'a', 'e', 'i', 'o', 'u' };
    cout << "vowels[0]" << vowels[0] << endl;
    cout << "vowels[4]" << vowels[4] << endl;
    cout << endl;

    vector <int> test_scores_1 (3);
    vector <int> test_scores_2 (3, 100);
    vector <int> test_scores_3 { 100, 98, 89 };
    cout << "test_scores_3[0]: " << test_scores_3[0] << endl;
    cout << "test_scores_3[1]: " << test_scores_3[1] << endl;
    cout << "test_scores_3[2]: " << test_scores_3[2] << endl;
    cout << endl;
    cout << "test_scores_3[0]: " << test_scores_3.at(0) << endl;
    cout << "test_scores_3[1]: " << test_scores_3.at(1) << endl;
    cout << "test_scores_3[2]: " << test_scores_3.at(2) << endl;
//    java: arrayName.length;
    cout << "There are " << test_scores_3.size() << " elements in the vector." << endl;
//    Bounds check by .at();
//    cout << "test_scores_3[3]: " << test_scores_3.at(3) << endl;

    // cin.get();

    return 0;

}
