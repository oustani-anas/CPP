#include "Bureaucrat.hpp"
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoustani <aoustani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 01:11:42 by aoustani          #+#    #+#             */
/*   Updated: 2023/02/11 08:26:08 by aoustani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
Bureaucrat::Bureaucrat(): name(""), grade(150)
{
    std::cout << "Default constructor called" << std::endl;
};
Bureaucrat::Bureaucrat(std::string _name, int _grade): name(_name), grade(_grade)
{
};

Bureaucrat::~Bureaucrat()
{
    std::cout << "Destructor Called" << std::endl;
};

Bureaucrat::Bureaucrat(const Bureaucrat &_Bureaucrat)
{
	*this = _Bureaucrat;
	std::cout << "Copy Constructor Called" << std::endl;
};

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &_Bureaucrat)
{
	this->grade = _Bureaucrat.grade;
	std::cout << "Copy Assingnement Operator Called" << std::endl;
	return *this;
};
std::string Bureaucrat::getName()const
{
	return this->name;	
};
int Bureaucrat::getGrade() const
{
	return this->grade;
};
 void Bureaucrat::incrementBureaucratGrade()
 {
	this->grade--;
	if(grade < 1)
		throw Bureaucrat::GradeTooHighException();
 };
 void Bureaucrat::decrementBureaucratGrade()
 {
	this->grade++;
	if(grade > 150)
		throw Bureaucrat::GradeTooLowException();
	
 };
Bureaucrat::GradeTooHighException::GradeTooHighException() throw()
{
};

Bureaucrat::GradeTooLowException::GradeTooLowException() throw()
{
};

const char* Bureaucrat::GradeTooLowException::what() const throw()
 {
		return ("Grade Too Low !");
 };

 const char* Bureaucrat::GradeTooHighException::what() const throw()
 {
		return ("Grade Too High !");
 };

std::ostream &operator<< (std::ostream &output, const Bureaucrat &_Bureaucrat)
{
	output << _Bureaucrat.getName() << ", bureaucrat grade "<< _Bureaucrat.getGrade() << "." << std::endl;
	return output;
};
