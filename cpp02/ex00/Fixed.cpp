/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-gand <mel-gand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 03:34:52 by mel-gand          #+#    #+#             */
/*   Updated: 2023/11/01 16:33:24 by mel-gand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Fixed.hpp"

Fixed::Fixed()
{
    std::cout << "Default constructor called" << std::endl;
    this->fpv = 0;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed& origin)
{
    std::cout << "Copy constructor called" << std::endl;
    this->fpv = origin.fpv;
}

void Fixed::setRawBits(int const raw)
{
    this->fpv = raw;
}
int Fixed::getRawBits(void) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return (this->fpv);
}

Fixed& Fixed::operator=(const Fixed& origin)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if(this != &origin)
        this->fpv = origin.fpv;
    return *this;
}