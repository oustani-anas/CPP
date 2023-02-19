/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoustani <aoustani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 22:45:03 by aoustani          #+#    #+#             */
/*   Updated: 2023/02/18 23:34:10 by aoustani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MutantStack_HPP
#define MutantStack_HPP

#include <iostream>
#include <stack>

template<typename T>
class	MutantStack : public std::stack<T>
{
	public	:
		MutantStack (){};
		~MutantStack (){};
		MutantStack (MutantStack const &obj)
        {
            *this = obj;
        }
		MutantStack &operator= (const MutantStack &obj)
        {
            *this = obj;
            return(*this);
        }
        
        typedef typename std::stack<T>::container_type::iterator iterator;
        
        iterator begin()
        {
            return(this->c.begin());   
        }

        iterator end()
        {
            return(this->c.end());
        }
};

#endif
