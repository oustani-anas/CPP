/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoustani <aoustani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 01:46:17 by aoustani          #+#    #+#             */
/*   Updated: 2023/05/14 01:25:20 by aoustani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int main(int ac, char **av)
{
    Rpn     obj;
    if(ac != 2)
    {
        std::cout << "Error : invalid arguments" << std::endl;
        return(0);        
    }
    std::string str = av[1];
    obj.Reverse_pn(str);
}