/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoustani <aoustani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 09:21:19 by aoustani          #+#    #+#             */
/*   Updated: 2023/02/12 09:21:19 by aoustani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRU_HPP
#define SHRU_HPP
#include "AForm.hpp"
#include <iostream>
#include <fstream>
class  ShrubberyCreationForm : public Form
{
    public:
	ShrubberyCreationForm();
	ShrubberyCreationForm(std::string target);
	ShrubberyCreationForm(const ShrubberyCreationForm &_ShrubberyCreationForm);
	ShrubberyCreationForm &operator=(const ShrubberyCreationForm &_ShrubberyCreationForm);
	~ShrubberyCreationForm();
	void execute(const Bureaucrat &executor)const;
};
#endif