
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoustani <aoustani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 17:49:19 by aoustani          #+#    #+#             */
/*   Updated: 2023/02/05 17:49:20 by aoustani         ###   ########.fr       */
/*                                                                            */
/**************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
    this->type = "Dog";
    brain_ptr = new Brain();
    std::cout << "the Dog constructor called " << std::endl;
}

Dog::Dog(const Dog &obj)
{
    std::cout << "Dog copy constructor called " << std::endl;
    this->type = obj.type;
    this->brain_ptr = new Brain;
    *(this->brain_ptr) = *(obj.brain_ptr);
}

Dog &Dog::operator=(const Dog &obj)
{
    std::cout << "Dog copy Assingnement operator called " << std::endl;
    if(this != &obj) {
        this->type = obj.type;
        if (brain_ptr)
            delete brain_ptr;
        brain_ptr = new Brain();
        *(this->brain_ptr) = *(obj.brain_ptr);
    }
    return(*this);
}

void Dog::makeSound() const
{
    std::cout << "Dog : Woof Woof" << std::endl;
}

Dog::~Dog()
{
    std::cout << "the Dog destructor called" << std::endl;
    delete brain_ptr;
}
