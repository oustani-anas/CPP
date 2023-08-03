/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoustani <aoustani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 01:47:25 by aoustani          #+#    #+#             */
/*   Updated: 2023/05/13 00:56:14 by aoustani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

Rpn::Rpn(){};
Rpn::~Rpn(){};
Rpn::Rpn(const Rpn &obj)
{
    *this = obj;
}
Rpn &Rpn::operator=(const Rpn &obj)
{
    if(this != &obj)
        this->my_stack = obj.my_stack;
    return(*this);
}

int Rpn::Reverse_pn(std::string &str)
{
    float i = 0;
    float number_count = 0;
    float op_count = 0;
    float first_number;
    float second_number;
    float result_number;
    for(i = 0; i < str.length(); i++)
    {
        if(str[i] == ' ')
        {
            continue;
        }
        else if(isdigit(str[i]))
        {
            number_count += 1;
            float num = str[i] - '0';
            my_stack.push(num);
        }
        else if(my_stack.size() >= 2 && (str[i] == '+' || str[i] == '-' || str[i] == '*' || str[i] == '/'))
        {
            first_number = my_stack.top();
            my_stack.pop();
            second_number = my_stack.top();
            my_stack.pop();
            
            op_count += 1;
            if(str[i] == '+')
            {
                result_number = second_number + first_number;
                my_stack.push(result_number);   
            }
            if(str[i] == '-')
            {
                result_number = second_number - first_number;
                my_stack.push(result_number);   
            }
            if(str[i] == '*')
            {
                result_number = second_number * first_number;
                my_stack.push(result_number);      
            }
            if(str[i] == '/')
            {
                result_number = second_number / first_number;
                my_stack.push(result_number);      
            }
        }
        else
        {
            std::cout << "Error : invalid argument" << std::endl;
            exit(1);
        }
    }
    if(op_count != number_count - 1)
    {
            std::cout << "Error : wrong" << std::endl;
            exit(1);
    }
    std::cout << my_stack.top() << std::endl;
    return(0);
}
