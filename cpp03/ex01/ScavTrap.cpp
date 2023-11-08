/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-gand <mel-gand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 13:48:55 by mel-gand          #+#    #+#             */
/*   Updated: 2023/11/05 23:58:15 by mel-gand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "ClapTrap.hpp"
#include <string>

ScavTrap::ScavTrap() : ClapTrap()
{
    std::cout << "Default Scavtrap constructor called" << std::endl;
    this->name = "ScavTrap";
    this->Hit_points = 100;
    this->Energy_points = 50;
    this->Attack_damage = 20;
}
ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    std::cout << "Parametrique ScavTrap constructor called" << std::endl;
    this->name = name;
    this->Hit_points = 100;
    this->Energy_points = 50;
    this->Attack_damage = 20;
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap Destructor called" << std::endl;
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
        this->name = origin.name;
        this->Hit_points = origin.Hit_points;
        this->Energy_points = origin.Hit_points;
        this->Attack_damage = origin.Attack_damage;
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
    std::cout << this->name << " attacks brutally" << target << " causing " << this->Attack_damage << " significant damage!" << std::endl;
    this->Energy_points -= 1;
}

void ScavTrap::guardGate()
{
    std::cout << "ScavTrap is now in Gatekeeper mode!" << std::endl;
}