/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-gand <mel-gand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 07:26:04 by mel-gand          #+#    #+#             */
/*   Updated: 2023/11/03 22:23:04 by mel-gand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED
#define FIXED

#include<iostream>
#include<cmath>
#include <ostream>

class Fixed
{
    private:
        int fpv;
        static const int fbits = 8;
    public:
        Fixed();
        Fixed(const int fpv);
        Fixed(const float fpv);
        ~Fixed();
        Fixed(const Fixed& origin);
        Fixed& operator=(const Fixed& origin);
        float toFloat(void) const;
        int toInt(void) const;
        
};
std::ostream& operator<<(std::ostream& os, const Fixed& origin);

#endif