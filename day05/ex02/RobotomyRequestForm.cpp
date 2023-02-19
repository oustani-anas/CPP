/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoustani <aoustani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 09:21:06 by aoustani          #+#    #+#             */
/*   Updated: 2023/02/12 09:21:06 by aoustani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm():Form()
{};

RobotomyRequestForm::RobotomyRequestForm(std::string target):Form(target, 72, 45)
{};

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &_RobotomyRequestForm)
{
    (void)_RobotomyRequestForm;
};

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &_RobotomyRequestForm)
{
    (void)_RobotomyRequestForm;
    return *this;
};

void RobotomyRequestForm::execute(const Bureaucrat &executor) const
{
    if(executor.getGrade() > RobotomyRequestForm::getGradeTosign())
        throw GradeTooLowException();
        srand(int(0));
        if(rand() % 100 + 1 <= 50)
            std::cout << executor.getBureaucratName() << " : has been robotomized successfully 50% of the time" << std::endl;
        else
            std::cout << "Robotomy Failed" << std::endl;
};

RobotomyRequestForm::~RobotomyRequestForm()
{};
