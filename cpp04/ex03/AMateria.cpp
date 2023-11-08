/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-gand <mel-gand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 05:27:11 by mel-gand          #+#    #+#             */
/*   Updated: 2023/10/28 19:13:52 by mel-gand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include"AMateria.hpp"


AMateria::AMateria()
{

}
AMateria::AMateria(std::string const & type)
{
    this->type = type;
}

AMateria::~AMateria()
{

}
AMateria::AMateria(const AMateria& origin)
{
    *this = origin;
}

AMateria& AMateria::operator=(const AMateria& origin)
{
    if(this != &origin)
        *this = origin;
    return *this;
}

std::string const & AMateria::getType() const
{
    return(this->type);
}

void AMateria::use(ICharacter& target)
{
    (void)target;
}

