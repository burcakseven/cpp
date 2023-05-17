#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
    contactNumber = 0;
}

void PhoneBook::addContact(std::string name, std::string number)
{
    Contact newContact(name, number);
    phoneBook[contactNumber % 8] = newContact;
    contactNumber++;
}

void printScreen(std::string str)
{
    if(str.length() > 10)
        std::cout << str.substr(9) + ".";
    else
        std::cout << str;
}

void PhoneBook::searchContact()
{
    for (size_t i = 0; i <= (contactNumber % 8 ); i++)
    {
        printScreen(phoneBook->getName());
        std::cout << "|";
        printScreen(phoneBook->getNumber());
        std::cout << std::endl;
    }
}