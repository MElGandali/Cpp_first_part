/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-gand <mel-gand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 05:30:50 by mel-gand          #+#    #+#             */
/*   Updated: 2023/10/22 07:54:48 by mel-gand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal("Cat")
{
    std::cout << this->type << " has been constructed" << std::endl;
}

Cat::~Cat()
{
    std::cout << "Cat has been Destructed" << std::endl;
}
Cat::Cat(std::string type) : Animal(type)
{
    this->type = type;
    std::cout << "Animal " <<  this->type << " has been constructed" << std::endl;
}

Cat::Cat(const Cat& origin) : Animal(origin)
{
    std::cout << "Copy Cat constructor called" << std::endl;
    *this = origin;
}

Cat& Cat::operator=(const Cat& origin)
{
    std::cout << "Copy Cat assignment operator called" << std::endl;
    if(this != &origin)
        this->type = origin.type;
    return *this;
}

void Cat::makeSound() const
{
    std::cout << "Meow!" << std::endl;
}
