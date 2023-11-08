/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-gand <mel-gand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 08:54:26 by mel-gand          #+#    #+#             */
/*   Updated: 2023/11/04 13:49:10 by mel-gand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Fixed.hpp"
#include <cmath>

Fixed::Fixed()
{
    this->fpv = 0;
}
Fixed::~Fixed()
{

}

Fixed::Fixed(const int fpv)
{
    this->fpv = fpv << fbits;
}

Fixed::Fixed(const float fpv)
{
    this->fpv = roundf(fpv * std::pow(2, fbits));
}
int Fixed::toInt(void) const
{
    int fpv = this->fpv >> fbits;
    return(fpv);
}

float Fixed::toFloat(void) const
{
    float fpv = this->fpv / std::pow(2, fbits);
    return(fpv);
}

Fixed::Fixed(const Fixed& origin)
{
    *this = origin;
}

Fixed& Fixed::operator=(const Fixed& origin)
{
    if(this != &origin)
        this->fpv = origin.fpv;
    return *this;
}

Fixed& Fixed::min(Fixed& one, Fixed& two)
{
   return ((one < two) ? one:two);
}
const Fixed& Fixed::min(const Fixed& one, const Fixed& two)
{
    return ((one < two) ? one:two);
}
Fixed& Fixed::max(Fixed& one, Fixed& two)
{
    return ((one > two) ? one:two);
}
const Fixed& Fixed::max(const Fixed& one, const Fixed& two)
{
    return ((one > two) ? one:two);
}

std::ostream& operator<<(std::ostream& os, const Fixed& origin)
{
    os << origin.toFloat();
    return (os);
}

Fixed Fixed::operator++(int)
{
    Fixed tmp(*this);
    this->fpv++;
    return(tmp);
}

Fixed& Fixed::operator++()
{
    this->fpv++;
    return (*this);
}

Fixed Fixed::operator--(int)
{
    Fixed tmp(*this);
    this->fpv--;
    return(tmp);
}

Fixed& Fixed::operator--()
{
    this->fpv--;
    return (*this);
}

bool Fixed::operator>(const Fixed& origin) const
{
    return (this->fpv > origin.fpv);
}

bool Fixed::operator<(const Fixed& origin) const
{
    return (this->fpv < origin.fpv);
}

bool Fixed::operator<=(const Fixed& origin) const
{
    return (this->fpv <= origin.fpv);
}

bool Fixed::operator>=(const Fixed& origin) const
{
    return (this->fpv >= origin.fpv);
}

bool Fixed::operator==(const Fixed& origin) const
{
    return (this->fpv == origin.fpv);
}

bool Fixed::operator!=(const Fixed& origin) const
{
    return (this->fpv != origin.fpv);
}

Fixed Fixed::operator+(const Fixed& origin)
{
    Fixed result;
    
    result.fpv = this->fpv + origin.fpv;
    return (result);
}

Fixed Fixed::operator-(const Fixed& origin)
{
    Fixed result;
    
    result.fpv = this->fpv - origin.fpv;
    return (result);
}

Fixed Fixed::operator*(const Fixed& origin)
{
    Fixed result;

    result.fpv = (this->fpv * origin.fpv) >> fbits;
    return (result);
}

Fixed Fixed::operator/(const Fixed& origin)
{
    Fixed result;
    if (origin.fpv == 0)
        return(0);
    result.fpv = (this->fpv / origin.fpv) << fbits;
    return (result);
}