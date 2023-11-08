/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-gand <mel-gand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 05:41:24 by mel-gand          #+#    #+#             */
/*   Updated: 2023/11/08 23:00:21 by mel-gand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "Cure.hpp"

Character::Character() : ICharacter()
{
    this->idx_m = 0;
    this->idx_de = 0;
}

Character::Character(const std::string name) : ICharacter()
{
    this->name = name;
    this->idx_m = 0;
    this->idx_de = 0;
}

Character::~Character()
{

    for (int i = 0; i < this->idx_m; i++)
        delete this->inv[i];
    for(int i = 0; i < this->idx_de; i++)
        delete this->del[i];
    
}

Character::Character(const Character& origin)
{
    for (int i = 0; i < idx_m ; i++)
        this->inv[i] = origin.inv[i]->clone();
    this->idx = origin.idx;
    this->name = origin.name;
    this->idx_m = 0;
    this->idx_de = 0;
}
Character& Character::operator=(const Character& origin)
{
    for (int i = 0; i < idx_m ; i++)
        this->inv[i] = origin.inv[i]->clone();
    this->idx = origin.idx;
    this->name = origin.name;
    this->idx_m = 0;
    this->idx_de = 0;
    return (*this);
}

void Character::equip(AMateria* m)
{
    if (m == NULL)
        return;
    if (this->idx_de == 4)
    {
        for(int i = 0; i < this->idx_de; i++)
            delete this->del[i];
        this->idx_de = 0;
    }
    if (idx_m < 4)
    {
        this->inv[idx_m] = m->clone();
        idx_m++;
    }
    else if  (idx_m == 4)
    {
        for (int i = 0; i < 4; i++)
        {
            if (this->inv[i] == NULL)
            {
                this->inv[i] = m->clone();
                return;
            }
        }
        std::cout << "Can't equip inventory is full" << std::endl;
    }
}

void Character::unequip(int idx)
{
    if (idx >= 0 && idx < 4 && idx_de < 4)
    {
        if (this->inv[idx] != NULL)
        {
            this->del[idx_de++] = this->inv[idx];
            this->inv[idx] = NULL;
        }
    }
    else if (idx_de == 4 && idx < 4)
    {
        std::cout << "Inventory is already Empty" << std::endl;
    }
    else
        std::cout << "Wrong Index" << std::endl;
}

void    Character::use(int idx, ICharacter& target)
{
    if (this->inv[idx] == NULL)
    {
        std::cout << "Non existing item" << std::endl;
        return;
    }
    if (idx < 4)
        this->inv[idx]->use(target);
    else
        std::cout << "Wrong index" << std::endl;
}

std::string const &  Character::getName() const
{
    return(this->name);
}