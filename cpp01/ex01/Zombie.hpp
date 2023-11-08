/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-gand <mel-gand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 17:26:39 by mel-gand          #+#    #+#             */
/*   Updated: 2023/10/29 16:25:51 by mel-gand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE
#define ZOMBIE

#include <iostream>
#include <string>

class   Zombie
{
   std::string name;
   
   public :
        Zombie();
        ~Zombie();
        void setName(std::string name);
        const std::string& getName() const;
        void announce(void);
};
Zombie* zombieHorde( int N, std::string name );


#endif