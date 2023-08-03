/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoustani <aoustani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 18:28:32 by aoustani          #+#    #+#             */
/*   Updated: 2023/05/13 18:23:58 by aoustani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <iostream>
#include <vector>
#include <stack>
#include <string>
#include <sstream>

class PmergeMe
{
public:
    std::vector<int> vect_tab;
    std::deque<int> deque_tab;
    PmergeMe();
    PmergeMe(int ac, char **av);
    PmergeMe(const PmergeMe &obj);
    PmergeMe &operator=(const PmergeMe &obj);
    // vector
    void vector_mergeinsert_sort(std::vector<int> &vect);
    void vector_insertion_sort(std::vector<int> &vect);
    void vector_merge(std::vector<int>& arr, std::vector<int>& left, std::vector<int>& right);
    void vector_result();
    // deque
    void deque_mergeinsert_sort(std::deque<int> &deq);
    void deque_insertion_sort(std::deque<int> &vect);
    void deque_merge(std::deque<int>& arr, std::deque<int>& left, std::deque<int>& right);
    void deque_result();
    ~PmergeMe();
};

void swap(int &a, int &b);
void message_result(size_t size, double duration);
int is_int(std::string &str);

#endif