/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-gand <mel-gand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 17:26:17 by mel-gand          #+#    #+#             */
/*   Updated: 2023/10/29 16:29:10 by mel-gand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    std::string name;
    int N = 0;

    std::cout << "Enter a number: " << std::endl;
    std::cin >> N;
    Zombie *zombieptr = zombieHorde(N, "mel-gand");
    delete [] zombieptr;
}