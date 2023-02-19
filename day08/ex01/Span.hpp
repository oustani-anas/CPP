/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoustani <aoustani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 17:40:00 by aoustani          #+#    #+#             */
/*   Updated: 2023/02/18 23:48:30 by aoustani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <vector>
#include <iostream>

class Span
{
    private:
    unsigned int N;
    unsigned int cp;
    std::vector<int> Array;
    public:
    Span();
    Span(int n);
    void addNumber(int n);
    template<typename T> void fill_array(T begin, T end)
    {
        T index;
	    this->Array.insert(this->Array.begin(), begin, end);
	    if(this->Array.size() >= N)
		    throw std::runtime_error("ERROR");
    }
    int shortestSpan();
    int longestSpan();
    ~Span();
};


#endif