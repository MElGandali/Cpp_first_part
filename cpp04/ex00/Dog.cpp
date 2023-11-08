/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-gand <mel-gand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 05:58:11 by mel-gand          #+#    #+#             */
/*   Updated: 2023/10/22 07:54:35 by mel-gand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal("Dog")
{
    std::cout << this->type << " has been constructed" << std::endl;
}

Dog::~Dog()
{
    std::cout << "Dog has been Destructed" << std::endl;
}
Dog::Dog(std::string type) : Animal(type)
{
    std::cout << "Animal " <<  this->type << " has been constructed" << std::endl;
    this->type = type;
}

Dog::Dog(const Dog& origin) : Animal(origin)
{
    std::cout << "Copy Dog constructor called" << std::endl;
    *this = origin;
}

Dog& Dog::operator=(const Dog& origin)
{
    std::cout << "Copy Dog assignment operator called" << std::endl;
    if(this != &origin)
        this->type = origin.type;
    return *this;
}

void Dog::makeSound() const
{
    std::cout << "Woof! Woof!!!" << std::endl;
}
