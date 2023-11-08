/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-gand <mel-gand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 18:50:27 by mel-gand          #+#    #+#             */
/*   Updated: 2023/11/06 00:10:03 by mel-gand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"


ClapTrap::ClapTrap()
{
    std::cout << "Default constructor called" << std::endl;
    this->name = "ClapTrap";
    this->Hit_points = 10;
    this->Energy_points = 10;
    this->Attack_Damage = 0;
}
ClapTrap::ClapTrap(std::string name)
{
    std::cout << "Parametrique constructor called" << std::endl;
    this->name = name;
    this->Hit_points = 10;
    this->Energy_points = 10;
    this->Attack_Damage = 0;
}

ClapTrap::~ClapTrap()
{
    std::cout << "Destructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& origin) 
{
    std::cout << "Copy constructor called" << std::endl;
    *this = origin;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& origin)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if(this != &origin)
    {
        this->name  = origin.name;
        this->Hit_points = origin.Hit_points;
        this->Energy_points = origin.Hit_points;
        this->Attack_Damage = origin.Attack_Damage;
    }
    return *this;
}

void ClapTrap::attack(const std::string& target)
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
    std::cout << this->name << " attacks " << target << " causing " << this->Attack_Damage << " damage!" << std::endl;
    this->Energy_points -= 1;
    
}
void ClapTrap::takeDamage(unsigned int amount)
{
    if (this->Hit_points <= amount)
    {
        std::cout << this->name << " died!" << std::endl;
        this->Hit_points = 0;
        return;
    }
    std::cout << this->name << " Took damage of " << amount << " hit point" << std::endl;
    this->Hit_points -= amount;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (this->Energy_points <= 0 && (this->Hit_points > 0 && this->Hit_points < 10))
    {
        std::cout << this->name << " can't be repaired. No energy left!" << std::endl;
        return;
    }
    else if (this->Hit_points == 10)
    {
        std::cout << this->name << " health is at the maximum!" << std::endl;
        return; 
    }
    else if (this->Hit_points <= 0)
    {
        std::cout <<  "can't be saved " << this->name << " died!" <<  std::endl;
        return;
    }
    if (amount + this->Hit_points <= 10)
    {
        std::cout << this->name << " repaired himself with " << amount << " health point" << std::endl;
        this->Hit_points += amount;
        this->Energy_points -= 1;
    }
    else {
        std::cout << "Too much Health Points!" << std::endl;
        return;
    }
}


