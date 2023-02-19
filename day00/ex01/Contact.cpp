/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoustani <aoustani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/15 10:55:29 by aoustani          #+#    #+#             */
/*   Updated: 2023/01/15 10:55:29 by aoustani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(){}

Contact::~Contact(){}

void Contact::set_darkest_secret(std::string d_secret)
{
    darkest_secret = d_secret;
}

std::string Contact::get_darkest_secret()
{
    return darkest_secret;
}

void Contact::set_first_name(std::string f_name)
{
    first_name = f_name;
}

std::string Contact::get_first_name()
{
    return first_name;
}

void Contact::set_last_name(std::string l_name)
{
    last_name = l_name;
}

std::string Contact::get_last_name()
{
    return last_name;
}

void Contact::set_nick_name(std::string n_name)
{
    nick_name = n_name;
}

std::string Contact::get_nick_name()
{
    return nick_name;
}

void Contact::set_phone_number(std::string p_number)
{
    phone_number = p_number;
}

std::string Contact::get_phone_number()
{
    return phone_number;
}
