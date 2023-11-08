/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-gand <mel-gand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 05:26:20 by mel-gand          #+#    #+#             */
/*   Updated: 2023/11/08 23:31:51 by mel-gand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "MateriaSource.hpp"
#include "Cure.hpp"
#include "Ice.hpp"

int main()
{
    IMateriaSource* src = new MateriaSource();
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());
    // std::cout << "------" << std::endl;
    ICharacter* me = new Character("me");
    AMateria* tmp;
    tmp = src->createMateria("ice");
    me->equip(tmp);
    delete tmp;
    tmp = src->createMateria("cure");
    me->equip(tmp);
    delete tmp;
     tmp = src->createMateria("ice");
    me->equip(tmp);
    delete tmp;
    tmp = src->createMateria("cure");
    me->equip(tmp);
    delete tmp;
    // std::cout << "------" << std::endl;
    //  tmp = src->createMateria("ice");
    // me->equip(tmp);
    // delete tmp;
    // tmp = src->createMateria("cure");
    // me->equip(tmp);
    // delete tmp;
    // std::cout << "------" << std::endl;
    ICharacter* bob = new Character("bob");
    me->use(0, *bob);
    me->use(1, *bob);
    // me->use(2, *bob);
    // me->use(3, *bob);
    //  me->use(0, *bob);
    // me->use(1, *bob);
    // me->unequip(0);
    // me->use(0, *bob);
    // me->unequip(1);
    // me->unequip(2);
    // me->unequip(3);
    delete bob;
    delete me;
    delete src;
    // system("leaks Interface");
    return 0;
}