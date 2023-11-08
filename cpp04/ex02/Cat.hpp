/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-gand <mel-gand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 05:32:20 by mel-gand          #+#    #+#             */
/*   Updated: 2023/10/23 07:36:08 by mel-gand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT
#define CAT

#include<iostream>
#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
    private:
        Brain* brain_ptr;
    public:
        Cat();
        Cat(std::string type);
        Cat(const Cat& origin);
        Cat& operator=(const Cat& origin);
        ~Cat();
        void makeSound() const;
        Brain& getBrain() const;
};


#endif