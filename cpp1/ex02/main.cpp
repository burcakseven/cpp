#include <iostream>

int main()
{
    std::string svar = "HI THIS IS BRAIN";
    std::string* stringPTR = &svar;
    std::string& stringREF = svar;

    std::cout << "The memory address of the string variable: " << &svar <<std::endl;
    std::cout << "The memory address held by stringPTR: " << stringPTR<<std::endl;
    std::cout << "The memory address held by stringREF:" << &stringREF<<std::endl;

    std::cout << "The value of the string variable: " << svar<<std::endl;
    std::cout << "The value pointed to by stringPTR: " << *stringPTR<<std::endl;
    std::cout << "The value pointed to by stringREF: " << stringREF<<std::endl;
}