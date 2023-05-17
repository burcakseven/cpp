#include "PhoneBook.hpp"

void PhoneBook::phoneBookSetter(std::string str, int index)
{
    phoneBook[index] = str;
}
std::string PhoneBook::phoneBookGetter(int index)
{
    return phoneBook[index];
}

int main(int argc, char const *argv[])
{
    (void)argc;
    (void)argv;
    PhoneBook pb;
    pb.phoneBookSetter("deneme",1);
    std::cout << pb.phoneBookGetter(1);
    return 0;
}
