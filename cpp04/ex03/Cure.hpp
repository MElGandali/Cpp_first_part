/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-gand <mel-gand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 06:51:57 by mel-gand          #+#    #+#             */
/*   Updated: 2023/10/28 18:40:26 by mel-gand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE
#define CURE


#include "Character.hpp"
#include <iostream>
#include "AMateria.hpp"


class Cure : virtual public AMateria
{
    public:
        Cure();
        ~Cure();
        Cure(const Cure& origin);
        Cure& operator=(const Cure& origin);
        AMateria* clone() const;
        void use(ICharacter& target);
};


#endif