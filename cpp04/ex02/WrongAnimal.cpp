/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-gand <mel-gand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 07:20:05 by mel-gand          #+#    #+#             */
/*   Updated: 2023/10/22 08:14:26 by mel-gand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
    std::cout << "WrongAnimal has been constructed" << std::endl;
    this->type = "WrongAnimal";
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "WrongAnimal has been Destructed" << std::endl;
}
WrongAnimal::WrongAnimal(std::string type)
{
    this->type = type;
    std::cout << "WrongAnimal " <<  this->type << " has been constructed" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& origin)
{
    std::cout << "Copy WrongAnimal constructor called" << std::endl;
    *this = origin;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& origin)
{
    std::cout << "Copy WrongAnimal assignment operator called" << std::endl;
    if(this != &origin)
        this->type = origin.type;
    return *this;
}

std::string WrongAnimal::getType() const
{
    return (this->type);
}
void WrongAnimal::makeSound() const
{
    std::cout << "Some WrongAnimal made a sound" << std::endl;
}