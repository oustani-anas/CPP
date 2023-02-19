/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   func.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoustani <aoustani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 12:06:15 by aoustani          #+#    #+#             */
/*   Updated: 2023/02/15 14:38:56 by aoustani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"


Base *generate(void)
{
    Base *ptr;
    srand(time(NULL));
    int num = rand() % 3;
    if(num == 0)
    {
        std::cout << "A is instanciated" << std::endl;
        ptr = new(A);
        return(ptr);
    }
    else if(num == 1)
    {
        std::cout << "B is instanciated" << std::endl;
        ptr = new(B);
        return(ptr);
    }
    else if(num == 2)
    {
        std::cout << "C is instanciated" << std::endl;
        ptr = new(C);
        return(ptr);
    }
    return nullptr;
}

void identify(Base *p)
{
    A *a;
    B *b;
    C *c;
    
    a = dynamic_cast<A*>(p);
    b = dynamic_cast<B*>(p);
    c = dynamic_cast<C*>(p);

    if(a)
        std::cout << "A" << std::endl;
    if(b)
        std::cout << "B" << std::endl;
    if(c)
        std::cout << "C" << std::endl;
}

void identify(Base& p)
{
    try
    {
        A &a = dynamic_cast<A&>(p);
        (void)a;
        std::cout << "A" << std::endl;    
    }
    catch(const std::exception& e){}
    try
    {
        B &b = dynamic_cast<B&>(p);
        (void)b;
        std::cout << "B" << std::endl;
    }
    catch(const std::exception& e){}
    try
    {
        C &c = dynamic_cast<C&>(p);
        (void)c;
        std::cout << "C" << std::endl;
    }
    catch(const std::exception& e){}
    
}

