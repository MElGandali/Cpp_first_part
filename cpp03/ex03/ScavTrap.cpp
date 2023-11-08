/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-gand <mel-gand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 19:15:27 by mel-gand          #+#    #+#             */
/*   Updated: 2023/11/06 00:46:58 by mel-gand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "DiamondTrap.hpp"
#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
    std::cout << "Scavtrap has been constructed" << std::endl;
    this->name = "ScavTrap";
    this->Hit_points = 100;
    this->Energy_points = 50;
    this->Attack_Damage = 20;
}
ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    this->name = name;
    std::cout << "ScavTrap " << this->name << " has been constructed" << std::endl;
    this->Hit_points = 100;
    this->Energy_points = 50;
    this->Attack_Damage = 20;
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap " << this->name << " has been destroyed!" <<  std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& origin) 
{
    std::cout << "Copy ScavTrap constructor called" << std::endl;
    *this = origin;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& origin)
{
    std::cout << "Copy ScavTrap assignment operator called" << std::endl;
    if(this != &origin)
    {
        this->name  = origin.name;
        this->Hit_points = origin.Hit_points;
        this->Energy_points = origin.Energy_points;
        this->Attack_Damage = origin.Attack_Damage;
    }
    return *this;
}

void ScavTrap::attack(const std::string& target)
{
    if (this->Energy_points <= 0)
    {
        std::cout << this->name << " has no energy left to attack" << std::endl;
        return;
    }
    else if(this->Hit_points <= 0)
    {
        std::cout << this->name << " can't attack. How can a dead body attack! lol" << std::endl;
        return;
    }
    std::cout << this->name << " attacks brutally " << target << " causing severe " << this->Attack_Damage << " damage!" << std::endl;
    this->Energy_points -= 1;
    
}

void ScavTrap::guardGate()
{
    std::cout << "ScavTrap is now in Gatekeeper mode!" << std::endl;
}