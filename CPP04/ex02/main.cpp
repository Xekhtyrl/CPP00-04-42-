/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvodak <lvodak@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/13 21:43:07 by lvodak            #+#    #+#             */
/*   Updated: 2024/06/19 17:07:01 by lvodak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Cat.hpp"
#include "WrongCat.hpp"
#include "Dog.hpp"

int main()
{
	// Animal Test;
	// Test.makeSound();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	delete j;//should not create a leak
	delete i;

	Dog Courage;
	Cat Garfield;

	std::cout<<"What would be the thougthts of a dog:"<<std::endl;
	Courage.printThoughts();
	std::cout<<"What would be the thougthts of a cat:"<<std::endl;
	Garfield.printThoughts();
	Animal *array[10];
	for (int i = 0; i < 5; i++)
		array[i] = new Dog();
	for (int i = 5; i < 10; i++)
		array[i] = new Cat();
	for (int i = 0; i < 10; i++)
		delete array[i];
	system("leaks Polymorph");
	return 0;

}