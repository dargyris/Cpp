#include <iostream>

using std::cout;
using std::cin;
using std::endl;
using std::string;

int main(){

    //system( "clear" );
    
    string myStringArray[12] = { "January",
                                 "February",
                                 "March",
                                 "April",
                                 "May",
                                 "June",
                                 "July",
                                 "August",
                                 "September",
                                 "October",
                                 "November",
                                 "December" };

    for(int i = 0; i < 12; i++){
        cout << "myStringArray[" << i << "]\t: " << myStringArray[i] << endl;
    }
    
    cout << endl;
    string myMonthArray[12] = { "January", "February", "March", 
                                 "April", "May", "June", 
                                 "July", "August", "September", 
                                 "October", "November", "December"} ;
    for(int i = 0; i < 12; i++){
        if(i == 10 || i == 11){
            cout << "myMonthArray[" << i << "]\t: " << myMonthArray[i] << endl;
        }else{
            cout << "myMonthArray[" << i << "]\t\t: " << myMonthArray[i] << endl;
        }
    }

    cout << endl;
    string myDayArray[7] = { "Monday", "Tuesday", "Wednesday", 
                             "Thursday", "Friday", "Saturday", 
                             "Sunday" };
    for(int i = 0; i < 7; i++){
        cout << "myDayArray[" << i << "]\t\t: " << myDayArray[i] << endl;
    }

    cin.get();

    return 0;
}
