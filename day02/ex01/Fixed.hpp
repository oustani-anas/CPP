/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoustani <aoustani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 01:38:17 by aoustani          #+#    #+#             */
/*   Updated: 2023/01/31 12:18:04 by aoustani         ###   ########.fr       */
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
        ~Fixed(); 
};

std::ostream &operator<<(std::ostream &output, const Fixed &F);

#endif