/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-gand <mel-gand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 08:29:57 by mel-gand          #+#    #+#             */
/*   Updated: 2023/11/08 19:43:08 by mel-gand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include"MateriaSource.hpp"
#include <cstddef>


MateriaSource::MateriaSource() : IMateriaSource()
{
    this->idx_m = 0;
}
MateriaSource::~MateriaSource()
{
    for (int i = 0; i < 4; i++)
        delete this->m[i]; 
}
MateriaSource::MateriaSource(const MateriaSource& origin)
{
    for (int i = 0; i < idx_m ; i++)
        this->m[i] = origin.m[i]->clone();
}
MateriaSource& MateriaSource::operator=(const MateriaSource& origin)
{
    if (this != &origin)
    {
        for (int i = 0; i < idx_m ; i++)
            this->m[i] = origin.m[i]->clone();
    }
    return (*this);
}
void MateriaSource::learnMateria(AMateria* der)
{
    if (der == NULL)
        return;
    if (this->idx_m < 4)
    {
        this->m[idx_m] = der;
        this->idx_m++;
    }
}
AMateria* MateriaSource::createMateria(std::string const & type)
{
    for (int i = 0; i < idx_m; i++)
    {
        if (this->m[i] != NULL)
        {
            if (this->m[i]->getType() == type)
                return(this->m[i]->clone());
        }
    }
    return (nullptr);
}