/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-gand <mel-gand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 05:30:50 by mel-gand          #+#    #+#             */
/*   Updated: 2023/10/29 14:43:00 by mel-gand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Brain.hpp"
#include <string>

Cat::Cat() : Animal("Cat")
{
    std::cout << this->type << " has been constructed" << std::endl;
    this->brain_ptr = new Brain();
}

Cat::~Cat()
{
    delete this->brain_ptr;
    std::cout << "Cat has been Destructed" << std::endl;
}


Cat::Cat(const Cat& origin) : Animal(origin)
{
    std::cout << "Copy Cat constructor called" << std::endl;
     this->brain_ptr = new Brain();
    *this = origin;
}

Cat& Cat::operator=(const Cat& origin)
{
    std::cout << "Copy Cat assignment operator called" << std::endl;
    if(this != &origin)
    {
        *brain_ptr = *origin.brain_ptr;
        this->type = origin.type;
    }
    return *this;
}

void Cat::makeSound() const
{
    std::cout << "Meow!" << std::endl;
}

Brain& Cat::getBrain() const
{
    return (*this->brain_ptr);
}



