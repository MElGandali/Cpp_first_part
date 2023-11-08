/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-gand <mel-gand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 00:31:37 by mel-gand          #+#    #+#             */
/*   Updated: 2023/10/28 08:41:39 by mel-gand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"


Contact::Contact()
{
    this->index = 0;
}
Contact::~Contact()
{
    
}
void Contact::set_first_name(std::string first_name)
{
    this->first_name = first_name;
}
void Contact::set_last_name(std::string last_name)
{
    this->last_name = last_name;
}
void Contact::set_nickname(std::string nickname)
{
   this->nickname = nickname; 
}
void Contact::set_phone_num(std::string phone_num)
{
   this->phone_num = phone_num; 
}
void Contact::set_dark_secret(std::string darkest_secret)
{
    this->darkest_secret = darkest_secret;
}

void Contact::set_index(int index)
{
    this->index = index;
}