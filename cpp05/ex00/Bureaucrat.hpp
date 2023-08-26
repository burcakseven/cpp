#ifndef BUREA_H
#define BUREA_H
#include <iostream>

class Bureaucrat
{
private:
    const std::string name;
    int grade;
public:
    Bureaucrat();
    ~Bureaucrat();
    std::string getName();
    int getGrade();
    void increment();
    void decrement();
};



#endif