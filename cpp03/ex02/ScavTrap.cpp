/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-gand <mel-gand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 19:15:27 by mel-gand          #+#    #+#             */
/*   Updated: 2023/11/05 23:57:01 by mel-gand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "FragTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
    std::cout << "Default Scavtrap constructor called" << std::endl;
    this->name = "ScavTrap";
    this->Hit_points = 100;
    this->Energy_points = 50;
    this->Attack_Damage = 20;
}
ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    std::cout << "Parametrique ScavTrap constructor called" << std::endl;
    this->name = name;
    this->Hit_points = 100;
    this->Energy_points = 50;
    this->Attack_Damage = 20;
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
    std::cout << this->name << " attacks brutally" << target << " causing " << this->Attack_Damage << " significant damage!" << std::endl;
    this->Energy_points -= 1;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& origin)
{
    std::cout << "Copy ScavTrap assignment operator called" << std::endl;
    if(this != &origin)
    {
        this->name  = origin.name;
        this->Hit_points = origin.Hit_points;
        this->Energy_points = origin.Hit_points;
        this->Attack_Damage = origin.Attack_Damage;
    }
    return *this;
}

void ScavTrap::guardGate()
{
    std::cout << "ScavTrap is now in Gatekeeper mode!" << std::endl;
}