/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoustani <aoustani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 09:20:55 by aoustani          #+#    #+#             */
/*   Updated: 2023/02/12 09:20:55 by aoustani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAU_HPP
#define BUREAU_HPP
#include <iostream>
#include <exception>
#include "AForm.hpp"
class Form;
class Bureaucrat{
    private:
        const std::string name;
        int grade;
    public:
    Bureaucrat();
    Bureaucrat(std::string name, int grade);
    Bureaucrat(const Bureaucrat &_Bureaucrat);
    Bureaucrat &operator= (const Bureaucrat &_Bureaucrat);
    ~Bureaucrat();
    //Nested Classes:
    class GradeTooHighException : public std::exception
    {
        public:
        GradeTooHighException() throw();
        const char* what() const throw();
    };
    class GradeTooLowException : public std::exception
    {
        public:
        GradeTooLowException() throw();
        const char* what() const throw();
    };
    //methods:
    std::string getBureaucratName()const;
    int getGrade() const;
    void incrementBureaucratGrade();
    void decrementBureaucratGrade();
    void signForm(Form &_Form);
    void executeForm(Form const & form);
    
};
std::ostream &operator<< (std::ostream &output, const Bureaucrat &_Bureaucrat);
#endif