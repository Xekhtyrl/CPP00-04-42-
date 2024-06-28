/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvodak <lvodak@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/13 21:43:07 by lvodak            #+#    #+#             */
/*   Updated: 2024/06/14 17:26:47 by lvodak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Cat.hpp"
#include "WrongCat.hpp"
#include "Dog.hpp"

int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	const WrongAnimal* i1 = new WrongCat();
	const WrongCat* i2 = new WrongCat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();
	std::cout<<"\n___________WRONG TEST___________\n"<<std::endl;
	std::cout << i1->getType() << " " << std::endl;
	i1->makeSound(); //will output the cat sound!
	std::cout << i2->getType() << " " << std::endl;
	i2->makeSound(); //will output the cat sound!
	delete meta;
	delete i;
	delete j;
	delete i1;
	delete i2;
	return 0;
}