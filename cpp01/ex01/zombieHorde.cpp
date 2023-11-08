/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-gand <mel-gand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 17:30:58 by mel-gand          #+#    #+#             */
/*   Updated: 2023/10/29 16:28:31 by mel-gand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
    Zombie *zombiehorde = new Zombie[N];
    for(int i = 0; i < N; i++)
    {
        zombiehorde[i].setName(name);
        zombiehorde[i].announce();
    }
    return (zombiehorde);
}
