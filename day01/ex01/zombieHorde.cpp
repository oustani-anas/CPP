/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoustani <aoustani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 16:29:35 by aoustani          #+#    #+#             */
/*   Updated: 2023/01/18 17:21:20 by aoustani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
    Zombie *zombieH = new Zombie[N];
    int i = 0;
    while(i < N)
    {
        zombieH[i].set_name(name);
        i++;
    }
    return(zombieH);
}