/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoustani <aoustani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 12:56:37 by aoustani          #+#    #+#             */
/*   Updated: 2023/02/13 08:56:57 by aoustani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

#include <iostream>
#include <string>
#include <iomanip>

class ScalarConverter
{   
private:
    ScalarConverter(){};
    ~ScalarConverter(){};
public:
    static void convert(std::string str);
};

bool is_float(std::string str);
bool is_int(std::string str);
bool is_double(std::string str);
void double_convert(std::string str);
void int_convert(std::string str);
void float_convert(std::string str);
void double_convert(std::string str);

#endif