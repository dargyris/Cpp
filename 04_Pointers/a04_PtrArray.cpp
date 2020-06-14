#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main(){
    system ( "clear" );

    int shortArr[10] {};
    int *pShort0 = &shortArr[0];
    int *pShort6 = &shortArr[6];

    cout << "pShort0: " << pShort0 << endl;
    cout << "pShort6: " << pShort6 << endl;
    cout << "Difference: " << pShort6 - pShort0 << endl;
    cout << endl;

    int intArr[10] {};
    int *pInt0 = &intArr[0];
    int *pInt6 = &intArr[6];

    cout << "pInt0: " << pInt0 << endl;
    cout << "pInt6: " << pInt6 << endl;
    cout << "Difference: " << pInt6 - pInt0 << endl;
    cout << endl;

    long longArr[10] {};
    long *pLong0 = &longArr[0];
    long *pLong6 = &longArr[6];

    cout << "pLong0: " << pLong0 << endl;
    cout << "pLong6: " << pLong6 << endl;
    cout << "Difference: " << pLong6 - pLong0 << endl;
    cout << endl;

    float floatArr[10] {};
    float *pFloat0 = &floatArr[0];
    float *pFloat6 = &floatArr[6];

    cout << "pFloat0: " << pFloat0 << endl;
    cout << "pFloat6: " << pFloat6 << endl;
    cout << "Difference: " << pFloat6 - pFloat0 << endl;
    cout << endl;

    double doubleArr[10] {};
    double *pDouble0 = &doubleArr[0];
    double *pDouble6 = &doubleArr[6];

    cout << "pDouble0: " << pDouble0 << endl;
    cout << "pDouble6: " << pDouble6 << endl;
    cout << "Difference: " << pDouble6 - pDouble0 << endl;



    fflush ( stdin );
    cin.get();
    return 0;
}
