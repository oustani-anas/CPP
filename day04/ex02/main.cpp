/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoustani <aoustani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 00:47:47 by aoustani          #+#    #+#             */
/*   Updated: 2023/02/10 20:29:44 by aoustani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"


int main()
{  
    Animal *Array[4];
    for (int i = 0; i < 4; i++)
    {
        if (i < 2)
            Array[i] = new Cat();
        else
            Array[i] = new Dog();
    }
    for (int i = 0; i < 4; i++)
    {
        Array[i]->makeSound();
        delete Array[i];
    }
    return 0;
    
}
