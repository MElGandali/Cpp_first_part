/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-gand <mel-gand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 19:51:21 by mel-gand          #+#    #+#             */
/*   Updated: 2023/10/21 03:44:29 by mel-gand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMOND_TRAP
#define DIAMOND_TRAP

#include <iostream>
#include <string>
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
    private:
        std::string name;
    public:
        DiamondTrap(std::string Name);
        DiamondTrap();
        ~DiamondTrap();
        DiamondTrap(const DiamondTrap& origin);
        DiamondTrap& operator=(const DiamondTrap& origin);
        void attack(const std::string& target);
        void whoAmI();
};


#endif