/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoustani <aoustani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 16:27:36 by aoustani          #+#    #+#             */
/*   Updated: 2023/01/22 03:07:56 by aoustani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    int i = 0;
    int z_number = 10;
    Zombie *zombieH = zombieHorde(z_number,"booo");
    while(i < z_number)
    {
        zombieH[i].announce();
        i++;
    }
    delete[] zombieH;
}