/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-gand <mel-gand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 14:47:15 by mel-gand          #+#    #+#             */
/*   Updated: 2023/10/13 16:59:17 by mel-gand         ###   ########.fr       */
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
        bool operator>(const Fixed& origin) const;
        bool operator<(const Fixed& origin) const;
        bool operator<=(const Fixed& origin) const;
        bool operator>=(const Fixed& origin) const;
        bool operator==(const Fixed& origin) const;
        bool operator!=(const Fixed& origin) const;
        Fixed operator+(const Fixed& origin);
        Fixed operator-(const Fixed& origin);
        Fixed operator*(const Fixed& origin);
        Fixed operator/(const Fixed& origin);
        Fixed& operator++();
        Fixed operator++(int);
        Fixed& operator--();
        Fixed operator--(int);
        static Fixed& min(Fixed& one, Fixed& two);
        static const Fixed& min(const Fixed& one, const Fixed& two);
        static Fixed& max(Fixed& one, Fixed& two);
        static const Fixed& max(const Fixed& one, const Fixed& two);
        float toFloat(void) const;
        int toInt(void) const;
};
std::ostream& operator<<(std::ostream& os, const Fixed& origin);



#endif