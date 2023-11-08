/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-gand <mel-gand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 07:20:12 by mel-gand          #+#    #+#             */
/*   Updated: 2023/11/07 00:32:49 by mel-gand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"
#include "WrongAnimal.hpp"

WrongCat::WrongCat() : WrongAnimal("WrongCat")
{
    std::cout << this->type << " has been constructed" << std::endl;
}

WrongCat::~WrongCat()
{
    std::cout << "WrongCat has been Destructed" << std::endl;
}
WrongCat::WrongCat(std::string type) : WrongAnimal(type)
{
    this->type = type;
    std::cout << this->type << " has been constructed" << std::endl;
}

WrongCat::WrongCat(const WrongCat& origin) : WrongAnimal(origin)
{
    std::cout << "Copy WrongCat constructor called" << std::endl;
    *this = origin;
}

WrongCat& WrongCat::operator=(const WrongCat& origin)
{
    std::cout << "Copy WrongCat assignment operator called" << std::endl;
    if(this != &origin)
        this->type = origin.type;
    return *this;
}

void WrongCat::makeSound() const
{
    std::cout << "Meow!" << std::endl;
}