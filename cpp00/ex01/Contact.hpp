/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-gand <mel-gand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 00:35:16 by mel-gand          #+#    #+#             */
/*   Updated: 2023/10/18 17:50:42 by mel-gand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT
#define CONTACT

#include <iostream>

class   Contact
{
    std::string first_name;
    std::string last_name;
    std::string nickname;
    std::string phone_num;
    std::string darkest_secret;
    int index;
    
    public :
        Contact();
        ~Contact();
        void set_first_name(std::string first_name);
        void set_last_name(std::string last_name);
        void set_nickname(std::string nickname);
        void set_phone_num(std::string phone_num);
        void set_dark_secret(std::string darkest_secret);
        void set_index(int index);
        void display_contacts();
        void print_all_infos();
        
    
};
#endif