/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoustani <aoustani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 23:20:40 by aoustani          #+#    #+#             */
/*   Updated: 2023/02/16 15:32:15 by aoustani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP

#include <iostream>
#include <string>

template<typename T>
void swap(T &a, T&b)
{
    T tmp = a;
    a = b;
    b = tmp;
}

template<typename T>
T min(T &a, T &b)
{
    if(a > b)
        return(b);
    return(a);
}

template<typename T>

T max(T &a, T &b)
{
    if(a > b)
        return(a);
    return(b);
}

#endif
