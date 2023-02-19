/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoustani <aoustani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 20:06:06 by aoustani          #+#    #+#             */
/*   Updated: 2023/02/04 20:10:02 by aoustani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
#include <string>

class ClapTrap
{
protected:
    std::string name;
    int Hit_points;
    int Energy;
    int Attack_damage;
    
public:
    ClapTrap();
    ClapTrap(std::string Name);
    ClapTrap( const ClapTrap &obj);
    void operator=(const ClapTrap &obj);
    void set_name(std::string name);
    void set_damage(int ad);
    int get_damage();
    std::string get_name();
    void attack(const std::string& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
    ~ClapTrap();
};

#endif