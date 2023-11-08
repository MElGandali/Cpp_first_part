/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-gand <mel-gand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 15:05:44 by mel-gand          #+#    #+#             */
/*   Updated: 2023/10/29 19:12:25 by mel-gand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA
#define HUMANA

#include "Weapon.hpp"
#include<iostream>
#include <string>

class   HumanA
{
    private:
        std::string name;
        Weapon &WeaponA;
    public:
        HumanA(std::string name, Weapon& WeaponA);
        ~HumanA();
        void attack(void);
};

#endif