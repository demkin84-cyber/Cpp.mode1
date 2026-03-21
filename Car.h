#include <iostream>
#ifndef CAR_H
#define CAR_H
#include <string>
class Car
{
private:
    std::string brand;
    int cylinders;
    int power;
protected:
    static int object_count;
public:
    Car();
    Car(std::string b, int c, int p);
    Car(const Car& other);
    virtual ~Car();

    std:: string getBrand() const;
    int getCylinders() const;
    int getPower() const;

    void setBrand(std::string b);
    void setCylinders(int c);
    void setPower(int p);

    Car& operator=(const Car& other);

    friend std::ostream& operator<<(std::ostream& out, const Car& car);
    friend std::istream& operator>>(std::istream& in, Car& car);

    friend int count();
};

#endif
