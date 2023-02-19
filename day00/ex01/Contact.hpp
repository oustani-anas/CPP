/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoustani <aoustani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/15 10:55:38 by aoustani          #+#    #+#             */
/*   Updated: 2023/01/15 10:55:38 by aoustani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <string>

class Contact
{
private:
    std::string first_name; 
    std::string last_name; 
    std::string nick_name;
    std::string phone_number;
    std::string darkest_secret;

public:
    Contact();
    void        set_first_name(std::string f_name);
    std::string get_first_name();
    void        set_last_name(std::string l_name);
    std::string get_last_name();
    void        set_nick_name(std::string n_name);
    std::string get_nick_name();
    void        set_phone_number(std::string p_number);
    std::string get_phone_number();
    void        set_darkest_secret(std::string d_secret);
    std::string get_darkest_secret();
    ~Contact();
};


#endif