#ifndef PERSON_H
#define PERSON_H
#include <iostream>
#include <string>
class Person {
    protected:
    std::string name;
    int age;
    public:
    Person();
    Person(std::string n, int a);
    std:: string getName() const;
    int getAge() const;
    void setName(std::string n);
    void setAge(int a);
    friend std:: ostream& operator<<(std::ostream& out, const Person& p);
    friend std:: istream& operator>>(std:: istream& in, Person& p);
};
#endif

