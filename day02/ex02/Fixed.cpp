/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoustani <aoustani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/29 14:25:03 by aoustani          #+#    #+#             */
/*   Updated: 2023/01/31 12:20:24 by aoustani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
    this->fixed_number = 0; 
    //std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &obj)
{
    *this = obj;
    //std::cout << "Copy constructor called" << std::endl;
}

Fixed &Fixed::operator=(const Fixed &copy)
{
    this->fixed_number = copy.fixed_number;
    //std::cout << "Copy assignment operator called" << std::endl;
    return(*this);
}

Fixed::Fixed(const int entier)
{
    //std::cout << "int constructor called" << std::endl;
    this->fixed_number = entier << f_bits;
}

Fixed::Fixed(const float reel)
{
    //std::cout << "float constructor called" << std::endl;
    this->fixed_number = (int)roundf(reel * (1 << this->f_bits)); 
}

void Fixed::setRawBits(int const raw)
{
    fixed_number = raw;
    //std::cout << "getRawBits member function called" << std::endl;
}

int Fixed::get_RawBits(void) const
{
    //std::cout << "getRawBits member function called" << std::endl;
    return(this->fixed_number);
}

Fixed::~Fixed()
{
    //std::cout << "Destructor called" << std::endl;
}

float Fixed::toFloat( void ) const
{
    //std::cout <<"fixed number inside of tof "<<  fixed_number << std::endl;
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

bool Fixed::operator <(const Fixed& F)
{
    return(this->fixed_number < F.fixed_number);
}
bool Fixed::operator >( const Fixed& F)
{
    return(this->fixed_number > F.fixed_number);
}

bool Fixed::operator >=( const Fixed& F)
{
    return(this->fixed_number >= F.fixed_number);
}

bool Fixed::operator <=( const Fixed& F)
{
    return (this->fixed_number <= F.fixed_number);
} 

bool Fixed::operator ==(const Fixed& F)
{
    return(this->fixed_number == F.fixed_number);
}

bool Fixed::operator !=(const Fixed& F)
{
    return(this->fixed_number == F.fixed_number);
}

Fixed Fixed::operator+(const Fixed &F)
{
    return Fixed(this->toFloat() + F.toFloat());
}

Fixed Fixed::operator -(const Fixed &F)
{
return Fixed(this->toFloat() - F.toFloat());
}

Fixed Fixed::operator *(const Fixed &F)
{
return Fixed(this->toFloat() * F.toFloat());
}

Fixed Fixed::operator/(const Fixed &F)
{
    if (F.toFloat() != 0)
        return Fixed(this->toFloat() * F.toFloat());
    return(0);
}

//postfix increment
Fixed Fixed::operator ++(int)
{
    Fixed tmp(*this);
    this->fixed_number++;
    return (tmp);
}
//prefix increment
Fixed &Fixed::operator ++()
{
    this->fixed_number++;
    return(*this);
}

Fixed &Fixed::operator --()
{
    this->fixed_number--;
    return(*this);
}

Fixed Fixed::operator --(int)
{
    Fixed tmp(*this);
    this->fixed_number--;
    return (tmp);
}


const Fixed &Fixed::min(const Fixed &a, const Fixed &b)
{
    if(a.toFloat() < b.toFloat())
        return(a);
    return(b);
}
const Fixed &Fixed::max(const Fixed &a, const Fixed &b)
{
    if(a.toFloat() > b.toFloat())
        return(a);
    return(b);
}
Fixed &Fixed::min(Fixed &a, Fixed &b)
{
    if(a.toFloat() < b.toFloat())
        return(a);
    return(b);
    
}
Fixed &Fixed::max(Fixed &a, Fixed &b)
{
    if(a.toFloat() > b.toFloat())
        return(a);
    return(b);
}

