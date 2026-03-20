#include <iostream>
#include "Car.h"
#include "Lorry.h"

using namespace std;

int main() {

    Car car1;
    Car car2("Toyota", 4, 150);

    Lorry truck1;
    Lorry truck2("Volvo", 6, 400, 12000);

    cout << "Enter car1 data:" << endl;
    cin >> car1;

    cout << endl;

    cout << "Car1:" << endl;
    cout << car1 << endl;

    cout << "Truck2:" << endl;
    cout << truck2 << endl;

    car1 = car2;

    cout << "After assignment car1 = car2:" << endl;
    cout << car1 << endl;

    cout << "Total objects: " << count() << endl;

    return 0;
}