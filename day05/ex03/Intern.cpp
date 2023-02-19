/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoustani <aoustani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 09:26:43 by aoustani          #+#    #+#             */
/*   Updated: 2023/02/12 09:26:45 by aoustani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
Intern::Intern()
{};

Intern::Intern(const Intern &_Intern)
{
     *this = _Intern;   
};

Intern &Intern::operator= (const Intern &_Intern)
{
    int i = 0;
    while(i < 2)
    {
        this->Forms[i] = _Intern.Forms[i];
        i++;
    }
    return *this;
};

Form *Intern::createShrubberyCreationForm(std::string target)
{
    return new ShrubberyCreationForm(target);
};

Form *Intern::createRobotomyRequestForm(std::string target)
{
    return new RobotomyRequestForm(target);  
};

Form *Intern::createPresidentialPardonForm(std::string target)
{
    return  new PresidentialPardonForm(target); 
};

// typedef Form*(Intern::*PtrToMem[])(std::string _target);
Form *Intern::makeForm(std::string formName, std::string target)
{
    Intern _Intern;
    std::string _formName[3] = {"ShrubberyCreationForm", "RobotomyRequestForm", "PresidentialPardonForm"};
    // Form*(Intern::*PtrToMem[])(std::string _target) = {&Intern::createShrubberyCreationForm, &Intern::createRobotomyRequestForm, &Intern::createPresidentialPardonForm};
    int i = -1;
    while(++i < 3 && _formName[i] != formName);
    switch(i)
    {
        case 0:
            std::cout << "Intern creates" << std::endl;
            return (_Intern.createShrubberyCreationForm(target));
            break;
        case 1:
            std::cout << "Intern creates" << std::endl;
            return (_Intern.createRobotomyRequestForm(target));
            break;
        case 2:
            std::cout << "Intern creates" << std::endl;
            return (_Intern.createPresidentialPardonForm(target));
            break;
        default:
            std::cout << "!Exist" << std::endl;
    }
    return NULL;
};

Intern::~Intern()
{
};