#include <iostream>
#include <fstream>

void takeParameters(std::string &filename, std::string &s1, std::string &s2)
{
    std::cout << "Enter filename:"<<std::endl;
    std::getline(std::cin, filename);
    std::cout << "Enter string to replace: ";
    std::getline(std::cin, s1);
    std::cout << "Enter replacement string: ";
    std::getline(std::cin, s2);
}

void replaceString(std::ifstream& ifs, std::ofstream& ofs, const std::string& s1, const std::string& s2)
{
    std::string line;
    while (std::getline(ifs, line))
    {
        size_t pos = 0;
        while ((pos = line.find(s1, pos)) != std::string::npos)
        {
            line = line.substr(0, pos) + s2 + line.substr(pos + s1.length());
            pos += s2.length();
        }
        ofs << line << std::endl;
    }
}

void openAndReplace(const std::string &filename,const std::string &s1,const std::string &s2)
{
    (void)s1;
    (void)s2;
    std::ifstream ifs(filename, std::ifstream::in);
    if(!ifs.is_open())
    {
        std::cout << "Failed to open the file: " << filename << std::endl;
        return;
    }
    std::ofstream ofs(filename+".replace",std::ofstream::out);
    replaceString(ifs,ofs,s1,s2);
}

int main()
{
    std::string filename, s1, s2;
    takeParameters(filename,s1,s2);
    openAndReplace(filename,s1,s2);

}