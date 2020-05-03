#include "std_lib_facilities.h"

int print_menu();
double yen_dollars(double);
double euros_dollars(double);
double pounds_dollars(double);

int main(){
    system("clear");
    cout << "********************\n";
    cout << "****** Hello! ******\n";
    cout << "********************\n";
    usleep(2000000);
    system("clear");
    bool flag{true};
    while(flag){
        int choice=print_menu();

        double amount{0.};
        switch (choice){
            case 1:
                cout << "Please enter how many yen?\t";
                cin >> amount;
                usleep(1000000);
                system("clear");
                cout << amount << " yen -> "
                     << yen_dollars(amount) << " dollars.\n\n";
                usleep(1000000);
                break;
            case 2:
                cout << "Please enter how many euros?\t";
                cin >> amount;
                usleep(1000000);
                system("clear");
                cout << amount << " euros -> "
                     << euros_dollars(amount) << " dollars.\n\n";
                usleep(1000000);
                break;
            case 3:
                cout << "Please enter how many pounds?\t";
                cin >> amount;
                usleep(1000000);
                system("clear");
                cout << amount << " pounds -> "
                     << pounds_dollars(amount) << " dollars.\n\n";
                usleep(1000000);
                break;
            case 4:
                flag=false;
                system("clear");
                break;
            default:
                cout << "Try again...";
                usleep(1500000);
                system("clear");
                break;
        }
    }
    return 0;
}

int print_menu(){
    char char_choice{ };
    cout << "Please choose conversion:\n\n";
    cout << "1. Yen to Dollars\n";
    cout << "2. Euros to Dollars\n";
    cout << "3. Pounds to Dollars\n";
    cout << "4. Quit\n";
    cout << "(Rates: Feb 2020)\n";
    cin >> char_choice;
    switch(char_choice){
        case '1': 
            usleep(1000000);
            system("clear");
            return 1;
        case '2':
            usleep(1000000);
            system("clear");
            return 2;
        case '3':
            usleep(1000000);
            system("clear");
            return 3;
        case '4':
            return 4;
        default:
            char_choice=' ';
            return 0;
    }

}

double yen_dollars(double yen){
    constexpr double yen_dollars=0.0089;
    return yen*yen_dollars;
}

double euros_dollars(double euros){
    constexpr double euros_dollars=1.08;
    return euros*euros_dollars;
}

double pounds_dollars(double pounds){
    constexpr double pounds_dollars=1.29;
    return pounds*pounds_dollars;
}
