#include <iostream>
#include <iomanip>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main (){
    system( "clear" );

    string s0;
    string s1 { "Apple" };
    string s2 { "Banana" };
    string s3 { "Kiwi" };
    string s4 { "apple" };
    string s5 { s1 };
    string s6 { s1, 0, 3 };
    string s7 ( 10, 'X' );

    cout << s0 << endl;
    cout << s0.length() << endl;
    cout << "\n===========================================\n" << endl;

    cout << "Initialization examples:" << endl;
    cout << "s1 initialized to:" << s1 << endl;
    cout << "s2 initialized to:" << s2 << endl;
    cout << "s3 initialized to:" << s3 << endl;
    cout << "s4 initialized to:" << s4 << endl;
    cout << "s5 initialized to:" << s5 << endl;
    cout << "s6 initialized to:" << s6 << endl;
    cout << "s7 initialized to:" << s7 << endl;
    cout << "\n===========================================\n" << endl;

    for( int i {0}; i < s7.length(); ++i ){
        cout << "\ts7.at(" << i << ") --> " << s7.at(i) << endl;
    }
    cout << "\n===========================================\n" << endl;
    cout << "Comparisons:" << endl;
    cout << std::boolalpha;
    cout << s1 << "\t==\t" << s5 << "\t: " << (s1 == s5) << endl;
    cout << s1 << "\t==\t" << s2 << "\t: " << (s1 == s2) << endl;
    cout << s1 << "\t!=\t" << s2 << "\t: " << (s1 != s2) << endl;
    cout << s1 << "\t<\t" << s2 << "\t: " << (s1 < s2) << endl;
    cout << s2 << "\t>\t" << s1 << "\t: " << (s2 < s1) << endl;
    cout << s4 << "\t<\t" << s5 << "\t: " << (s4 < s5) << endl;
    cout << s1 << "\t==\t" << "Apple" << "\t: " << (s1 == "Apple") << endl;

    cout << "\n===========================================\n" << endl;

    s1 = "Watermelon";
    cout << "s1 is now: " << s1 << endl;
    s2 = s1;
    cout << "s2 is now: " << s2 << endl;

    s3 = "Diamantis";
    cout << "s3 is now: " << s3 << endl;

    s3[0] = 'C';
    cout << "s3 first letter --> C:  " << s3 << endl;

    s3.at(0) = 'P';
    cout << "s3 first letter --> P:  " << s3 << endl;

    cout << "\n===========================================\n" << endl;

    s3 = "Watermelon";
    s2 = "Banana";
    s3 = s5 + " and " + s2 + " juice";
    cout << "s3 is now: " << s3 << endl;

    cout << "\n===========================================\n" << endl;

//    cout << "size of size_t: " << sizeof(size_t) << endl;
//    cout << "Min of size_t: " << std::numeric_limits<size_t>::min() << endl;
//    cout << "Max of size_t: " << std::numeric_limits<size_t>::max() << endl;

    s1 = "Apple";
    for( size_t i {0}; i < s1.length(); ++i ){
        cout << s1.at(i) << " ";
    }
    cout << endl;
    
    cout << "\n===========================================\n" << endl;

    for ( auto c: s1 ){
        cout << c << "  ";
    }
    cout << endl;

    cout << "\n===========================================\n" << endl;

    cin.get();

    return 0;
}
