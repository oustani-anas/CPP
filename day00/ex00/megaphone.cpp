
#include <iostream>
#include <ctype.h>

void mega(char *av)
{
    int i = 0;
        while(av[i])
        {
            if(av[i] >= 'a' && av[i] <= 'z')
            {
                av[i] = toupper(av[i]);
            }
            std::cout << av[i];
            i++;
        }
}

int main(int ac, char *av[])
{
    int j = 1;
    if(ac <= 1)
    {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
        return(0);
    }
    while(j < ac)
    {
        mega(av[j]);
        j++;
    }
    std::cout << std::endl;
}