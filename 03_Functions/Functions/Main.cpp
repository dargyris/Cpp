#include <iostream>
#include <cmath>
#include <iomanip>

using std::cout;
using std::cin;
using std::endl;

const double pi {3.14159};

void area_circle();
double calc_area_circle(double);
void volume_cylinder();
double calc_volume_cylinder( double, double);

int main(){
    system("clear");

    cout << std::setprecision(2) << std::fixed;

    area_circle();
    volume_cylinder();

    fflush(stdin);
    cin.get();
    return 0;
}

void area_circle() {
    double radius {};
    cout << "\nEnter radius of circle > ";
    cin >> radius;

    cout << "Area of circle: " << calc_area_circle(radius) << endl;
}

double calc_area_circle(double radius) {
    return pi*pow(radius,2);
}

void volume_cylinder(){
    double radius {};
    double height {};

    cout << "\nEnter the radius of the cylinder> ";
    cin >> radius;
    cout << "\nEnter the height of the cylinder> ";
    cin >> height;

    cout << "Volume: " << calc_volume_cylinder(radius, height) << endl;
}

double calc_volume_cylinder( double radius, double height ) {
    return calc_area_circle(radius) * height;
}
