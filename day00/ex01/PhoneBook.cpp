/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoustani <aoustani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/15 10:55:50 by aoustani          #+#    #+#             */
/*   Updated: 2023/01/15 10:55:50 by aoustani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "PhoneBook.hpp"

phonebook::phonebook()
{
}

phonebook::~phonebook()
{
}

void phonebook::set_first_name(std::string first_name, int i)
{
    contacts[i].set_first_name(first_name);
}

std::string phonebook::get_first_name(int i)
{
    return contacts[i].get_first_name();
}

void phonebook::set_last_name(std::string l_name, int i)
{
    contacts[i].set_last_name(l_name);
}

std::string phonebook::get_last_name(int i)
{
    return contacts[i].get_last_name();
}

void phonebook::set_nick_name(std::string n_name, int i)
{
    contacts[i].set_nick_name(n_name);
}

std::string phonebook::get_nick_name(int i)
{
    return contacts[i].get_nick_name();
}

void phonebook::set_phone_number(std::string p_number, int i)
{
    contacts[i].set_phone_number(p_number);
}

std::string phonebook::get_phone_number(int i)
{
    return contacts[i].get_phone_number();
}

void phonebook::set_darkest_secret(std::string d_secret, int i)
{
    contacts[i].set_darkest_secret(d_secret);
}

std::string phonebook::get_darkest_secret(int i)
{
    return contacts[i].get_darkest_secret();
}

void print_info(phonebook phone, int index)
{
    std::cout << "FIRST NAME : " << phone.get_first_name(index) << std::endl;
    std::cout << "LAST NAME : " << phone.get_last_name(index) << std::endl;
    std::cout << "NICK NAME : " << phone.get_nick_name(index) << std::endl;
    std::cout << "PHONE NUMBER : " << phone.get_phone_number(index) << std::endl;
    std::cout << "DARKEST SECRET : " << phone.get_darkest_secret(index) << std::endl;
}

std::string enter_info(std::string message)
{
    std::string line;
    do
    {
    std::cout << message;
    if(!getline(std::cin, line))
        break;
    if(line.empty())
        std::cout << "      *** INVALID ARGUMENT ***" << std::endl;
    }
    while(line.empty());
    return(line);
}