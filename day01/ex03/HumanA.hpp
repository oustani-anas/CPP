/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoustani <aoustani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 22:15:54 by aoustani          #+#    #+#             */
/*   Updated: 2023/01/19 16:52:42 by aoustani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include <string>

class HumanA
{
private:
    std::string name;
    Weapon& wepon;    
public:
    HumanA(std::string name , Weapon  &wepon);
    void attack();
    ~HumanA();
};
