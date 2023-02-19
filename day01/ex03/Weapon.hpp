/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoustani <aoustani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 22:16:08 by aoustani          #+#    #+#             */
/*   Updated: 2023/01/19 16:08:05 by aoustani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>
#include <string>

class Weapon
{
  private:
    std::string type; 
 public:
    Weapon(std::string type) {
      this->type = type;
    }
    std::string const &getType();
    void setType(std::string type);
    
};






#endif