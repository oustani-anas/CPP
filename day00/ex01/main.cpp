/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoustani <aoustani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/15 10:55:46 by aoustani          #+#    #+#             */
/*   Updated: 2023/01/15 10:55:46 by aoustani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp" 

void resize(std::string info)
{
    int len;

    len = info.length();
    if(len >= 10)
    {
        info.resize(9);
        info += '.';
        std::cout << info;
    }
    else
        std::cout << std::setw(10) << info;
}

int main()
{
    phonebook my_phonebook;
    std::string line;
    std::string j;
    int index;
    int count;
    int number;
    

    count = 0;
    while(1)
    {
        std::cout << ">> ";
        if(!getline(std::cin, line)){
            break;
        }
        if(line.compare("ADD") == 0)
        {
            if(count == 8)
                count = 0;
            line = enter_info("ENTER FIRST NAME : ");
            my_phonebook.set_first_name(line, count);
            line = enter_info("ENTER LAST NAME : ");
            my_phonebook.set_last_name(line, count);
            line = enter_info("ENTER NICK NAME : ");
            my_phonebook.set_nick_name(line, count);
            line = enter_info("ENTER PHONE NUMBER : ");
            my_phonebook.set_phone_number(line, count);
            line = enter_info("ENTER DARKEST SECRET : ");
            my_phonebook.set_darkest_secret(line, count);
            count++;
        }
        if(line.compare("SEARCH") == 0)
        {
            std::cout << "-------------------------------------------"<< std::endl;
            std::cout << "   INDEX  |FIRST NAME| LAST NAME| NICKNAME |"<< std::endl;
            std::cout << "-------------------------------------------"<< std::endl;
            index = 0;
            while(index < 8)
            {
                if(my_phonebook.get_first_name(index).empty())
                    break;
                std::cout << "    " << index << "     |";
                resize(my_phonebook.get_first_name(index)); std::cout << "|";
                resize(my_phonebook.get_last_name(index)); std::cout << "|";
                resize(my_phonebook.get_nick_name(index)); std::cout << "|"<< std::endl;
                std::cout << "-------------------------------------------"<< std::endl;
                index++;
            }
            std::cout << "ENTER THE INDEX : "; 
            if(!getline(std::cin, j))
                break;
            number = atoi(j.c_str());
            if(j.length() != 1 || !isdigit(j[0]) || number == 8 || number == 9){
                std::cout << "      *** INVALID NUMBER ***" << std::endl;
            }
            else if(number < index)
                print_info(my_phonebook, number);
        }
        if(line.compare("EXIT") == 0)
            break;
    }
}