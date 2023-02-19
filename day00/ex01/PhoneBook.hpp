/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoustani <aoustani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/15 10:55:56 by aoustani          #+#    #+#             */
/*   Updated: 2023/01/15 10:55:56 by aoustani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"
#include <iomanip>

class phonebook
{
    private :
    Contact contacts[8];
    
    public :
    phonebook();
        void set_first_name(std::string first_name, int i);
        std::string get_first_name(int i);
        void set_last_name(std::string l_name, int i);
        std::string get_last_name(int i);
        void set_nick_name(std::string n_name, int i);
        std::string get_nick_name(int i);
        void set_phone_number(std::string p_number, int i);
        std::string get_phone_number(int i);
        void set_darkest_secret(std::string d_secret, int i);
        std::string get_darkest_secret(int i);

    ~phonebook();
};

void print_info(phonebook phone, int index);
std::string enter_info(std::string message);

#endif