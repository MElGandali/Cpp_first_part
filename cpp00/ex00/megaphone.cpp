/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-gand <mel-gand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 17:42:59 by mel-gand          #+#    #+#             */
/*   Updated: 2023/10/27 03:40:09 by mel-gand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>
#include <string>

int main (int argc, char **argv)
{
    int i = 1;
    
    if (argc > 1)
    {
        while (argv[i])
        {
            int j = 0;
            while (argv[i][j])
            {
                char c = std::toupper(argv[i][j]);
                std::cout << c;
                j++;
            }
            i++;
        }
        std::cout << std::endl;
    }
    else
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
}
