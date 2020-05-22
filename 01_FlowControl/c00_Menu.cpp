#include <iostream>
#include <vector>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::vector;
using std::string;

char printMenu();
vector<double> populateVector(vector<double>);
void printVector(vector<double>);
void vectorMean(vector<double>);
void minElement(vector<double>);
void maxElement(vector<double>);

int main(){

    vector<double> theVector {};
    bool mainFlag = true;
    while( mainFlag ){
        system("clear");
        int selection {printMenu()};
        switch(selection){
            case 'O': case 'o':
                theVector = populateVector(theVector);
                system("sleep 1");
                break;
            case 'P': case 'p':
                printVector(theVector);
                cin.get();
                break;
            case 'A': case 'a':
                theVector = populateVector(theVector);
                cin.get();
                break;
            case 'M': case 'm':
                vectorMean(theVector);
                cin.get();
                break;
            case 'S': case 's':
                minElement(theVector);
                cin.get();
                break;
            case 'L': case 'l':
                maxElement(theVector);
                cin.get();
                break;
            case 'Q': case 'q':
                cout << "\n\tBye bye!" << endl;
                system("sleep 1");
                mainFlag = false;
                break;
            default:
                cout << "\tUnknown choice. Please try again." << endl;
                system("sleep 1");
                break;
        }
    }

    return 0;
}

void printVector(vector<double> theVec){
    if( theVec.size() == 0 ){
        cout << "\n\tThe list is empty..." << endl;
    } else {
        cout << "\n\t~ List Contents ~" << endl;
        cout << "\tSize: " << theVec.size() << endl;
        cout << "\t{";
        for( int i {0}; i < theVec.size(); ++i ){
            cout << "   " << theVec.at(i);
        }
        cout << "   }" << endl;
    }
    cin.get();
}

vector<double> populateVector(vector<double> theVec){
    double element;
    cout << "\tHow many elements would you like to enter? > ";
    int count {};
    cin >> count;
    while ( count > 0 ){
        cout << "\tEnter element > ";
        cin >> element;
        theVec.push_back(element);
        cout << "\t----------------------------------------> " 
             << element << " added." << endl;
        count --;
    }
    cin.get();
    return theVec;
}

char printMenu(){
    cout << "\t================================" << endl;
    cout << "\t~ Welcome to the... MENU! ~" << endl;
    cout << "\t================================" << endl;
    cout << "\tWhat would you like to do?" << endl;
    cout << "\tO: Populate number list." << endl;
    cout << "\tP: Print numbers." << endl;
    cout << "\tA: Add a number." << endl;
    cout << "\tM: Display mean of the numbers." << endl;
    cout << "\tS: Display the smallest number." << endl;
    cout << "\tL: Display the largest number." << endl;
    cout << "\n\tQ: Quit." << endl;
    cout << "\n\t> ";
    char choice {};
    cin >> choice;
    return choice;
}

void vectorMean(vector<double> theVec){
    cin.get();
    cout << "\n\t~ Mean ~" << endl;
    if ( theVec.size() == 0 ){
        cout << "Vector too small..." << endl;
    } else {
        double sum {};
        for( auto vec: theVec ){
            sum += vec;
        }
        cout << "\tMean: " << sum / theVec.size() << endl;
    }
}

void minElement(vector<double> theVec){
    cin.get();
    cout << "\n\t~ Minimum Element ~" << endl;
    if ( theVec.size() == 0 ){
        cout << "Vector too small..." << endl;
    } else {
        double min {theVec.at(0)};
        for( int i {0}; i < theVec.size(); ++i ){
            ( ( min > theVec.at(i) )? min = theVec.at(i) : min );
        }
        cout << "\tMin: " << min << endl;
    }
}

void maxElement(vector<double> theVec){
    cin.get();
    cout << "\n\t~ Minimum Element ~" << endl;
    if ( theVec.size() == 0 ){
        cout << "Vector too small..." << endl;
    } else {
        double max {theVec.at(0)};
        for( int i {0}; i < theVec.size(); ++i ){
            ( ( max < theVec.at(i) )? max = theVec.at(i) : max );
        }
        cout << "\tMax: " << max << endl;
    }
}

