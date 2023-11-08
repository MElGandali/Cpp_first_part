/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-gand <mel-gand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 05:58:59 by mel-gand          #+#    #+#             */
/*   Updated: 2023/10/29 13:17:57 by mel-gand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG
#define DOG

#include<iostream>
#include "Animal.hpp"
#include "Brain.hpp"
class Dog : public Animal
{
    private:
        Brain* brain_ptr;
    public:
        Dog();
        ~Dog();
        Dog(const Dog& origin);
        Dog& operator=(const Dog& origin);
        void makeSound() const;
        Brain& getBrain() const;
};


#endif