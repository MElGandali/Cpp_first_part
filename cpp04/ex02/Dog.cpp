/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-gand <mel-gand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 05:58:11 by mel-gand          #+#    #+#             */
/*   Updated: 2023/10/23 07:36:03 by mel-gand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Brain.hpp"
Dog::Dog() : Animal("Dog")
{
    std::cout << this->type << " has been constructed" << std::endl;
    this->brain_ptr = new Brain();
}

Dog::~Dog()
{
    delete this->brain_ptr;
    std::cout << "Dog has been Destructed" << std::endl;
}
Dog::Dog(std::string type) : Animal(type)
{
    this->type = type;
    std::cout << "Animal " <<  this->type << " has been constructed" << std::endl;
}

Dog::Dog(const Dog& origin) : Animal(origin)
{
    std::cout << "Copy Dog constructor called" << std::endl;
    this->brain_ptr = new Brain(*origin.brain_ptr);
}

Dog& Dog::operator=(const Dog& origin)
{
    std::cout << "Copy Dog assignment operator called" << std::endl;
    if(this != &origin)
    {
        this->type = origin.type;
        this->brain_ptr = new Brain( *origin.brain_ptr );
    }
    return *this;
}

void Dog::makeSound() const
{
    std::cout << "Woof!" << std::endl;
}

Brain& Dog::getBrain() const
{
    return (*this->brain_ptr);
}
