/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoustani <aoustani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 01:38:17 by aoustani          #+#    #+#             */
/*   Updated: 2023/01/31 12:15:31 by aoustani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
#define FIXED_H

#include <iostream>

class Fixed
{
    private:
        int RawBits;
        static const int f_bits = 8;
    
    public:
        Fixed();
        Fixed(const Fixed &obj);
        Fixed &operator=(const Fixed &copy);
        void setRawBits( int const raw );
        int getRawBits( void ) const;
        ~Fixed(); 
};

#endif