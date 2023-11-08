/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-gand <mel-gand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 19:51:16 by mel-gand          #+#    #+#             */
/*   Updated: 2023/11/06 20:42:58 by mel-gand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"
#include "ClapTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap()
{
    std::cout << "DiamondTrap has been constructed" << std::endl;
    this->name = "DiamondTrap";
    this->Hit_points = FragTrap::Hit_points;
    this->Energy_points = ScavTrap::Energy_points;
    this->Attack_Damage = FragTrap::Attack_Damage;
}
DiamondTrap::DiamondTrap(std::string Name) : ClapTrap(Name)
{
    this->name = Name;
    std::cout << "DiamondTrap " << this->name << " has been constructed" << std::endl;
    this->ClapTrap::name = Name + "_clap_name";
    this->Hit_points = FragTrap::Hit_points;
    this->Energy_points = ScavTrap::Energy_points;
    this->Attack_Damage = FragTrap::Attack_Damage;
}

DiamondTrap::~DiamondTrap()
{
    std::cout << "DiamondTrap " << this->name << " has been destroyed!" <<  std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap& origin) 
{
    std::cout << "Copy DiamondTrap constructor called" << std::endl;
    *this = origin;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& origin)
{
    std::cout << "Copy DiamondTrap assignment operator called" << std::endl;
    if(this != &origin)
    {
        this->name = origin.name;
        this->ClapTrap::name = origin.name + "_clap_name";
        this->Hit_points = origin.Hit_points;
        this->Energy_points = origin.Energy_points;
        this->Attack_Damage = origin.Attack_Damage;
    }
    return *this;
}

void DiamondTrap::attack(const std::string& target)
{
    ScavTrap::attack(target);
}

void DiamondTrap::whoAmI()
{
    std::cout << "I'm DiamondTrap " << this->name << " and my ClapTrap name is " << this->ClapTrap::name << std::endl;
}