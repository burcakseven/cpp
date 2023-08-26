#include "Bureaucrat.hpp"

int main()
{

    try
    {
        Bureaucrat bureaucrat1("deneme1", 0);
    }
    catch (std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }

    try
    {
        Bureaucrat bureaucrat2("deneme2", 200);
    }
    catch (std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }

    Bureaucrat bureaucrat3("deneme3", 100);
    std::cout << bureaucrat3 << std::endl;

    bureaucrat3.decrementGrade();
    std::cout << bureaucrat3 << std::endl;

    bureaucrat3.incrementGrade();
    std::cout << bureaucrat3 << std::endl;

    return 0;
}