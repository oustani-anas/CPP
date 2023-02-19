/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoustani <aoustani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 22:15:57 by aoustani          #+#    #+#             */
/*   Updated: 2023/01/20 16:44:01 by aoustani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
    this->name = name;
}

void HumanB::attack()
{
    if(wepon)
    std::cout << name << " attacks with their " << wepon->getType() << std::endl;
}

void HumanB::setWeapon(Weapon wepon)
{
    this->wepon = &wepon;   
}

HumanB::~HumanB()
{}