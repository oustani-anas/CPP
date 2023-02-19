/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoustani <aoustani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 09:21:09 by aoustani          #+#    #+#             */
/*   Updated: 2023/02/12 09:21:09 by aoustani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMY_HPP
#define ROBOTOMY_HPP
#include <iostream>
#include "AForm.hpp"
class RobotomyRequestForm: public Form{
  public:
  RobotomyRequestForm();
  RobotomyRequestForm(std::string target);
  RobotomyRequestForm(const RobotomyRequestForm &_RobotomyRequestForm);
  RobotomyRequestForm &operator= (const RobotomyRequestForm &_RobotomyRequestForm);
  void execute(Bureaucrat const & executor) const;
  ~RobotomyRequestForm();
};
#endif