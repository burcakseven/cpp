#include "PhoneBook.hpp"

void redirector(std::string input, PhoneBook *pb)
{
    if(!input.compare("EXIT"))
        exit(1);
    else if(input.compare("ADD") && input.compare("SEARCH"))
        std::cout << "Wrong input please try again" << std::endl;
    else
    {
        if(!input.compare("ADD"))
        {
            pb->addContact();
        }
        else
            pb->searchContact();
    }
}

int main(void)
{
    std::string input;
    PhoneBook pb;
    while (1)
    {
        std::cout << "\n>>Please write your choose<<\n>>ADD, SEARCH, EXIT<<" << std::endl;
        std::cin >> input;
        redirector(input,&pb);
    }
    return 0;
}
