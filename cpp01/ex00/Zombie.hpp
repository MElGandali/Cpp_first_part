/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-gand <mel-gand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 08:54:14 by mel-gand          #+#    #+#             */
/*   Updated: 2023/10/29 16:15:04 by mel-gand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE
#define ZOMBIE

#include <iostream>
#include <string>

class   Zombie
{
	private :
		std::string name;
	public :
		Zombie ();
		~Zombie();
		Zombie (std::string name);
		void announce(void);
};
Zombie* newZombie(std::string name);
void randomChump(std::string name);

#endif