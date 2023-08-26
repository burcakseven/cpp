#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : name("Deafult"), grade(15)
{
    std::cout << grade << std::endl;
    std::cout << "Default constructor called" << std::endl;

    checkGrade();
}

Bureaucrat::Bureaucrat(std::string name, int grade) : name(name), grade(grade)
{
    std::cout << "Constructor called" << std::endl;

    checkGrade();
}

Bureaucrat::Bureaucrat(const Bureaucrat &src)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = src;
}

Bureaucrat::~Bureaucrat()
{
    std::cout << "Destructor called" << std::endl;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &rhs)
{
    std::cout << "Assignation operator called" << std::endl;

    if (this != &rhs)
    {
        grade = rhs.grade;
    }

    return *this;
}

std::string Bureaucrat::getName() const
{
    return name;
}

int Bureaucrat::getGrade() const
{
    return grade;
}

void Bureaucrat::incrementGrade()
{
    if (grade <= 1)
    {
        throw GradeTooHighException();
    }

    grade--;
}

void Bureaucrat::decrementGrade()
{
    if (grade >= 150)
    {
        throw GradeTooLowException();
    }

    grade++;
}

void Bureaucrat::checkGrade()
{
    if (grade < 1)
    {
        throw GradeTooHighException();
    }
    else if (grade > 150)
    {
        throw GradeTooLowException();
    }
}

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
    return "Grade is too high";
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
    return "Grade is too low";
}

std::ostream &operator<<(std::ostream &os, const Bureaucrat &bureaucrat)
{
    os << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade();
    return os;
}