/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-gand <mel-gand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 03:08:17 by mel-gand          #+#    #+#             */
/*   Updated: 2023/10/11 14:48:00 by mel-gand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED
#define FIXED

#include<iostream>

class Fixed
{
    private:
        int fpv;
        static const int fbits = 8;
    public:
        Fixed();
        ~Fixed();
        Fixed(const Fixed& origin);
        Fixed& operator=(const Fixed& origin);
        void setRawBits(int const raw);
        int getRawBits(void) const;
        
};

#endif