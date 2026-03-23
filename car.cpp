#include "Car.h"

using namespace std;

int Car::object_count = 0;

Car::Car() {
    brand = "Unknown";
    cylinders = 0;
    power = 0;
    object_count++;
}

Car::Car(string b, int c, int p) {
    brand = b;
    cylinders = c;
    power = p;
    object_count++;
}

Car::Car(const Car& other) {
    brand = other.brand;
    cylinders = other.cylinders;
    power = other.power;
    object_count++;
}

Car::~Car() {
    object_count--;
}

string Car::getBrand() const { return brand; }
int Car::getCylinders() const { return cylinders; }
int Car::getPower() const { return power; }

void Car::setBrand(string b) { brand = b; }
void Car::setCylinders(int c) { cylinders = c; }
void Car::setPower(int p) { power = p; }

Car& Car::operator=(const Car& other) {
    if (this != &other) {
        brand = other.brand;
        cylinders = other.cylinders;
        power = other.power;
    }
    return *this;
}

ostream& operator<<(ostream& out, const Car& car) {
    out << "Brand: " << car.brand << endl;
    out << "Cylinders: " << car.cylinders << endl;
    out << "Power: " << car.power << endl;
    return out;
}

istream& operator>>(istream& in, Car& car) {
    cout << "Enter brand: ";
    in >> car.brand;

    cout << "Enter cylinders: ";
    in >> car.cylinders;

    cout << "Enter power: ";
    in >> car.power;

    return in;
}

int count() {
    return Car::object_count;
}