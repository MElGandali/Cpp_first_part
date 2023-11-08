/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-gand <mel-gand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 19:16:37 by mel-gand          #+#    #+#             */
/*   Updated: 2023/11/06 00:46:52 by mel-gand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
    std::cout << "Fragtrap has been constructed" << std::endl;
    this->name = "FragTrap";
    this->Hit_points = 100;
    this->Energy_points = 100;
    this->Attack_Damage = 30;
}
FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
    this->name = name;
    std::cout << "FragTrap " << this->name << "has been constructed" << std::endl;
    this->Hit_points = 100;
    this->Energy_points = 100;
    this->Attack_Damage = 30;
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap " << this->name << " has been destroyed!" <<  std::endl;
}

FragTrap::FragTrap(const FragTrap& origin) 
{
    std::cout << "Copy FragTrap constructor called" << std::endl;
    *this = origin;
}

FragTrap& FragTrap::operator=(const FragTrap& origin)
{
    std::cout << "Copy FragTrap assignment operator called" << std::endl;
    if(this != &origin)
    {
        this->name  = origin.name;
        this->Hit_points = origin.Hit_points;
        this->Energy_points = origin.Energy_points;
        this->Attack_Damage = origin.Attack_Damage;
    }
    return *this;
}

void FragTrap::highFivesGuys()
{
    std::cout << "give me a high five with your clean hand!" << std::endl;
}

