/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-gand <mel-gand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 22:05:06 by mel-gand          #+#    #+#             */
/*   Updated: 2023/10/29 13:17:33 by mel-gand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "Brain has been constructed" << std::endl;
    for(int i = 0; i < 100; i++)
        this->ideas[i] = "mel-gand";
}

Brain::~Brain()
{
    std::cout << "Brain has been Destructed" << std::endl;
}
Brain::Brain(const Brain& origin)
{
    std::cout << "Copy Brain constructor called" << std::endl;
    *this = origin;
}

Brain& Brain::operator=(const Brain& origin)
{
    std::cout << "Copy Brain assignment operator called" << std::endl;
    if(this != &origin)
    {
        for(int i = 0; i < 100; i++)
        {
            this->ideas[i] = origin.ideas[i];
        }
    }
    return *this;
}

void Brain::makeSound() const
{
    std::cout << "Meow!" << std::endl;
}

void Brain::SetIdeas(std::string idea, int i)
{
    this->ideas[i] = idea;
}

std::string Brain::GetIdeas(int i)
{
    return(this->ideas[i]);
}


