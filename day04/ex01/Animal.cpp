/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoustani <aoustani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 00:52:38 by aoustani          #+#    #+#             */
/*   Updated: 2023/02/06 18:52:58 by aoustani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
    std::cout << "the Animal constructor called" << std::endl;
}

Animal::Animal(const Animal &obj)
{
    std::cout << "the copy constructor called" << std::endl;
    *this = obj;
}

void Animal::makeSound() const
{
    std::cout << "Animal : Animal sounds" << std::endl;
}

Animal &Animal::operator=(const Animal &obj)
{
    std::cout << "copy assignment operator called" << std::endl;
    this->type = obj.type;
    return(*this);
}

void Animal::setType(std::string type)
{
    this->type = type;
}

std::string  Animal::getType() const
{
    return(this->type);
}

Animal::~Animal()
{
    std::cout << "animal detructor called" << std::endl;
}
