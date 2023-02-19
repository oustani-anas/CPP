/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoustani <aoustani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 20:06:10 by aoustani          #+#    #+#             */
/*   Updated: 2023/02/04 20:09:16 by aoustani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
    std::cout << " ScavTrap constructor called " << std::endl;
    this->Energy = 50;
    this->Hit_points = 100;
    this->Attack_damage = 20;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    std::cout << "ScavTrap parameterized constructor called " << std::endl;
    this->name = name;
    this->Energy = 50;
    this->Hit_points = 100;
    this->Attack_damage = 20;
}

ScavTrap::ScavTrap(ScavTrap &obj)
{
    std::cout << "copy constructor called " << std::endl;
    *this = obj;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &obj)
{
    this->Attack_damage = obj.Attack_damage;
    this->Energy = obj.Energy;
    this->Hit_points = obj.Hit_points;
    this->name = obj.name;
    return(*this);
}

void ScavTrap::guardGate()
{
    std::cout << "The ScavTrap is now in Gate keeper mode " << std::endl;   
}

void ScavTrap::attack(const std::string &target)
{
    std::cout << "the ScavTrap " << this->name << " attacks ";
    std::cout << target << " causing " << this->Attack_damage;
    std::cout << " points of damage !";
    this->Energy--;
}

void ScavTrap::takeDamage(unsigned int amount)
{
    if(amount > (unsigned int)this->Hit_points)
    {
        std::cout << this->name << " take damage of "<< amount;
        std::cout << " and Died" << std::endl;
        this->Hit_points = 0;
    }
    else
    {   
        this->Hit_points -= amount;
        std::cout << this->name << " take damage of " << amount << std::endl; 
    }
}

void ScavTrap::beRepaired(unsigned int amount)
{
    if(this->Hit_points && this->Energy)
    {
        this->Hit_points += amount;
        std::cout << this->name << " new hit points = " << this->Hit_points << std::endl;
        this->Energy--;
    }
    else
        std::cout << "impossible " << std::endl;   
}

ScavTrap::~ScavTrap()
{
    std::cout << " the destructor called " << std::endl;   
}