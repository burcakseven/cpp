#ifndef PHONEBOOK
#define PHONEBOOK
#include <iostream>

class PhoneBook
{
private:
    std::string phoneBook[8];
public:
    void phoneBookSetter(std::string str, int index);
    std::string phoneBookGetter(int index);
};

class Contact
{
private:
public:
};



#endif