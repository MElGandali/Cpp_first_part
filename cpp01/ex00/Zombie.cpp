/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-gand <mel-gand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 10:53:31 by mel-gand          #+#    #+#             */
/*   Updated: 2023/10/29 16:27:28 by mel-gand         ###   ########.fr       */
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
Zombie::Zombie(std::string name)
{
    this->name = name;
}
void Zombie::announce(void)
{
    std::cout << this->name << " : BraiiiiiiinnnzzzZ..." << std::endl;
}