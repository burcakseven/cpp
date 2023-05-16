#include <iostream>
#include <cctype>

void upperString(char *str)
{
    while (*str != '\0')
    {
        std::cout << static_cast<char>(toupper(*str));
        str++;
    }
}

int main(int argc, char **argv)
{
    if(argc <= 1)
    {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
        return 1;
    }
    while (*(++argv) != '\0')
    {
        upperString(*argv);
        if(*(argv+1) != '\0')
            std::cout << " ";
    }
    
    return 0;
}
