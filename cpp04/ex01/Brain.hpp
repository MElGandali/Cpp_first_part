/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-gand <mel-gand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 08:51:00 by mel-gand          #+#    #+#             */
/*   Updated: 2023/10/29 10:52:43 by mel-gand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN
#define BRAIN


#include <iostream>

class Brain
{
  private :
    std::string ideas[100];
  public:
    Brain();
    Brain(const Brain& origin);
    Brain& operator=(const Brain& origin);
    ~Brain();
    void makeSound() const;
    std::string GetIdeas(int i);
    void SetIdeas(std::string idea, int i);
};


#endif