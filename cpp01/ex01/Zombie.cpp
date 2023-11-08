/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-gand <mel-gand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 17:38:35 by mel-gand          #+#    #+#             */
/*   Updated: 2023/10/29 16:28:15 by mel-gand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Zombie.hpp"

Zombie::Zombie()
{
    
}
Zombie::~Zombie()
{
    std::cout << "Zombie " << name << " has been destroyed" << std::endl;
}
void Zombie::setName(std::string name)
{
    this->name = name;
}

const std::string& Zombie::getName() const
{
    return (this->name);
}

void Zombie::announce(void)
{
    std::cout << this->getName() <<  " : BraiiiiiiinnnzzzZ..." << std::endl;
}