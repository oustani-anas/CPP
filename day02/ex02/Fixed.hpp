/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoustani <aoustani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 01:38:17 by aoustani          #+#    #+#             */
/*   Updated: 2023/01/31 12:20:03 by aoustani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
#define FIXED_H

#include <iostream>
#include <cmath>

class Fixed
{
    private:
        int fixed_number;
        static const int f_bits = 8;
    
    public:
        Fixed();
        Fixed(const int entier);
        Fixed(const float reel);
        Fixed(const Fixed &obj);
        Fixed &operator=(const Fixed &copy);
        void setRawBits( int const raw );
        int get_RawBits( void ) const;
        int toInt( void ) const;
        float toFloat( void ) const;
        
        //operators
        bool operator <(const Fixed& F);
        bool operator >( const Fixed& F);
        bool operator >=( const Fixed& F);
        bool operator <=( const Fixed& F); 
        bool operator ==(const Fixed& F);
        bool operator !=(const Fixed& F);
        
        Fixed operator+(const Fixed &F);
        Fixed operator-(const Fixed &F);
        Fixed operator*(const Fixed &F);
        Fixed operator/(const Fixed &F);
        
        Fixed &operator --();
        Fixed operator ++(int);
        Fixed &operator ++();
        Fixed operator --(int);
        
        static const Fixed &min(const Fixed &a, const Fixed &b);
        static const Fixed &max(const Fixed &a, const Fixed &b);
        static Fixed &min(Fixed &a, Fixed &b);
        static Fixed &max(Fixed &a, Fixed &b);
        ~Fixed(); 
};

std::ostream &operator<<(std::ostream &output, const Fixed &F);

#endif