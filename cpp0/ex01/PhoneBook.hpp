#ifndef PHONEBOOK
#define PHONEBOOK
#include <iostream>

class Contact
{
private:
    std::string first_name;
    std::string last_name;
    std::string nickname;
    std::string number;
public:
    Contact();
    Contact(std::string first_name, std::string last_name, std::string nickname, std::string number)
    {
        this->first_name = first_name;
        this->last_name = last_name;
        this->nickname = nickname;
        this->number = number;
    }
    std::string getFName(void);
    std::string getSName(void);
    std::string getNickName(void);
    std::string getNumber(void);
};

class PhoneBook
{
private:
    Contact phoneBook[8];
    int     contactNumber;
public:
    PhoneBook();
    void addContact(void);
    void searchContact(void);
};


#endif