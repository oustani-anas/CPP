/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoustani <aoustani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 18:28:35 by aoustani          #+#    #+#             */
/*   Updated: 2023/05/13 18:23:07 by aoustani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::PmergeMe(){}
PmergeMe::~PmergeMe(){}
PmergeMe::PmergeMe(int ac, char **av)
{
   for (int i = 1; i < ac; i++)
   {
        int number;
        std::string str = av[i];
        std::istringstream iss(str);
        if(iss.fail()){
            std::cout << "INVALID ARGUMENT" << std::endl;
            exit(0);
        }
        if(!is_int(str)){
            std::cout << "INVALID ARGUMENTS" << std::endl;
            exit(0);
        }
        iss >> number;
        vect_tab.push_back(number);
        deque_tab.push_back(number);
   }
   std::cout << "before : " << std::endl;
   for (size_t i = 0; i < vect_tab.size(); i++)
   {
        std::cout << vect_tab[i] << " ";
   }
   
}
PmergeMe::PmergeMe(const PmergeMe &obj)
{
  *this = obj;    
}

PmergeMe &PmergeMe::operator=(const PmergeMe &obj)
{
    this->deque_tab = obj.deque_tab;
    this->vect_tab = obj.vect_tab;
    return *this;
}


void PmergeMe::vector_mergeinsert_sort(std::vector<int> &vect)
{
    size_t mid;
    std::vector<int> left;
    std::vector<int> right;
    if (vect.size() <= 10)
    {
        vector_insertion_sort(vect_tab);   
        return;
    }
    mid = vect.size() / 2;
    for (size_t i = 0; i < mid; i++)
        left.push_back(vect[i]);
    if (left.size() <= 10)
        vector_insertion_sort(left);
    for (size_t i = mid; i < vect.size(); i++)
        right.push_back(vect[i]);
    if (right.size() <= 10)
        vector_insertion_sort(right);
    
    vector_mergeinsert_sort(left);
    vector_mergeinsert_sort(right);
    vector_merge(vect, left, right);
}

void PmergeMe::vector_insertion_sort(std::vector<int> &vect)
{
    int j;
    for (size_t i = 0; i < vect.size(); i++)
    {
        j = i;
        while (j > 0 && vect[j - 1] > vect[j])
        {
            swap(vect[j], vect[j - 1]);
            j = j - 1;
        } 
    }
}

void PmergeMe::vector_merge(std::vector<int>& arr, std::vector<int>& left, std::vector<int>& right) 
{
    int i = 0, j = 0, k = 0;
    int left_len = left.size();
    int right_len = right.size();

    while (i < left_len && j < right_len) {
        if (left[i] < right[j])
            arr[k++] = left[i++];
        else
            arr[k++] = right[j++];
    }

    while (i < left_len)
        arr[k++] = left[i++];

    while (j < right_len)
        arr[k++] = right[j++];
}

int is_int(std::string &str)
{
    for (size_t i = 0; i < str.size(); i++)
    {
        if (str[i] < '0' || str[i] > '9')
            return 0;
    }
    return 1;
}

void swap(int &a, int &b)
{
    int tmp;
    tmp = a;
    a = b;
    b = tmp;
}