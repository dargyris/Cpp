#include <iostream>

using std::cout;
using std::cin;
using std::endl;

void local_example( int );
void global_example();
void static_local_example();

int num { 300 };

int main(){
    system ( "clear" );

    int num { 100 };
    int num1 { 500 };

    cout << "Local num is: " << num << " in main." << endl;

    {
        int num { 200 };
        cout << "\nLocal num is: " << num << " in inner block.";
        cout << "\nInner block in main can see out - num1 is: " << num1 << endl;
    }

    cout << "\nLocal num is: " << num << " in main." << endl;

    local_example(10);
    local_example(20);

    global_example();
    global_example();

    static_local_example();
    static_local_example();
    static_local_example();

    fflush ( stdin );
    cin.get();
    return 0;
}

void local_example( int x ){
    int num { 1000 };
    cout << "\nLocal num is: " << num << " in local example - start.";
    num = x;
    cout << "\nLocal num is: " << num << " in local example - end" << endl;
}

void global_example(){
    cout << "\nGlobal num is: " << num << " in global_example - start.";
    num *= 2;
    cout << "\nGlobal num is: " << num << " in global_example - end." << endl;
}

void static_local_example(){
    static int num { 5000 };
    cout << "\nLocal static num is: " << num << " in static_local_example - start.";
    num += 1000;
    cout << "\nLocal static num is: " << num << " in static_local_example - end." << endl;
}
