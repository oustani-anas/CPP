/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoustani <aoustani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 09:21:03 by aoustani          #+#    #+#             */
/*   Updated: 2023/02/12 09:21:03 by aoustani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRES_HPP
#define PRES_HPP
#include <iostream>
#include "AForm.hpp"
class PresidentialPardonForm : public Form
{
   public:
   PresidentialPardonForm(); 
   PresidentialPardonForm(std::string target);
   PresidentialPardonForm(const PresidentialPardonForm &_PresidentialPardonForm); 
   PresidentialPardonForm &operator= (const PresidentialPardonForm &_PresidentialPardonForm);
   ~PresidentialPardonForm();
   	void execute(const Bureaucrat &executor)const;
};
#endif