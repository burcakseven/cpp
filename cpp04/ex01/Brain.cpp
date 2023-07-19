#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "Brain default constructor called." << std::endl;
}

Brain::Brain(const Brain &brain)
{
    *this = brain;
    std::cout << "Brain copy constructor called." << std::endl;
}

Brain::~Brain()
{
    std::cout << "Brain destroyed." << std::endl;
}

Brain &Brain::operator=(const Brain &assign)
{

    for (int i = 0; i < 100; i++)
    {
        ideas[i] = assign.ideas[i];
    }

    std::cout << "Brain copy assigment operator called." << std::endl;

    return (*this);
}
