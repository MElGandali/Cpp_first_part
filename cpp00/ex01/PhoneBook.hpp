/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-gand <mel-gand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 00:35:12 by mel-gand          #+#    #+#             */
/*   Updated: 2023/10/28 10:52:42 by mel-gand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK
#define PHONEBOOK

#include "Contact.hpp"
#include <iostream>
#include <string>
#include <iomanip>

class   PhoneBook
{
    private:
        Contact contacts[8];

    public :
        int add_contact();
        void search_contact(int i);
        void exit_phonebook();
};


#endif