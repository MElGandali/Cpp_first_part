/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-gand <mel-gand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 15:41:00 by mel-gand          #+#    #+#             */
/*   Updated: 2023/10/29 19:35:18 by mel-gand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon()
{
    
}

Weapon::~Weapon()
{
    
}
void  Weapon::setType(std::string type)
{
    this->type = type;
}

const std::string& Weapon::GetType()
{
    return(type);
};

Weapon::Weapon(std::string type)
{
    this->type = type;
}