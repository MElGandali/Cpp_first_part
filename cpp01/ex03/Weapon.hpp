/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-gand <mel-gand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 14:51:13 by mel-gand          #+#    #+#             */
/*   Updated: 2023/10/29 19:34:55 by mel-gand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON
#define WEAPON

#include<iostream>
#include <string>
#include <sys/wait.h>

class   Weapon
{
    private :
        std::string type;
    public:
        Weapon();
        ~Weapon();
        Weapon(std::string type);
        const std::string& GetType();
        void setType(std::string type);
        
        
        
};

#endif