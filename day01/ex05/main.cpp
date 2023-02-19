/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoustani <aoustani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 05:28:22 by aoustani          #+#    #+#             */
/*   Updated: 2023/01/22 01:33:32 by aoustani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"


void Harl::complain(std::string level)
{
    int i = 0;
    std::string  tabs[4] = {"debug", "info", "warning", "error"};
    void (Harl::*ptr1[4])() = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
    
    while(i < 4)
    {
        if(tabs[i].compare(level) == 0)
            (this->*ptr1[i])();
        i++;    
    }
    
}

int main()
{
    Harl Harll;
    
    Harll.complain("debug");
    std::cout << std::endl;
    Harll.complain("info");
    std::cout << std::endl;
    Harll.complain("warning");
    std::cout << std::endl;
    Harll.complain("error");
}