/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoustani <aoustani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 22:15:50 by aoustani          #+#    #+#             */
/*   Updated: 2023/01/19 17:14:58 by aoustani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanA.hpp"

HumanA::HumanA(std::string name , Weapon  &wepon):wepon(wepon)
{       
    this->name = name;
}

void HumanA::attack()
{
    std::cout << name << "  attacks with their " << wepon.getType() << std::endl;
}

HumanA::~HumanA()
{
}
