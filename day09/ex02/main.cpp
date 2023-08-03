/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoustani <aoustani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 18:27:24 by aoustani          #+#    #+#             */
/*   Updated: 2023/05/13 20:21:03 by aoustani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int main(int ac, char **av)
{
    if(ac > 1)
    {   
        PmergeMe merge_insert(ac, av);
        merge_insert.vector_result();
        merge_insert.deque_result();
    }
    else
        std::cout << "Error : invalid arguments" << std::endl;
}