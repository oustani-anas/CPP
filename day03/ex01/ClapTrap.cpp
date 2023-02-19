/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoustani <aoustani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 20:06:04 by aoustani          #+#    #+#             */
/*   Updated: 2023/02/04 20:06:31 by aoustani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : name("default") , Hit_points(10), Energy(10), Attack_damage(0)
{
    std::cout << "ClapTrap Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name): name(name) , Hit_points(10), Energy(10), Attack_damage(0)
{
    std::cout << "ClapTrap parameterized constructor called" << std::endl;    
}
ClapTrap::ClapTrap(const ClapTrap &obj)
{
    std::cout << "copy constructor called" << std::endl;
    *this = obj;
}

void ClapTrap::operator=(const ClapTrap &obj)
{
    std::cout << "copy assignments operator called " << std::endl;
    this->Energy = obj.Energy;
    this->Attack_damage = obj.Attack_damage;
    this->Hit_points =obj.Hit_points;
    this->name = obj.name;
}

void ClapTrap::set_damage(int ad)
{
    this->Attack_damage = ad;
}

int ClapTrap::get_damage()
{
    return(this->Attack_damage);
}

void ClapTrap::set_name(std::string name)
{
    this->name = name;
}

std::string ClapTrap::get_name()
{
    return(this->name);
}

void ClapTrap::attack(const std::string &target)
{
    if(this->Hit_points && this->Energy){
    std::cout << "ClapTrap " <<this->name;
    std::cout << " attacks " << target << ", causing ";
    std::cout << this->Attack_damage << " points of damage! " << std::endl;
    Energy--;
    }
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if(amount > (unsigned int)this->Hit_points)
    {
        std::cout << this->name << " take damage of "<< amount ;
        std::cout << " and Died" << std::endl;
        this->Hit_points = 0;
    }
    else
    {   
        this->Hit_points -= amount;
        std::cout << this->name << " take damage of "<< amount <<std::endl; 
    }
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if(this->Hit_points && this->Energy)
    {
        this->Hit_points += amount;
        std::cout << this->name << " new hit points = " << this->Hit_points << std::endl;
        this->Energy--;
    }
    else
        std::cout << "impossible to repair " << std::endl;
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap "<< this->name << " destroyed "<< std::endl;
}

