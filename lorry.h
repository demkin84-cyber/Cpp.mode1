#ifndef LORRY_H
#define LORRY_H

#include "car.h"

class Lorry : public Car {
private:
    int load_capacity;

public:
    Lorry();
    Lorry(std::string b, int c, int p, int l);
    Lorry(const Lorry& other);
    ~Lorry();

    int getLoadCapacity() const;
    void setLoadCapacity(int l);

    Lorry& operator=(const Lorry& other);

    friend std::ostream& operator<<(std::ostream& out, const Lorry& lorry);
    friend std::istream& operator>>(std::istream& in, Lorry& lorry);
};

#endif