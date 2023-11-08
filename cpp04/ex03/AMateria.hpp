/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-gand <mel-gand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 05:27:04 by mel-gand          #+#    #+#             */
/*   Updated: 2023/10/28 19:13:57 by mel-gand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA
#define AMATERIA

#include <iostream>
#include "ICharacter.hpp"

class Cure;
class Ice;

class AMateria
{
protected:
    std::string type;
public:
    AMateria();
    AMateria(std::string type);
    virtual ~AMateria();
    AMateria(const AMateria& origin);
    AMateria& operator=(const AMateria& origin);
    AMateria(std::string const & type);
    std::string const & getType() const;
    virtual AMateria* clone() const = 0;
    virtual void use(ICharacter& target);
};

#endif