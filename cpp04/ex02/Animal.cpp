/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-gand <mel-gand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 05:25:09 by mel-gand          #+#    #+#             */
/*   Updated: 2023/10/24 05:09:15 by mel-gand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
    std::cout << "Animal has been constructed" << std::endl;
    this->type = "Animal";
}

Animal::~Animal()
{
    std::cout << "Animal has been Destructed" << std::endl;
}
Animal::Animal(std::string type)
{
    this->type = type;
    std::cout << "Animal " <<  this->type << " has been constructed" << std::endl;
}

Animal::Animal(const Animal& origin)
{
    std::cout << "Copy Animal constructor called" << std::endl;
    *this = origin;
}

Animal& Animal::operator=(const Animal& origin)
{
    std::cout << "Copy Animal assignment operator called" << std::endl;
    if(this != &origin)
        this->type = origin.type;
    return *this;
}

std::string Animal::getType() const
{
    return (this->type);
}
