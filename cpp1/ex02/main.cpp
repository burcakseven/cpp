#include <iostream>

int main()
{
    std::string svar = "HI THIS IS BRAIN";
    std::string* stringPTR = &svar;
    std::string& stringREF = svar;

    std::cout << "svar memaddress " << &svar <<std::endl;
    std::cout << "stringPTR held memaddress " << stringPTR<<std::endl;
    std::cout << "stringREF held memaddress " << &stringREF<<std::endl;

    std::cout << "svar value " << svar<<std::endl;
    std::cout << "stringPTR pointed value " << *stringPTR<<std::endl;
    std::cout << "stringREF pointed value " << stringREF<<std::endl;
}