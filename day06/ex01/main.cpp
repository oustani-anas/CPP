/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoustani <aoustani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 17:24:38 by aoustani          #+#    #+#             */
/*   Updated: 2023/02/14 18:01:26 by aoustani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int main()
{
    Data d;
    d.number = 10;
    data *dp;
    dp = &d;
    std::cout << d.number << std::endl;
    std::cout << dp << std::endl;
    uintptr_t ptr  = Serializer::serialize(dp);
    std::cout << ptr << std::endl; 
    std::cout << Serializer::deserialize(ptr) << std::endl;
    std::cout << Serializer::deserialize(ptr)->number << std::endl;
}