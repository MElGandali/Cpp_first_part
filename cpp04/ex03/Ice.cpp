/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-gand <mel-gand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 04:14:22 by mel-gand          #+#    #+#             */
/*   Updated: 2023/10/28 19:14:43 by mel-gand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Ice.hpp"

Ice::Ice() : AMateria()
{
    this->type = "ice";
}

Ice::~Ice()
{
    
}

Ice::Ice(const Ice& origin)
{
    *this = origin;
}

Ice& Ice::operator=(const Ice& origin)
{
    if(this != &origin)
        *this = origin;
    return *this;
}

AMateria* Ice::clone() const
{
    AMateria *c = new Ice();
    return (c);
}

void Ice::use(ICharacter& target)
{
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" <<  std::endl;
}