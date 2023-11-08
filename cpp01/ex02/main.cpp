/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-gand <mel-gand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 10:47:13 by mel-gand          #+#    #+#             */
/*   Updated: 2023/09/30 14:42:21 by mel-gand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main()
{
    std::string stringVAR = "HI THIS IS BRAIN";
    std::string *stringPTR = &stringVAR;
    std::string &stringREF = stringVAR;
    
    std::cout << "The memory address of stringVAR is: " << &stringVAR << std::endl;
    std::cout << "The memory address held by stringPTR is: " << stringPTR << std::endl;
    std::cout << "The memory address held by stringREF is: " << &stringREF << std::endl;

    std::cout << "The value of stringVAR is: " << stringVAR << std::endl;
    std::cout << "The value of stringPTR is: " << *stringPTR << std::endl;
    std::cout << "The value of stringREF is: " << stringREF << std::endl;

}