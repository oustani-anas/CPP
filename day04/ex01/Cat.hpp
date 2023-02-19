/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoustani <aoustani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 17:49:16 by aoustani          #+#    #+#             */
/*   Updated: 2023/02/07 21:45:45 by aoustani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
private:
    Brain *brain_ptr;
public:
    Cat();
    Cat(const Cat &obj);
    Cat &operator=(const Cat &obj);
    void makeSound() const;
    ~Cat();
};


#endif
