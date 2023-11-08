/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-gand <mel-gand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 04:19:03 by mel-gand          #+#    #+#             */
/*   Updated: 2023/11/07 16:19:39 by mel-gand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main( void )
{
    std::cout << "-------" << std::endl;
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    std::cout << "-------" << std::endl;

    std::cout << "-------" << std::endl;
    delete j;//should not create a leak
    delete i;
    std::cout << "-------" << std::endl;

    Dog basic;
    {
        std::cout << "-------" << std::endl;
        Dog tmp = basic;
        std::cout << "-------" << std::endl;

    }
    std::cout << "-------" << std::endl;

    const Animal* animals[4] = { new Dog(), new Dog(), new Cat(), new Cat() };
    for ( int i = 0; i < 4; i++ ) {

        delete animals[i];

    }
    std::cout << "-------" << std::endl;
    system("leaks Animal");
    return 0;
}
// int main()
// {    

//     std::cout << "\n\n==================   BASIC TEST   ==================\n" << std::endl;
    
//     const Animal* dog = new Dog();
//     const Animal* cat = new Cat();

//     std::cout << dog->getType() << std::endl;
//     std::cout << cat->getType() << std::endl;
    
//     dog->makeSound();
//     cat->makeSound();

//     std::cout << "\n\n==================   CLEAN ALL    ==================\n" << std::endl;
//     delete dog;
//     delete cat;
    
//     system("leaks Animal");

//     // TEST DEEP COPY
//     std::cout << "\n\n================== TEST DEEP COPY ==================\n" << std::endl;

//     Cat luna;
//     Cat bella;

//     bella = luna;

//     luna.getBrain().SetIdeas("hello", 0);
//     std::cout << luna.getBrain().GetIdeas(0) << "\n";
//     std::cout << bella.getBrain().GetIdeas(0) << "\n";

//     // system("leaks ex01");

//     std::cout << "\n\n================ SUBJECT ARRAY TEST ================\n" << std::endl;

//     const Animal* animals[4] = { new Dog(), new Dog(), new Cat(), new Cat() };
//     for ( int i = 0; i < 4; i++ )
//     {
//         delete animals[i];
//     }
//     // std::cout << "\n\n=====================\n\n";
//     //system("leaks ex01");
//     return 0;
// }
