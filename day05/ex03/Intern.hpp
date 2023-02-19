/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoustani <aoustani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 09:26:20 by aoustani          #+#    #+#             */
/*   Updated: 2023/02/12 09:26:22 by aoustani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP
#include <iostream>
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
class Intern
{
    private:
        Form *Forms[3];
    public:
        Intern();
        Intern(const Intern &_Intern);
        Intern &operator=(const Intern &_Intern);
        ~Intern();
        Form *makeForm(std::string formName, std::string target);
        Form *createShrubberyCreationForm(std::string target);
        Form *createRobotomyRequestForm(std::string target);
        Form *createPresidentialPardonForm(std::string target);
};
#endif