/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoustani <aoustani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 19:04:57 by aoustani          #+#    #+#             */
/*   Updated: 2023/02/06 19:14:52 by aoustani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
    this->type = "WrongCat";
    std::cout << "the WrongCat constructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat &obj)
{
    std::cout << "the WrongCat parametrized constructor called" << std::endl;
    *this = obj;
}

WrongCat &WrongCat::operator=(const WrongCat &obj)
{
    this->type = obj.type;
    return(*this);
}

void WrongCat::makeSound() const
{
    std::cout << "WrongCat : meo meo" << std::endl;
}

WrongCat::~WrongCat()
{
    std::cout << "the destructor called" << std::endl;
}
