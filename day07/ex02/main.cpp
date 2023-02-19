/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoustani <aoustani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 21:05:09 by aoustani          #+#    #+#             */
/*   Updated: 2023/02/17 12:56:37 by aoustani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main(){
    
    Array<int> arr(10);

    int ray[10] = {44, 12, 14,65,7, 3456, 77,98,70, 56};

	for (int i = 0; i < 10; i++){
		arr[i] = ray[i];
	}

	std::cout << "element Of The Array" << std::endl;
	for (int i = 0; i < 10; i++)
		std::cout << arr[i] << " ";

    std::cout << std::endl;
	try {
		arr[-2] = 10;
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	
	Array<std::string> ars(3);
	std::string str[3] = {"abc", "yes" , "young"};
	
	for (int i = 0; i < 3; i++){
		ars[i] = str[i];
	}
	
	std::cout << "element Of The Array" << std::endl;
	for (int i = 0; i < 3; i++)
		std::cout << ars[i] << " ";
}