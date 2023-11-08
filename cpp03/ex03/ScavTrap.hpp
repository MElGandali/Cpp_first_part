/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-gand <mel-gand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 19:15:32 by mel-gand          #+#    #+#             */
/*   Updated: 2023/10/21 03:55:26 by mel-gand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef SCAV_TRAP
#define SCAV_TRAP

#include <iostream>
#include <string>
#include"ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
    public:
        ScavTrap();
        ScavTrap(std::string name);
        ~ScavTrap();
        ScavTrap(const ScavTrap& origin);
        ScavTrap& operator=(const ScavTrap& origin);
        void attack(const std::string& target);
        void guardGate();
};




#endif