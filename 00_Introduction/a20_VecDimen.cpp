#include <iostream>
#include <vector>

using std::cout;
using std::cin;
using std::endl;
using std::vector;

int main() {

    system( "clear" );

    cout << "**********************************" << endl;
    cout << "********* ~ 2D Vectors ~ *********" << endl;
    cout << "**********************************" << endl;

    vector<vector<int>> movie_ratings {

        {1, 2, 5, 4}, 
        {3, 4, 1, 5}, 
        {5, 8, 1, 10}, 
        {2, 5, 3, 9}

    };

    cout << "\nPrinting with array syntax:" << endl;
    cout << "movie_ratings[0][0]: " << movie_ratings[0][0] << endl;
    cout << "movie_ratings[0][1]: " << movie_ratings[0][1] << endl;
    cout << "movie_ratings[0][2]: " << movie_ratings[0][2] << endl;
    cout << "movie_ratings[0][3]: " << movie_ratings[0][3] << endl;

    cout << "movie_ratings[1][0]: " << movie_ratings[1][0] << endl;
    cout << "movie_ratings[1][1]: " << movie_ratings[1][1] << endl;
    cout << "movie_ratings[1][2]: " << movie_ratings[1][2] << endl;
    cout << "movie_ratings[1][3]: " << movie_ratings[1][3] << endl;

    cout << "movie_ratings[2][0]: " << movie_ratings[2][0] << endl;
    cout << "movie_ratings[2][1]: " << movie_ratings[2][1] << endl;
    cout << "movie_ratings[2][2]: " << movie_ratings[2][2] << endl;
    cout << "movie_ratings[2][3]: " << movie_ratings[2][3] << endl;

    cout << "movie_ratings[3][0]: " << movie_ratings[3][0] << endl;
    cout << "movie_ratings[3][1]: " << movie_ratings[3][1] << endl;
    cout << "movie_ratings[3][2]: " << movie_ratings[3][2] << endl;
    cout << "movie_ratings[3][3]: " << movie_ratings[3][3] << endl;

    cout << "\nPrinting with vector syntax:" << endl;
    cout << "movie_ratings.at(0).at(0): " << movie_ratings.at(0).at(0) << endl;
    cout << "movie_ratings.at(0).at(1): " << movie_ratings.at(0).at(1) << endl;
    cout << "movie_ratings.at(0).at(2): " << movie_ratings.at(0).at(2) << endl;
    cout << "movie_ratings.at(0).at(3): " << movie_ratings.at(0).at(3) << endl;

    cout << "movie_ratings.at(1).at(0): " << movie_ratings.at(1).at(0) << endl;
    cout << "movie_ratings.at(1).at(1): " << movie_ratings.at(1).at(1) << endl;
    cout << "movie_ratings.at(1).at(2): " << movie_ratings.at(1).at(2) << endl;
    cout << "movie_ratings.at(1).at(3): " << movie_ratings.at(1).at(3) << endl;

    cout << "movie_ratings.at(2).at(0): " << movie_ratings.at(1).at(0) << endl;
    cout << "movie_ratings.at(2).at(1): " << movie_ratings.at(2).at(1) << endl;
    cout << "movie_ratings.at(2).at(2): " << movie_ratings.at(2).at(2) << endl;
    cout << "movie_ratings.at(2).at(3): " << movie_ratings.at(2).at(3) << endl;

    cout << "movie_ratings.at(3).at(0): " << movie_ratings.at(3).at(0) << endl;
    cout << "movie_ratings.at(3).at(1): " << movie_ratings.at(3).at(1) << endl;
    cout << "movie_ratings.at(3).at(2): " << movie_ratings.at(3).at(2) << endl;
    cout << "movie_ratings.at(3).at(3): " << movie_ratings.at(3).at(3) << endl;
    
    cout << endl;
    return 0;

}
