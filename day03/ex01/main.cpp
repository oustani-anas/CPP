/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoustani <aoustani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 13:10:04 by aoustani          #+#    #+#             */
/*   Updated: 2023/02/04 17:31:06 by aoustani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main()
{
ClapTrap anas("anas");
ScavTrap oustani("oustani");
anas.set_damage(4);
anas.attack(oustani.get_name());
oustani.takeDamage(anas.get_damage());
oustani.beRepaired(2);
std::cout << std::endl;
oustani.set_damage(20);
oustani.attack(anas.get_name());
anas.takeDamage(oustani.get_damage());
anas.beRepaired(11);
std::cout << std::endl;
anas.attack(oustani.get_name());
oustani.takeDamage(anas.get_damage());
return (0);
}
