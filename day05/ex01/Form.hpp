/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoustani <aoustani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 09:41:16 by aoustani          #+#    #+#             */
/*   Updated: 2023/02/12 09:41:31 by aoustani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP
#include "Bureaucrat.hpp"
#include <iostream>
#include <exception>

class Bureaucrat;
class Form{
    private:
    const   std::string name;
    bool    sign;
    const   int gradeToSign;
    const   int gradeToExec;
    public:
    Form();
    Form(const std::string name, const int gradeTosign, const int gradeToExec); 
    Form(const Form &_Form);
    Form &operator= (const Form &_Form);
    ~Form();
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
    //Methods:
    std::string getFormName() const;
    bool getSign() const;
    int getGradeTosign() const;
    int getGradeToExec() const;
    void beSigned(Bureaucrat _Bureaucrat);
    void signForm();
};
std::ostream &operator<< (std::ostream &output, const Form &_Form);
#endif