/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-gand <mel-gand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 01:33:01 by mel-gand          #+#    #+#             */
/*   Updated: 2023/10/28 10:31:02 by mel-gand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"


int main ()
{
    PhoneBook phonebook;
    Contact contact;
    std::string command;
    int i = 0;
    while (1)
    {
        std::cout << "Enter a command : ";
        std::getline(std::cin, command);
        if (std::cin.eof())
           break;
        if (command.compare("ADD") == 0)
            i = phonebook.add_contact();
        else if (command.compare("SEARCH") == 0)
            phonebook.search_contact(i);
        else if (command.compare( "EXIT") == 0)
            break;
    }
}
