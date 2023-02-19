/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoustani <aoustani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 17:26:42 by aoustani          #+#    #+#             */
/*   Updated: 2023/02/16 17:38:41 by aoustani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Iter.hpp"

template<typename T> void print_all(T p)
{
    std::cout << p << std::endl;
}

int main()
{
    int arr[4] = {1, 2, 3, 4};
    iter(arr, 4, print_all);
    
    std::string ars[3] = {"anas", "abcd", "ook"};
    iter(ars, 3, print_all);
    
    float arf[5] = {6.9, 2.4, 3.0, 4.65, 5.5};
    iter(arf, 5, print_all);
}