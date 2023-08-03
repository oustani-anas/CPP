/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoustani <aoustani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/09 00:41:22 by aoustani          #+#    #+#             */
/*   Updated: 2023/05/12 23:42:37 by aoustani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

#include <iostream>
#include <vector>
#include <map>
#include <fstream>
#include <sstream>
#include <string>

class BitcoinExchange
{
private:
    std::map<std::string, double> data;
public:
    BitcoinExchange(std::string file);
    BitcoinExchange(const BitcoinExchange& obj);
	BitcoinExchange& operator=(const BitcoinExchange& obj);
    bool get_price(std::string date,double &btc_price);
    ~BitcoinExchange();
};



# endif