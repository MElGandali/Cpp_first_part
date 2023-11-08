/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-gand <mel-gand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 18:48:27 by mel-gand          #+#    #+#             */
/*   Updated: 2023/11/08 23:48:41 by mel-gand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICHARACTER
#define ICHARACTER

#include <iostream>

class AMateria;
class ICharacter
{
    public:
        ICharacter();
        virtual ~ICharacter() {}
        ICharacter(const ICharacter& origin);
        ICharacter& operator=(const ICharacter& origin);
        virtual std::string const & getName() const = 0;
        virtual void equip(AMateria* m) = 0;
        virtual void unequip(int idx) = 0;
        virtual void use(int idx, ICharacter& target) = 0;
};



#endif