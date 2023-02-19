/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoustani <aoustani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 17:39:58 by aoustani          #+#    #+#             */
/*   Updated: 2023/02/18 23:46:54 by aoustani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span()
{
    
}
Span::Span(int N)
{
    this->N = N;
    this->cp = 0;
}

Span::~Span()
{
}

void	Span::addNumber(int nb)
{
	if(cp < N)
	{
		cp++;
		Array.push_back(nb);
	}
	else
		throw std::exception();
}

int	Span::shortestSpan()
{
	for (std::vector<int>::iterator i = Array.begin(); (i + 1) != Array.end(); ++i)
	{
		std::vector<int>::iterator fin;
		fin = find (i + 1, Array.end(), *i);
		if (*fin == *i)
			return (0);
	}
	std::vector<int>::iterator iter;
    iter = std::min_element(Array.begin(),Array.end());
	std::vector<int>::iterator iter1;
    iter1 = std::max_element(Array.begin(),Array.end());
	int ret = *iter1 - *iter;
	int nb;
	for (std::vector<int>::iterator i = Array.begin(); i != Array.end(); ++i)
	{
		std::vector<int>::iterator j = i + 1;
		while(j != Array.end())
		{
			nb = *i - *j; 
			if(nb < 0)
                nb = nb * -1; 
            if(nb < ret)
                ret = nb;
			j++;
		}
	}
	return (ret);
}
int	Span::longestSpan()
{
	std::vector<int>::iterator it;
    it = std::min_element(Array.begin(),Array.end());
	std::vector<int>::iterator it1;
    it1 = std::max_element(Array.begin(),Array.end());
	return (*it1 - *it);
}

// const char* Span::excep::what() const throw()
// {
//     return " error number N ";
// }