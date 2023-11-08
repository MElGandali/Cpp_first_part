/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-gand <mel-gand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 19:15:19 by mel-gand          #+#    #+#             */
/*   Updated: 2023/10/19 19:11:11 by mel-gand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "FragTrap.hpp"
#include <cstdio>

int main ()
{
    std::cout << "### TESTING FragTrap ###" << std::endl;
    {
        FragTrap a;
        ScavTrap b("|robot 1|");
        b.attack("|robot 2|");
        a.takeDamage(5);
        a.attack("|robot 3|");
        b.attack("|robot 4|");
        a.beRepaired(3);
        b.beRepaired(3);
        a.highFivesGuys();
        b.guardGate();
    }
    return (0);
}