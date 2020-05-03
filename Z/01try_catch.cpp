#include "std_lib_facilities.h"

int print_menu();
void throw_int();
void throw_neg_int();
void throw_message();
void u_exception();

int main(){
    bool flag{true};
    while(flag){
        int choice = print_menu();
        switch(choice){
            case 1:
                throw_int();
                break;
            case 2:
                throw_neg_int();
                break;
            case 3:
                throw_message();
                break;
            case 4:
                u_exception();
                break;
            case 5:
                cout << "\nGoodbye!\n";
                flag=false;
                break;
            default:
                cout << "\nUnknown choice.";
                cout << "\nPlease try again!\n";
                break;
        }
    }

}

int print_menu(){
    cout << "*************************\n";
    cout << "****** TRY - CATCH ******\n";
    cout << "*************************\n";
    cout << "\nWhat do you want to do?\n";
    cout << "1. Throw int.\n";
    cout << "2. Throw int<0.\n";
    cout << "3. Print message with throw.\n";
    cout << "4. Uncaught exception.\n";
    cout << "5. Quit\n";
    cout << "****************************\n";
    int choice{0};
    cin >> choice;
    return choice;
}


void throw_int(){
    system("clear");
    int x{0};
    cout << "Please enter int: ";
    cin >> x;
    cout << '\n';
    try{
        throw x;
    } catch(int x){
        cout << "I caught x: " << x << '\n';
    }
}

void throw_neg_int(){
    system("clear");
    int x{0};
    cout << "Please enter int: ";
    cin >> x;
    cout << '\n';
    try{
        if(x<0) throw x;
    } catch(int x){
        cout << "Negative input: " << x << '\n';
    }
}

void throw_message(){
    system("clear");
    int x{0};
    cout << "Please enter int: ";
    cin >> x;
    cout << '\n';
    try{
        switch(x){
            case -1:
                throw -1;
                break;
            case 0:
                throw 0;
                break;
            case 1:
                throw 1;
                break;
            default:
                throw 9;
                break;
        }
    } catch(int x){
        cout << "Caught: " << x << "." << '\n';
    } catch(...){
        cout << "... Default exception!\n";
    }
}

void u_exception(){
    system("clear");
    int x{0};
    cout << "Please enter int: ";
    cin >> x;
    cout << '\n';
    try{
        throw 'a';
    } catch(int x){
        cout << "Caught: " << x << "." << '\n';
    }
}
