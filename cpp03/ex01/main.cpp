/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-gand <mel-gand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 15:14:36 by mel-gand          #+#    #+#             */
/*   Updated: 2023/11/05 23:58:40 by mel-gand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main ()
{
    std::cout << "### TESTING ScavTrap ###" << std::endl;
    {
        ScavTrap a;
        ScavTrap b("|robot 1|");
       ClapTrap *vt = &b;
       vt->attack("|robot 2|");
       
        a.takeDamage(5);
        a.attack("|robot 3|");
        b.attack("|robot 4|");
        a.beRepaired(3);
        b.beRepaired(3);
    }
}