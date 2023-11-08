/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-gand <mel-gand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 01:26:59 by mel-gand          #+#    #+#             */
/*   Updated: 2023/11/01 12:31:19 by mel-gand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main()
{
    std::string input;
    Harl harl;

    while (1)
    {
        std::cout << "Enter a Level : ";
        std::getline(std::cin, input);
        if(input.compare("EXIT") == 0  || std::cin.eof())
            break;
        if (!input.empty())
            harl.complain(input);
    }   
}