/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-gand <mel-gand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 18:49:55 by mel-gand          #+#    #+#             */
/*   Updated: 2023/11/04 18:47:54 by mel-gand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ClapTrap.hpp"

   int main()
{
    std::cout << "### TESTING CLAPTRAP ###" << std::endl;
    {
        ClapTrap a;
        ClapTrap b("|robot 1|");
       b.attack("|robot 2|");
        a.takeDamage(5);
        a.attack("|robot 3|");
        b.attack("|robot 4|");
        a.beRepaired(3);
        b.takeDamage(9);
        b.beRepaired(9);
    }
    return (0);
}