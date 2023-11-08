/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.htpointpp                                       :+:      :+:    :+:   */
/*           Energy oint                                       +:+ +:+         +:+     */
/*   By: mel-gand <mel-gand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 15:12:24 by mel-gand          #+#    #+#             */
/*   Updated: 2023/10/22 03:01:54 by mel-gand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef CLAP_TRAP
#define CLAP_TRAP

#include <iostream>
#include <string>

class ClapTrap
{
    protected:
        std::string name;
        unsigned int Hit_points;
        unsigned int Energy_points;
        unsigned int Attack_damage;
    public:
        ClapTrap();
        ClapTrap(std::string name);
        ~ClapTrap();
        ClapTrap(const ClapTrap& origin);
        ClapTrap& operator=(const ClapTrap& origin);
        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
};




#endif