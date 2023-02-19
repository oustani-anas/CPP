/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoustani <aoustani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 20:48:48 by aoustani          #+#    #+#             */
/*   Updated: 2023/02/18 23:56:07 by aoustani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <vector>

template<typename T> 
int easy_find(T &arr, int oc)
{
    typename T::iterator iter;
    iter = std::find(arr.begin(),arr.end(), oc);
    if(iter == arr.end()){
        std::cout << "No occurence found" << std::endl;
        exit(0);
    }
    return(iter - arr.begin());
}


#endif