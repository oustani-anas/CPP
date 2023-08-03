/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoustani <aoustani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/09 00:41:28 by aoustani          #+#    #+#             */
/*   Updated: 2023/05/13 00:04:52 by aoustani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

bool check_date(std::string date)
{
    std::string année;
    std::string mois;
    std::string jour;
    double year;
    double month;
    double day;
    int i = 0;
    if (date.length() != 10)
    {
        std::cout << "Error: invalid date" << std::endl;
        return(false);
    }
    while (date[i])
    {
        if(i == 4 || i == 7)
        {
            if(date[i] != '-'){
                std::cout << "Error: invalid date" << std::endl;
                return(false);
            }
        }
        else if(!isdigit(date[i])){
            
            std::cout << "Error: invalid date" << std::endl;
            return(false);
        }
        i++;
    }
    année = date.substr(0, 4);    
    mois = date.substr(5, 2); 
    jour = date.substr(8, 2);
    std::istringstream y(année);
    std::istringstream m(mois);
    std::istringstream d(jour);
    y >> year;
    m >> month;
    d >> day;
    if(day <= 0)
    {
        std::cout << "Error: invalid date => " << date << std::endl;
        return(false);
    }
    if(month == 4 || month == 6 || month == 9 || month == 11)
    {
        if(day > 30)
        {
            std::cout << "Error: invalid date " << std::endl;
            return(false);
        }
    }
    else if(month == 2)
    {
        if(day > 28)
        {
            std::cout << "Error: invalid date " << std::endl;
            return(false);
        }
    }
    if (day > 31 || month > 12 || year > 2022 || year < 2009)
    {
        std::cout << "Error: invalid date => " << date << std::endl;
        return(false);
    }
    return(true);
}

double check_value(std::string value)
{
    double val;
    int i = 0;
    while (value[i])
    {
        if(i == 0 && (value[i] == '-' || value[i] == '+'))
            i++;
        if(isdigit(value[i]))
        {
            if(value[++i] == '.')
            {
                if(!isdigit(value[++i])){
                    std::cout << "Error: invalid value" << std::endl;
                    return(0);
                }
            }
        }
        else   
        {
            std::cout << "Error: bad input" << std::endl;
            return(0);
        }   
        i++;
    }
    std::istringstream v(value);
    v >> val;
    if(val < 0)
    {
        std::cout << "Error: not a positive number" << std::endl;
        return(0);
    }
    if(val > 1000 || value.length() > 4)
    {
        std::cout << "Error: too large a number" << std::endl;
        return(0);
    }
    return(val);
}

bool check_line(std::string line, BitcoinExchange Btc, bool &check)
{
    double  val;
    double  btc_price;
    
    if (line.empty())
        return(true);
    if (check == true && line == "date | value")
    {
        check = false;
        return(true);
    }
    if (check == true && line != "date | value")
    {
        std::cout << "Error: invalid file" << std::endl;
        exit(0);
    }
    if(line.length() < 13)
    {
        std::cout << "Error : invalid value" << std::endl;
        return(false);
    }
    std::string date = line.substr(0, line.find('|') - 1);
    std::string value = line.substr(line.find('|') + 2);
    if(value.empty())
    {
        std::cout << "Error: invalid value" << std::endl;
        return(false);
    }
    if (!check_date(date))
    {
        return(false);
    }
    val = check_value(value);
    if (val >= 0 && check_date(date) && Btc.get_price(date, btc_price) == true)
    {
        std::cout << date << " => " << val << " = " << btc_price * val << std::endl;
    }
    return(true);
}

bool check_input(std::string input, BitcoinExchange Btc)
{
    std::ifstream infile(input);
    std::string line;
    bool check = true;
    
    if(!infile.is_open())
    {
        std::cout << "Error: could not open file." << std::endl;
        return(false);
    }
    while (std::getline(infile, line))
    {
        check_line(line, Btc, check);
    }
    infile.close();
    return(true);
}

int main(int ac, char **av)
{
    if(ac != 2)
    {
        std::cout << "Error: could not open file." << std::endl;
        return(0);
    }
    BitcoinExchange Btc("data.csv");
    check_input(av[1], Btc);
}