/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-gand <mel-gand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 08:30:01 by mel-gand          #+#    #+#             */
/*   Updated: 2023/10/28 18:51:36 by mel-gand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIA_SOURCE
#define MATERIA_SOURCE

#include <iostream>
#include "AMateria.hpp"
#include "IMateriaSource.hpp"

class   MateriaSource : public IMateriaSource
{
    protected : 
        AMateria* m[4];
        int idx_m;
    public:
        MateriaSource();
        ~MateriaSource();
        MateriaSource(const MateriaSource& origin);
        MateriaSource& operator=(const MateriaSource& origin);
        void learnMateria(AMateria*);
        AMateria* createMateria(std::string const & type);
};

#endif