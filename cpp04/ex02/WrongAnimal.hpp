/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-gand <mel-gand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 07:20:09 by mel-gand          #+#    #+#             */
/*   Updated: 2023/11/08 23:45:36 by mel-gand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL
#define WRONGANIMAL

#include <iostream>


class WrongAnimal 
{
    protected:
        std::string type;
    public:
        WrongAnimal();
        WrongAnimal(std::string type);
        WrongAnimal(const WrongAnimal& origin);
        WrongAnimal& operator=(const WrongAnimal& origin);
        ~WrongAnimal();
        void makeSound() const;
        std::string getType() const;
};


#endif