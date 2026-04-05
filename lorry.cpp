#include "lorry.h"

using namespace std;

Lorry::Lorry() : Car() {
    load_capacity = 0;
}

Lorry::Lorry(string b, int c, int p, int l) : Car(b, c, p) {
    load_capacity = l;
}

Lorry::Lorry(const Lorry& other) : Car(other) {
    load_capacity = other.load_capacity;
}

Lorry::~Lorry() {}

int Lorry::getLoadCapacity() const {
    return load_capacity;
}

void Lorry::setLoadCapacity(int l) {
    load_capacity = l;
}

Lorry& Lorry::operator=(const Lorry& other) {
    if (this != &other) {
        Car::operator=(other);
        load_capacity = other.load_capacity;
    }
    return *this;
}

ostream& operator<<(ostream& out, const Lorry& lorry) {
    out << (Car&)lorry;
    out << "Load capacity: " << lorry.load_capacity << endl;
    return out;
}

istream& operator>>(istream& in, Lorry& lorry) {
    in >> (Car&)lorry;

    cout << "Enter load capacity: ";
    in >> lorry.load_capacity;

    return in;
}