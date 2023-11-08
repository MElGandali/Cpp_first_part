/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-gand <mel-gand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 05:58:59 by mel-gand          #+#    #+#             */
/*   Updated: 2023/10/22 07:52:53 by mel-gand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG
#define DOG

#include<iostream>
#include "Animal.hpp"
class Dog : public Animal
{
    public:
        Dog();
        Dog(std::string type);
        Dog(const Dog& origin);
        Dog& operator=(const Dog& origin);
        ~Dog();
        void makeSound() const;
};


#endif