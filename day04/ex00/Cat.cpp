#include "Cat.hpp"
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoustani <aoustani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 17:49:14 by aoustani          #+#    #+#             */
/*   Updated: 2023/02/05 17:59:11 by aoustani         ###   ########.fr       */
/*                                                                            */
/**************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
    this->type = "Cat";
    std::cout << "the Cat constructor called" << std::endl;
}

Cat::Cat(const Cat &obj)
{
    std::cout << "the Cat parametrized constructor called" << std::endl;
    *this = obj;
}

Cat &Cat::operator=(const Cat &obj)
{
    this->type = obj.type;
    return(*this);
}

void Cat::makeSound() const
{
    std::cout << "Cat : meo meo" << std::endl;
}

Cat::~Cat()
{
    std::cout << "the destructor called" << std::endl;
}
