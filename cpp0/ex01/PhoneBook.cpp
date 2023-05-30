#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
    contactNumber = 0;
}

Contact getNewContactInfo()
{
    std::string fn;
    std::string ln;
    std::string nn;
    std::string num;

    std::cout << "First Name: ";
    std::cin >> fn;
    std::cout << "Last Name: ";
    std::cin >> ln;
    std::cout << "Nickname: ";
    std::cin >> nn;
    std::cout << "Phone Number: ";
    std::cin >> num;
    
    Contact newContact(fn,ln,nn,num);
    return newContact;
}

void PhoneBook::addContact()
{
    phoneBook[contactNumber % 8] = getNewContactInfo();
    contactNumber++;
}

void printScreen(std::string str) //+
{
    if(str.length() > 10)
        std::cout << str.substr(0,9) + ".";
    else
    {
        std::cout << str;
        for (size_t i = 0; i < (10 - str.length()); i++)
        std::cout << " ";
    }
}

void printInfo()
{
    std::cout << "index|";
    printScreen("first name");
    std::cout << "|";
    printScreen("second name");
    std::cout << "|" ;
    printScreen("nıckname");
    std::cout << "|" ;
    printScreen("phone number");
    std::cout << "|" << std::endl;
}

void PhoneBook::searchContact()
{
    size_t index;
    if(contactNumber >= 8)
        index = 8;
    else
        index = contactNumber % 8;
    printInfo();
    for (size_t i = 0; i < index; i++)
    {
        std::cout << "-------------------------------------------------" << std::endl;
        std::cout << i+1;
        std::cout << "    |";
        printScreen(phoneBook[i].getFName());
        std::cout << "|";
        printScreen(phoneBook[i].getSName());
        std::cout << "|";
        printScreen(phoneBook[i].getNickName());
        std::cout << "|";
        printScreen(phoneBook[i].getNumber());
        std::cout << "|" << std::endl;
    }
}