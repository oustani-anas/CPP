/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoustani <aoustani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 01:11:47 by aoustani          #+#    #+#             */
/*   Updated: 2023/02/12 09:50:26 by aoustani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
int main()
{
    try
    {
        Bureaucrat b("Office1", 2);
        b.incrementBureaucratGrade();
        std::cout << b << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    //------------------------------------------
    try
    {
        Bureaucrat b("Office2", 1);
        b.incrementBureaucratGrade();
        std::cout << b << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }  
     //-----------------------------
    try
    {
        Bureaucrat b("Office3", 149);
        b.decrementBureaucratGrade();
        std::cout << b << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }    

    
    return 0;
}