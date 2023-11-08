/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-gand <mel-gand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 19:16:30 by mel-gand          #+#    #+#             */
/*   Updated: 2023/10/19 22:09:31 by mel-gand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAG_TRAP
#define FRAG_TRAP

#include <iostream>
#include <string>
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
    public :
        FragTrap();
        FragTrap(std::string name);
        ~FragTrap();
        FragTrap(const FragTrap& origin);
        FragTrap& operator=(const FragTrap& origin);
        void highFivesGuys(void);
};


#endif