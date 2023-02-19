/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoustani <aoustani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 09:20:57 by aoustani          #+#    #+#             */
/*   Updated: 2023/02/12 09:20:57 by aoustani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
int main()
{
   try {
		Bureaucrat	_Bureaucrat("Office", 137);
		Form *F1 = new  ShrubberyCreationForm(_Bureaucrat.getBureaucratName()); //causing leaks !!!!! must delete
		_Bureaucrat.executeForm(*F1);
		
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	//--------------------------------
   try {
		Bureaucrat	_Bureaucrat("Office_987", 45);
		Form *F2 = new  RobotomyRequestForm(_Bureaucrat.getBureaucratName()); //causing leaks !!!!! must delete
		_Bureaucrat.executeForm(*F2);
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	//--------------------------------
   try {
		Bureaucrat	_Bureaucrat("Office_000", 5);
		Form *F3 = new  PresidentialPardonForm(_Bureaucrat.getBureaucratName()); //causing leaks !!!!! must delete
		_Bureaucrat.executeForm(*F3);
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	
	//--------------------------------
	std::cout << "Shouldn't Work !" << std::endl;
   try {
		Bureaucrat	_Bureaucrat("Office_4454", 151);
		Form *F3 = new  ShrubberyCreationForm(_Bureaucrat.getBureaucratName()); //causing leaks !!!!! must delete
		_Bureaucrat.executeForm(*F3);
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
    return 0;
}