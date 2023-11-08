/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-gand <mel-gand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 03:14:40 by mel-gand          #+#    #+#             */
/*   Updated: 2023/11/01 12:17:10 by mel-gand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main()
{
    std::string input;
    Harl harl;

    while (1)
    {
        std::cout << "Enter a Level :" << std::endl;
        std::cin >> input;
        if(input.compare("EXIT") == 0  || std::cin.eof())
            break;
        harl.complain(input);
    }   
}