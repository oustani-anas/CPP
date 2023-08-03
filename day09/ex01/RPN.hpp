/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoustani <aoustani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 01:46:34 by aoustani          #+#    #+#             */
/*   Updated: 2023/05/14 01:23:44 by aoustani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
#define RPN_HPP

#include <iostream>
#include <string>
#include <map>
#include <stack>
#include <vector>
#include <deque>

class Rpn
{
	private :
	std::stack<float> my_stack; 	
	public :
		Rpn();
		Rpn(const Rpn &obj);
		float get_top()
		{
			return(this->my_stack.top());
		}
		Rpn &operator=(const Rpn &obj);
		~Rpn();
		int Reverse_pn(std::string &str);
};


#endif