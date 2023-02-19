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
#include "Form.hpp"
Bureaucrat::Bureaucrat(): name(""), grade(150)
{
 };
Bureaucrat::Bureaucrat(std::string _name, int _grade): name(_name), grade(_grade)
{
};

Bureaucrat::~Bureaucrat()
{
};

Bureaucrat::Bureaucrat(const Bureaucrat &_Bureaucrat)
{
	*this = _Bureaucrat;
};

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &_Bureaucrat)
{
	this->grade = _Bureaucrat.grade;
	return *this;
};
std::string Bureaucrat::getBureaucratName()const
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
 void Bureaucrat::signForm(Form &_Form)
{
	if(_Form.getSign())
		std::cout << this->getBureaucratName() << " Signed " << _Form.getFormName();
	else
		std::cout << this->getBureaucratName() << " Couldn't Sign The " << _Form.getFormName() << " Because Of The Grade :" << _Form.getGradeTosign() << std::endl;
};
std::ostream &operator<< (std::ostream &output, const Bureaucrat &_Bureaucrat)
{
	output << _Bureaucrat.getBureaucratName() << ", bureaucrat grade "<< _Bureaucrat.getGrade() << "." << std::endl;
	return output;
};
