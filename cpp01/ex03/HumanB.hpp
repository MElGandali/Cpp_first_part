/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-gand <mel-gand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 15:05:42 by mel-gand          #+#    #+#             */
/*   Updated: 2023/10/29 18:53:36 by mel-gand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB
#define HUMANB

#include "Weapon.hpp"
#include<iostream>
#include <string>

class   HumanB
{
    private:
        Weapon *WeaponB;
        std::string name;
    public:
        HumanB();
        HumanB(std::string name);
        ~HumanB();
        void    setWeapon(Weapon *WeaponB);
        void attack(void);
};

#endif