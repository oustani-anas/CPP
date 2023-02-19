
#include <iostream>
#include <fstream>
#include <string>

std::string ft_replace(std::string line, std::string s1, std::string s2)
{
    size_t i = 0;
    while(i < line.length())
        {
            i = line.find(s1, i);
            if(i == std::string::npos)
                return(line);
            line.erase(i, s1.length());
            line.insert(i, s2);
            i += s2.length();
        }
    return(line);
}

int main(int ac,char **av)
{
    std::string line = "";
    std::string str1;
    std::string str2;
    std::string filename;
    std::string newstr;
    
    if(ac != 4)
    {
        std::cout << "** INVALID ARGUMENTS **";
        exit(0);
    }
    filename = av[1];
    str1 = av[2];
    str2 = av[3];
    std::ifstream file(filename);
    if(!file)
    {
        std::cout << filename << " deosn't exist";
        exit(0);
    }
    std::ofstream ofile(filename + ".replace");
    if(ofile.fail())
    {
        std::cout << "failed" << std::endl;
        exit(0);
    }
    while(getline(file, line))
    {
        line = ft_replace(line, str1, str2);
        ofile << line << std::endl;
    }
    file.close();
    ofile.close();
    
}