/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-gand <mel-gand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 07:08:18 by mel-gand          #+#    #+#             */
/*   Updated: 2023/11/01 12:20:23 by mel-gand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Harl.hpp"

Harl::Harl()
{
    
}
Harl::~Harl()
{
    
}

void Harl::debug(void)
{
     std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl;
}

void Harl::info(void)
{
    std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void Harl::warning(void)
{
    std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::error(void)
{
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void Harl::complain(std::string level)
{
   ptrfunc harlptr[] = {&Harl::debug, &Harl::error, &Harl::info, &Harl::warning};
   std::string levels[4] = {"DEBUG", "ERROR", "INFO", "WARNING"};
   int i = 0;
   while(level.compare(levels[i]))
        i++;
    if (i < 4)
        (this->*harlptr[i])();
}