/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-gand <mel-gand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 00:31:40 by mel-gand          #+#    #+#             */
/*   Updated: 2023/11/01 12:30:13 by mel-gand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"
#include <string>

int checkDigit(std::string tmp)
{
    for (std::string::size_type i = 0; i < tmp.length(); i++)
    {
        if (std::isdigit(tmp[i]) == 0)
            return (0);
    }
    return (1);
}
    
void fill_infos(std::string infos[5])
{
    while (infos[0].empty() && !std::cin.eof())
    {
        std::cout << "Please enter your First Name:" << std::endl;
        getline(std::cin, infos[0]);
    }
    while (infos[1].empty() && !std::cin.eof())
    {
        std::cout << "Please enter you Last Name:" << std::endl;
        getline(std::cin, infos[1]);
    }
    while (infos[2].empty() && !std::cin.eof())
    {
        std::cout << "Please enter you Nickname:" << std::endl;
        getline(std::cin, infos[2]);
    }
    while (infos[3].empty() && !std::cin.eof())
    {
        std::cout << "Please enter you Phone Number:" << std::endl;
        getline(std::cin, infos[3]);
    }
    while (infos[4].empty() && !std::cin.eof())
    {
        std::cout << "Please enter you Darkest Secret:" << std::endl;
        getline(std::cin, infos[4]);
    }
    if (std::cin.eof())
        exit(1);
}
int PhoneBook::add_contact()
{
    std::string infos[5];
    static int i;
    static int j;
    fill_infos(infos);
    if (i <= 7)
    {
        contacts[i].set_first_name(infos[0]);
        contacts[i].set_last_name(infos[1]);
        contacts[i].set_nickname(infos[2]);
        contacts[i].set_phone_num(infos[3]);
        contacts[i].set_dark_secret(infos[4]);
        contacts[i].set_index(i + 1);
        std::cout << "Contact " << i + 1 << " has been added" << std::endl;
    }
    else
    {
        if (j > 7)
            j = 0;
        contacts[j].set_first_name(infos[0]);
        contacts[j].set_last_name(infos[1]);
        contacts[j].set_nickname(infos[2]);
        contacts[j].set_phone_num(infos[3]);
        contacts[j].set_dark_secret(infos[4]);
        contacts[j].set_index((j + 1));
        std::cout << "Contact " << j + 1 << " has been overwritten" << std::endl;
        j++;
    }
    i++;
    return (i);
}

void Contact::display_contacts()
{
    std::string infos[5];
    
    infos[0] = this->first_name;
    infos[1] = this->last_name;
    infos[2] = this->nickname;
    infos[3] = this->phone_num;
    infos[4] = this->darkest_secret;
    int i = 0;
    while (i < 5)
    {
        if (infos[i].length() > 10)
        {
            infos[i] = infos[i].substr(0,9);
            infos[i] += ".";
        }
        i++;
    }
    if (this->index != 0)
    {
        std::cout << std::setw(10) << std::right << this->index << "|";
        std::cout << std::setw(10) << std::right << infos[0] << "|";
        std::cout << std::setw(10) << std::right << infos[1] << "|";
        std::cout << std::setw(10) << std::right << infos[2];
        std::cout << std::endl;
    }
}

void Contact::print_all_infos()
{
    std::cout << "Index is: " << this->index << std::endl;
    std::cout << "First name is: " << this->first_name << std::endl;
    std::cout << "Last name is: " << this->last_name << std::endl;
    std::cout << "Nickname is: " << this->nickname << std::endl;
    std::cout << "Phone number is: " << this->phone_num << std::endl;
    std::cout << "Darkest secret is: " << this->darkest_secret << std::endl;
}
void PhoneBook::search_contact(int i)
{
    int j = 0;
    std::cout << std::setw(10) << std::right << "Index" << "|";
    std::cout << std::setw(10) << std::right << "First Name" << "|";
    std::cout << std::setw(10) << std::right << "Last Name" << "|";
    std::cout << std::setw(10) << std::right << "Nickname";
    std::cout << std::endl;
    while (j <= i - 1 && j != 8)
    {
        contacts[j].display_contacts();
        j++;
    }
    std::string indx;
    std::cout << "Enter the specific index :" << std::endl;
    std::getline(std::cin, indx);
    if (std::cin.eof())
        exit(1);
    if (checkDigit(indx) == 1 && indx.empty() != true)
    {
        int j = std::atol(indx.c_str());
        if (j >= 0 && j <= i)
            contacts[std::atol(indx.c_str()) - 1].print_all_infos();
    }
    else
        std::cout << "Non existing index" << std::endl;
}