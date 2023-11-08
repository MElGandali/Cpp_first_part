/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-gand <mel-gand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 15:45:41 by mel-gand          #+#    #+#             */
/*   Updated: 2023/10/29 18:55:45 by mel-gand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include"Weapon.hpp"
#include <string>

HumanB::HumanB()
{
    this->WeaponB = NULL;
}
HumanB::HumanB(std::string name)
{
    this->name = name;
}
HumanB::~HumanB()
{
    
}

void    HumanB::setWeapon(Weapon *WeaponB)
{
    this->WeaponB = WeaponB;
}
void HumanB::attack(void)
{
    if (WeaponB->GetType() != "")
        std::cout << name << " attacks with " << WeaponB->GetType() << std::endl;
    else
        std::cout << name << " Doesn't have a weapon to attack with "  << std::endl;
}
