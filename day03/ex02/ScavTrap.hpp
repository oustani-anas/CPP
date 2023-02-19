/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoustani <aoustani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 20:06:13 by aoustani          #+#    #+#             */
/*   Updated: 2023/02/03 17:11:46 by aoustani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_H
#define SCAVTRAP_H

#include "ClapTrap.hpp"
#include <iostream>

class ScavTrap : public ClapTrap
{
    public :
	ScavTrap();
	ScavTrap(std::string name);
    ScavTrap(ScavTrap &obj);
    ScavTrap &operator=(const ScavTrap &obj);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
    void guardGate();
	void attack(const std::string& target);
    ~ScavTrap();
};


#endif