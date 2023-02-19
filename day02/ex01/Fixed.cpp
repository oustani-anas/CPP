/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoustani <aoustani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 01:38:13 by aoustani          #+#    #+#             */
/*   Updated: 2023/01/31 23:01:54 by aoustani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &obj)
{
    *this = obj;
    std::cout << "Copy constructor called" << std::endl;
}

Fixed &Fixed::operator=(const Fixed &copy)
{
    this->fixed_number = copy.fixed_number;
    std::cout << "Copy assignment operator called" << std::endl;
    return(*this);
}

Fixed::Fixed(const int entier)
{
    std::cout << "int constructor called" << std::endl;
    this->fixed_number = entier << f_bits;
}

Fixed::Fixed(const float reel)
{
    std::cout << "float constructor called" << std::endl;
    this->fixed_number = (int)roundf(reel * (1 << this->f_bits));
}

void Fixed::setRawBits(int const raw)
{
    fixed_number = raw;
    std::cout << "getRawBits member function called" << std::endl;
}

int Fixed::get_RawBits(void) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return(this->fixed_number);
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

float Fixed::toFloat( void ) const
{
    return((float)this->fixed_number / (1 << this->f_bits));
}

int Fixed::toInt( void ) const
{
    return((int)this->fixed_number >> this->f_bits);
}

std::ostream &operator<<(std::ostream &output, const Fixed &F)
{
    output << F.toFloat();
    return(output);
}

