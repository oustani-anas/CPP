/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoustani <aoustani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 01:38:13 by aoustani          #+#    #+#             */
/*   Updated: 2023/01/31 15:33:11 by aoustani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
    std::cout << "Default constructor called" << std::endl;
    RawBits = 0;
}

Fixed::Fixed(const Fixed &obj)
{
    std::cout << "Copy constructor called" << std::endl;
    //this->RawBits = obj.getRawBits();
    *this = obj;
}

Fixed &Fixed::operator=(const Fixed &copy)
{
    std::cout << "Copy assignment operator called" << std::endl;
    this->RawBits = copy.getRawBits();
    return(*this);
}

void Fixed::setRawBits( int const raw )
{
    RawBits = raw;
    std::cout << "getRawBits member function called" << std::endl;
}

int Fixed::getRawBits(void) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return(this->RawBits);
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}
