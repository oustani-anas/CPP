/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe_2.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoustani <aoustani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 00:23:13 by aoustani          #+#    #+#             */
/*   Updated: 2023/05/13 20:21:18 by aoustani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

void PmergeMe::deque_insertion_sort(std::deque<int> &deq)
{
    size_t j;
    for (size_t i = 0; i < deq.size(); i++)
    {
        j = i;
        while (j > 0 && deq[j - 1] > deq[j])
        {
            swap(deq[j], deq[j - 1]);
            j = j - 1;
        } 
    }
}

void PmergeMe::deque_mergeinsert_sort(std::deque<int> &deq)
{
    size_t mid;
    std::deque<int> left;
    std::deque<int> right;
    if (deq.size() <= 10)
    {
        deque_insertion_sort(deq);   
        return;
    }
    mid = deq.size() / 2;
    for (size_t i = 0; i < mid; i++)
        left.push_back(deq[i]);
    if (left.size() <= 10)
        deque_insertion_sort(left);
    for (size_t i = mid; i < deq.size(); i++)
        right.push_back(deq[i]);
    if (right.size() <= 10)
        deque_insertion_sort(right);
    
    deque_mergeinsert_sort(left);
    deque_mergeinsert_sort(right);
    deque_merge(deq, left, right);
}

void PmergeMe::deque_merge(std::deque<int>& arr, std::deque<int>& left, std::deque<int>& right)
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

void PmergeMe::vector_result()
{
    clock_t start_time;
    clock_t end_time;
    double duration;
    
    start_time = clock();
    vector_mergeinsert_sort(vect_tab);
    end_time = clock();
    duration = static_cast<double>(end_time - start_time) / CLOCKS_PER_SEC;
    std::cout << std::endl << "after : " << std::endl;
    for (size_t i = 0; i < vect_tab.size(); i++)
    {
        std::cout << vect_tab[i] << " ";
    }
    std::cout << std::endl;
    std::cout << "Time to process a range of " << vect_tab.size();
    std::cout << " elements with std::vector : " << duration;
    std::cout << " s" << std::endl;     
}

void PmergeMe::deque_result()
{
    clock_t start_time;
    clock_t end_time;
    double duration;
    
    start_time = clock();
    deque_mergeinsert_sort(deque_tab);
    end_time = clock();
    duration = static_cast<double>(end_time - start_time) / CLOCKS_PER_SEC;
    std::cout << "Time to process a range of " << deque_tab.size();
    std::cout << " elements with std::deque : " << duration;
    std::cout << " s" << std::endl;
}