/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoustani <aoustani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 09:40:56 by aoustani          #+#    #+#             */
/*   Updated: 2023/02/12 09:48:19 by aoustani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
int main()
{
  try {
		Bureaucrat	bure("Office" , 151);
		Form	obj("Mo3ahada", 10, 50);
		try {
			obj.beSigned(bure);
		} catch (...) {
		}
		bure.signForm(obj);
	} catch (const std::exception& e) {
		std::cout << e.what() << std::endl;
	}
    return 0;
}