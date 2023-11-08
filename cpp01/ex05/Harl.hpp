/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-gand <mel-gand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 02:47:41 by mel-gand          #+#    #+#             */
/*   Updated: 2023/11/01 12:20:16 by mel-gand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL
#define HARL

#include<iostream>
#include<string.h>

class Harl
{
    private:
        void debug(void );
        void info(void );
        void warning(void );
        void error(void );
    public:
        Harl();
        ~Harl();
        void complain(std::string level);
};
typedef void (Harl::*ptrfunc) (void);


#endif