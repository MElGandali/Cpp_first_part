/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-gand <mel-gand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 07:34:05 by mel-gand          #+#    #+#             */
/*   Updated: 2023/11/03 20:10:26 by mel-gand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
    std::cout << "Default constructor called" << std::endl;
    this->fpv = 0;
}
Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const int fpv)
{
    std::cout << "Int constructor called" << std::endl;
    this->fpv = fpv << fbits;
}

Fixed::Fixed(const float fpv)
{
    std::cout << "Float constructor called" << std::endl;
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
    std::cout << "Copy constructor called" << std::endl;
    *this = origin;
}

Fixed& Fixed::operator=(const Fixed& origin)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if(this != &origin)
        this->fpv = origin.fpv;
    return *this;
}

std::ostream& operator<<(std::ostream& os, const Fixed& origin)
{
    os << origin.toFloat();
    return (os);
}

