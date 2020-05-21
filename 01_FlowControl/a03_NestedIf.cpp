#include <iostream>

using std::cout;
using std::cin;
using std::endl;

void letterScore( int );

int main(){

    system( "clear" );

    int score {};
    cout << "\tEnter your score on the exam (0 - 100) > ";
    cin >> score;
    letterScore(score);

    cin.get();
    cin.get();
    return 0;

}

void letterScore( int score ){
    char letter_grade {};
    if ( score >= 0 && score <= 100 ){
        if ( score >= 90 ){
           letter_grade = 'A';
        } else if ( score >= 80 ){
           letter_grade = 'B';
        } else if ( score >= 70 ){
           letter_grade = 'C';
        } else if ( score >= 60 ){
           letter_grade = 'D';
        } else {
           letter_grade = 'F';
        }
        cout << "\tTranslates to: " << letter_grade << endl;
        if ( letter_grade == 'F' ){
            cout << "\tSorry, you must repeat this class." << endl; 
        } else {
            cout << "\tCongrats! " << endl;
        }
    } else {
        cout << "\tSorry, " << score << " is not in range." << endl;
    }
}
