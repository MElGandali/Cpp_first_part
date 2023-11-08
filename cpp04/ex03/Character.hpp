/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-gand <mel-gand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 05:41:27 by mel-gand          #+#    #+#             */
/*   Updated: 2023/11/08 20:42:11 by mel-gand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER
#define CHARACTER


#include <iostream>
#include <string>
#include <new>
#include "ICharacter.hpp"

class AMateria;

class Character : public ICharacter
{
    protected:
        std::string name;
        AMateria *inv[4];
        AMateria *del[4];
        int idx_m;
        int idx;
        int idx_de;
    public :
        Character();
        ~Character();
        Character(const std::string name);
        Character(const Character& origin);
        Character& operator=(const Character& origin);
        std::string const & getName() const;
        void equip(AMateria* m);
        void unequip(int idx);
        void use(int idx, ICharacter& target);
};



#endif