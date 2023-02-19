/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoustani <aoustani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 00:52:48 by aoustani          #+#    #+#             */
/*   Updated: 2023/02/08 08:23:55 by aoustani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_H
#define ANIMAL_H

#include <iostream>
#include <string>

class Animal
{
protected:
    std::string type;
public:
    Animal();
    Animal(const Animal &obj);
    Animal &operator=(const Animal &obj);
    void setType(std::string type);
    std::string getType() const;
    virtual void makeSound() const;
    virtual ~Animal();
};


#endif