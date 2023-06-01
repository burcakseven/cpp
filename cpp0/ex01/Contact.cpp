#include "PhoneBook.hpp"

Contact::Contact()
{
    return;
}

std::string Contact::getFName(void)
{
    return first_name;
}

std::string Contact::getSName(void)
{
    return last_name;
}

std::string Contact::getNickName(void)
{
    return nickname;
}

std::string Contact::getNumber(void)
{
    return number;
}

std::string Contact::getDarkestSecret(void)
{
    return darkestSecret;
}
