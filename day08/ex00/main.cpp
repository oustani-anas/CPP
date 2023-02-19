/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoustani <aoustani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 20:48:46 by aoustani          #+#    #+#             */
/*   Updated: 2023/02/18 23:57:03 by aoustani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Easyfind.hpp"

int main()
{
    std::vector<int> my;
    for (size_t i = 0; i < 10; i++)
    {
        my.push_back(i + 1);
    }
    std::cout << easy_find(my, 9) << std::endl;
    
    std::cout << std::endl;
    
    std::vector<int> vect;
    for (size_t i = 0; i < 10; i++)
    {
        vect.push_back(i * 2);
    }
    std::cout << easy_find(my, 0) << std::endl;
    
}