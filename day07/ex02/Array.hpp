/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoustani <aoustani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 21:06:46 by aoustani          #+#    #+#             */
/*   Updated: 2023/02/17 12:48:11 by aoustani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>

template<typename T>
class Array
{
private:
    T *arr;
    unsigned int capacity;
public:
    Array()
    {
        new T[0];
        capacity = 0;
    }
    Array(unsigned int n)
    {
        arr = new T[n];
        capacity = n;
    }
    Array(const Array &obj)
    {
        this->capacity = obj.capacity;
        this->arr = new T[this->capacity];
        for (int i = 0; i < obj.capacity; i++)
        {
            this->arr[i] = obj.arr[i];
        }
    }
    Array<T> &operator=(const Array<T> &obj)
    {
		if(this->arr)
            delete[] arr;
        this->capacity = obj.capacity;
        this->arr = new T[this->capacity];
		for(int i = 0; i < obj.capacity; i++)
        {
            this->arr[i] = obj.arr[i];
        }
		return(*this);
    }
    int size()
    {
       return(this->capacity);
	}
    T &operator[](unsigned int i);
    ~Array()
    {
        delete[] arr;
    }
};

template<typename T>
T &Array<T>::operator[](unsigned int i)
{
    if(i < this->capacity)
        return(this->arr[i]);
    throw std::out_of_range("impossible");
}


#endif