/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoustani <aoustani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 13:10:04 by aoustani          #+#    #+#             */
/*   Updated: 2023/02/04 19:58:59 by aoustani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main()
{
    ClapTrap anas("anas");
    FragTrap oustani("oustani");
    oustani.beRepaired(1);
    anas.attack(oustani.get_name());
    oustani.highFivesGuys();
    oustani.takeDamage(99);
    oustani.beRepaired(10);
}
