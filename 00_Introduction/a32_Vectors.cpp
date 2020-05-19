//Vectors: an OO container defined in the STL
#include <iostream>
#include <vector>

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::vector;

int main(){

    system( "clear" );

    // Arrays: 
    // int theArray[5];
    // int theArray[5] {};
    // int theArray[] { 1, 2, 3, 4, 5 };
    // Java: int[] theArray = { 1, 2, 3, 4, 5 };

    // Vectors: auto init to 0!
    vector <int> theTestScores; // Empty vector
    vector <int> theTestScores_1 (10); // Has 10 elements.
    vector <int> theTestScores_2 ( 365, 80 ); // Initializes 365 vector elements of
                                              // type int to the value 80
    vector <int> theTestScores_3 { 100, 98, 89, 85, 93 };

}
