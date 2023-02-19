/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoustani <aoustani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 15:40:50 by aoustani          #+#    #+#             */
/*   Updated: 2023/02/16 17:26:10 by aoustani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_H
#define ITER_H

#include <iostream>
#include <string>

template <typename T>
void iter(T *arr,int length, void (*f)(T))
{
    for (int i = 0; i < length; i++)
    {
        f(arr[i]);
    }
}


#endif