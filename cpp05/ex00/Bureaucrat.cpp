#include "Bureaucrat.hpp"

void Bureaucrat::increment()
{
    this->grade++;
}

void Bureaucrat::decrement()
{
        this->grade--;
}

std::string Bureaucrat::getName()
{
    return name;
}

int Bureaucrat::getGrade()
{
    return grade;
}

Bureaucrat::Bureaucrat()
{
}

Bureaucrat::~Bureaucrat()
{
}