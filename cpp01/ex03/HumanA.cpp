/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-gand <mel-gand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 15:47:04 by mel-gand          #+#    #+#             */
/*   Updated: 2023/10/29 19:12:21 by mel-gand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "HumanB.hpp"
#include"Weapon.hpp"


HumanA::HumanA(std::string name, Weapon& WeaponA) : name(name), WeaponA(WeaponA)
{

}
HumanA::~HumanA()
{

}
void HumanA::attack(void)
{
    if (WeaponA.GetType() != "")
        std::cout << name << " attacks with " << WeaponA.GetType() << std::endl;
    else
        std::cout << name << " Doesn't have a weapon to attack with "  << std::endl;
}