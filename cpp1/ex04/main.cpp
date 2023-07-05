#include <iostream>
#include <fstream>

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

int main(int ac, char **av)
{
    if(ac != 4)
    {
        std::cout << "Invalid argument count." << std::endl;
        exit(1);
    }
    std::string filename, s1, s2;
    filename = av[1];
    s1 = av[2];
    s2 = av[3];
    openAndReplace(filename, s1, s2);
    return 0;
}