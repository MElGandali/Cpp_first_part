/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-gand <mel-gand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 19:15:19 by mel-gand          #+#    #+#             */
/*   Updated: 2023/11/06 00:54:29 by mel-gand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "DiamondTrap.hpp"

int main ()
{
    // std::cout << "### TESTING DiamondTrap ###" << std::endl;
    // {
    //     DiamondTrap a;
    //     ScavTrap b("|robot 1|");
    //     b.attack("|robot 2|");
    //     a.takeDamage(5);
    //     a.attack("|robot 3|");
    //     b.attack("|robot 4|");
    //     a.beRepaired(3);
    //     b.beRepaired(3);
    //     a.highFivesGuys();
    //     b.guardGate();
    // }
    DiamondTrap ash( "Ash" );
    std::cout << "-----------" << std::endl;
    DiamondTrap ash2( ash );
    std::cout << "-----------" << std::endl;
    DiamondTrap ash3(".");
    std::cout << "-----------" << std::endl;

    ash.whoAmI();
    ash2.whoAmI();
    ash3 = ash;
    ash3.whoAmI();

    ash.attack( "the air" );
    ash.takeDamage( 10 );
    ash.beRepaired( 10 );
    return (0);
}