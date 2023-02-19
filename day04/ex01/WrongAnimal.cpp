/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoustani <aoustani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 19:04:52 by aoustani          #+#    #+#             */
/*   Updated: 2023/02/06 19:13:20 by aoustani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
    std::cout << "the WrongAnimal constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &obj)
{
    std::cout << "the copy constructor called" << std::endl;
    *this = obj;
}

void WrongAnimal::makeSound() const
{
    std::cout << "WrongAnimal : WrongAnimal sounds" << std::endl;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &obj)
{
    std::cout << "copy assignment operator called" << std::endl;
    this->type = obj.type;
    return(*this);
}

void WrongAnimal::setType(std::string type)
{
    this->type = type;
}

std::string  WrongAnimal::getType() const
{
    return(this->type);
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "WrongAnimal detructor called" << std::endl;
}
