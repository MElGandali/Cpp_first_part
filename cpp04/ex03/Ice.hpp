/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-gand <mel-gand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 06:59:19 by mel-gand          #+#    #+#             */
/*   Updated: 2023/10/27 08:20:46 by mel-gand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE
#define ICE


#include "Character.hpp"
#include <iostream>
#include "AMateria.hpp"


class Ice : virtual public AMateria
{
    public:
        Ice();
        Ice(std::string name);
        ~Ice();
        Ice(const Ice& origin);
        Ice& operator=(const Ice& origin);
        AMateria* clone() const;
        void use(ICharacter& target);
};


#endif