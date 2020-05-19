#include <iostream>
#include <stdexcept>
#include <vector>

using std::cout;
using std::cin;
using std::endl;
using std::vector;

int main(  ){

    system( "clear" );

//    Java:
//    int[][] myArray = new int[2][2];
//    C++:
//    int myArray[2][2] = {};

    vector <vector <int>> movie_ratings
     {
         { 1, 2, 3, 4, },
         { 1, 2, 4, 2, },
         { 3, 2, 5, 2, }
     };

    cout << "movie_ratings[0][0]: " << movie_ratings[0][0] << endl;
    cout << "movie_ratings[0][1]: " << movie_ratings[0][1] << endl;
    cout << "movie_ratings[0][1]: " << movie_ratings[0][2] << endl;
    cout << "movie_ratings[0][1]: " << movie_ratings[0][3] << endl;
    cout << endl;

    cout << "movie_ratings[1][0]: " << movie_ratings[1][0] << endl;
    cout << "movie_ratings[1][1]: " << movie_ratings[1][1] << endl;
    cout << "movie_ratings[1][2]: " << movie_ratings[1][2] << endl;
    cout << "movie_ratings[1][3]: " << movie_ratings[1][3] << endl;
    cout << endl;

    cout << "movie_ratings[0][0]: " << movie_ratings.at(0).at(0) << endl;
    cout << "movie_ratings[0][1]: " << movie_ratings.at(0).at(1) << endl;
    cout << "movie_ratings[0][2]: " << movie_ratings.at(0).at(2) << endl;
    cout << "movie_ratings[0][3]: " << movie_ratings.at(0).at(3) << endl;
    cout << endl;

    return 0;

}
