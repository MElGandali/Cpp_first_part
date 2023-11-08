/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-gand <mel-gand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 01:26:27 by mel-gand          #+#    #+#             */
/*   Updated: 2023/10/08 03:27:28 by mel-gand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARLFILTER
#define HARLFILTER

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


#endif