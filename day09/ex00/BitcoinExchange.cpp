/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoustani <aoustani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/09 00:41:25 by aoustani          #+#    #+#             */
/*   Updated: 2023/05/12 23:27:04 by aoustani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange(std::string file)
{
    std::ifstream infile(file);
    std::string line;

    while (std::getline(infile, line))
    {
        std::string key = line.substr(0, line.find(','));
        std::string value = line.substr(line.find(',') + 1);
        double num;
        std::istringstream iss(value);
        iss >> num;
        data.insert(std::pair<std::string, double>(key, num));
    }
    infile.close();
}
BitcoinExchange::~BitcoinExchange(){}

bool BitcoinExchange::get_price(std::string date, double &btc_price)
{
    if (date > "2022-03-29" || date < "2009-01-02")
    {
        std::cout << "Error : no date found" << std::endl;
        return(false);
    }
    std::map<std::string, double>::iterator itr;
    itr = data.find(date);
    if(itr == data.end())
    {
        itr = data.lower_bound(date);
        btc_price = itr->second;
    }
    btc_price = itr->second;
    return(true);
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange& obj)
{
    this->data = obj.data;
}

BitcoinExchange &BitcoinExchange::operator=(const BitcoinExchange& obj)
{
    this->data = obj.data;
    return(*this); 
}