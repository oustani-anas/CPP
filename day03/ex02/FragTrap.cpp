/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoustani <aoustani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 22:36:43 by aoustani          #+#    #+#             */
/*   Updated: 2023/02/04 20:08:47 by aoustani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
    std::cout << "FragTrap Default constructor called " << std::endl;
    this->Energy = 100;
    this->Hit_points = 100;
    this->Attack_damage = 30;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
    std::cout << "FragTrap parameterized constructor called " << std::endl;
    this->Energy = 100;
    this->Hit_points = 100;
    this->Attack_damage = 30;
}

FragTrap::FragTrap(const FragTrap &obj)
{
    std::cout << "copy constructor called" << std::endl;
    *this = obj;
}

FragTrap &FragTrap::operator=(const FragTrap &obj)
{
    this->Attack_damage = obj.Attack_damage;
    this->Energy = obj.Energy;
    this->Hit_points = obj.Hit_points;
    this->name = obj.name;
    return(*this);
}

void FragTrap::highFivesGuys(void)
{
    if(this->Energy && this->Hit_points)
        std::cout << "FragTrap : ✋" << std::endl;
}
