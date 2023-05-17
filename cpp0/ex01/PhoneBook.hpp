#ifndef PHONEBOOK
#define PHONEBOOK
#include <iostream>

class Contact
{
private:
    std::string name;
    std::string number;
public:
    Contact();
    Contact(std::string name, std::string number)
    {
        this->name = name;
        this->number = number;
    }
    std::string getName(void);
    std::string getNumber(void);
};

class PhoneBook
{
private:
    Contact phoneBook[8];
    int     contactNumber;
public:
    PhoneBook();
    void addContact(std::string name, std::string phoneNumber);
    void searchContact(void);
};


#endif