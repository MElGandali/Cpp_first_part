/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-gand <mel-gand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 07:20:09 by mel-gand          #+#    #+#             */
/*   Updated: 2023/11/07 00:45:35 by mel-gand         ###   ########.fr       */
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
        ~WrongAnimal();
        WrongAnimal(std::string type);
        WrongAnimal(const WrongAnimal& origin);
        WrongAnimal& operator=(const WrongAnimal& origin);
        void makeSound() const;
        std::string getType() const;
};


#endif