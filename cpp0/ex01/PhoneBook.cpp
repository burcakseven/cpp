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
    std::string ds;

    std::cout << "First Name: ";
    std::getline(std::cin,fn);
    std::cout << "Last Name: ";
    std::getline(std::cin,ln);
    std::cout << "Nickname: ";
    std::getline(std::cin,nn);
    std::cout << "Darkest Secret: ";
    std::getline(std::cin,ds);
    std::cout << "Phone Number: ";
    std::getline(std::cin,num);
    if(fn.empty() || ln.empty() || nn.empty() || ds.empty() || num.empty())
    {
        std::cout << "!!Failed to create contact , please complete all fields!!"<< std::endl;
        return Contact();
    }
    Contact newContact(fn,ln,nn,num,ds);
    return newContact;
}

void PhoneBook::addContact()
{
    Contact newContact = getNewContactInfo();
    if(newContact.getFName().empty())
        return ;
    phoneBook[contactNumber % 8] = newContact;
    contactNumber++;
}

void printScreen(std::string str)
{
    if(str.size() > 10)
        std::cout << str.substr(0,9) + ".";
    else
    {
        std::cout << str;
        for (size_t i = 0; i < (10 - str.length()); i++)
        std::cout << " ";
    }
}

void printInfo(int infoFlag)
{
    if(infoFlag == 0)
        std::cout << "index|";
    printScreen("first name");
    std::cout << "|";
    printScreen("last name");
    std::cout << "|" ;
    printScreen("nickname  ");
    if(infoFlag == 1)
    {
        std::cout << "|" ;
        printScreen("darkest secret");
        std::cout << "|" ;
        printScreen("phone number");
    }
    std::cout << "|" << std::endl;
}

void printContact(Contact phoneBook, int infoFlag)
{
    if(infoFlag == 0)
        std::cout << "    |";
    printScreen(phoneBook.getFName());
    std::cout << "|";
    printScreen(phoneBook.getSName());
    std::cout << "|";
    printScreen(phoneBook.getNickName());
    if(infoFlag == 1)
    {
        std::cout << "|";
        printScreen(phoneBook.getDarkestSecret());
        std::cout << "|";
        printScreen(phoneBook.getNumber());
    }
    std::cout << "|" << std::endl;
}

size_t PhoneBook::totalContact()
{
    if(contactNumber >= 8)
        return (8);
    return (contactNumber % 8);
}

bool PhoneBook::isValidIndex(int index)
{
    int totalContactValue = totalContact();
    return (index >= 0 && index < totalContactValue);
}

void PhoneBook::detailedInfo()
{
    while (true)
    {
        std::cout << "Please choose a valid contact index or enter 'exit' to return: ";
        std::string input;
        std::getline(std::cin, input);

        if (input == "exit")
            return;

        try
        {
            int index = std::stoi(input) - 1;
            if (isValidIndex(index))
            {
                printInfo(1);
                printContact(phoneBook[index], 1);
            }
            else
            {
                std::cout << "Invalid index. Please enter a valid index." << std::endl;
            }
        }
        catch (const std::invalid_argument&)
        {
            std::cout << "Invalid input. Please enter a valid index." << std::endl;
        }
    }
}


void PhoneBook::searchContact()
{
    size_t index = totalContact();
    printInfo(0);
    for (size_t i = 0; i < index; i++)
    {
        std::cout << "-------------------------------------------" << std::endl;
        std::cout << i + 1;
        printContact(phoneBook[i], 0);
    }
    detailedInfo();
}