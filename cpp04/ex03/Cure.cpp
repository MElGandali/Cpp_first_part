/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-gand <mel-gand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 02:47:51 by mel-gand          #+#    #+#             */
/*   Updated: 2023/11/08 21:49:28 by mel-gand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Cure.hpp"

Cure::Cure() : AMateria()
{
    this->type = "cure";
}

Cure::~Cure()
{
    
}

Cure::Cure(const Cure& origin)
{
    *this = origin;
}

Cure& Cure::operator=(const Cure& origin)
{
    if(this != &origin)
        *this = origin;
    return *this;
}

AMateria* Cure::clone() const
{
    AMateria *c = new Cure();
    return (c);
}

void Cure::use(ICharacter& target)
{
    std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}