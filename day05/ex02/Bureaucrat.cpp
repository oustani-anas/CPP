/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoustani <aoustani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 09:20:52 by aoustani          #+#    #+#             */
/*   Updated: 2023/02/12 09:20:52 by aoustani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
Bureaucrat::Bureaucrat(): name(""), grade(150)
{
 };
Bureaucrat::Bureaucrat(std::string _name, int _grade): name(_name)
{	if(_grade > 150)
	 	throw GradeTooLowException();
	else if(_grade < 1)
	 	throw GradeTooHighException();
	this->grade = _grade;
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
		std::cout << this->getBureaucratName() << " Couldn't Sign The " << _Form.getFormName() << " Because Of The Grade : " << _Form.getGradeTosign() << std::endl;
};
void Bureaucrat::executeForm(Form const &_Form)
{
	try{
		_Form.execute(*this);
		std::cout << *this << " Executed " << _Form.getFormName() << std::endl;
	}
	catch(std::exception &e){
		std::cout << e.what() << std::endl;
	}
};
std::ostream &operator<< (std::ostream &output, const Bureaucrat &_Bureaucrat)
{
	output << _Bureaucrat.getBureaucratName();
	return output;
};
