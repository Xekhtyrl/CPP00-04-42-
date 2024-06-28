/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvodak <lvodak@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/13 21:56:35 by lvodak            #+#    #+#             */
/*   Updated: 2024/06/27 16:58:42 by lvodak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

// Default constructor
Dog::Dog() {
	std::cout<<"Dog constructor called"<<std::endl;
	this->_type = typeid(*this).name()+1;
	_brain = new Brain;
	_brain->implementThought("I'M HAPPY, MY MASTER LOVES ME!!!");
	_brain->implementThought("I LOVE TO CATCH BALL!!!");
	_brain->implementThought("I'M HAPPY, MY MASTER LOVES ME!!!");
	_brain->implementThought("I LOVE TO CATCH BALL!!!");
	_brain->implementThought("I'M HAPPY, MY MASTER LOVES ME!!!");
	_brain->implementThought("I LOVE TO CATCH BALL!!!");
	_brain->implementThought("I'M HAPPY, MY MASTER LOVES ME!!!");
	_brain->implementThought("I LOVE TO CATCH BALL!!!");
	_brain->implementThought("I'M HAPPY, MY MASTER LOVES ME!!!");
	_brain->implementThought("I LOVE TO CATCH BALL!!!");
	_brain->implementThought("I'M HAPPY, MY MASTER LOVES ME!!!");
	_brain->implementThought("I LOVE TO CATCH BALL!!!");
	return; }
// Copy constructor
Dog::Dog(const Dog &other) {
  *this = other;
    this->_type = typeid(*this).name()+1;
  _brain = new Brain((Brain&)(other._brain));
  return;
}

// Copy assignment overload
Dog &Dog::operator=(const Dog &rhs) {
  (void)rhs;
    this->_type = typeid(*this).name()+1;
  _brain = new Brain((Brain&)(rhs._brain));
  return *this;
}

// Default destructor
Dog::~Dog() {
	std::cout<<"Dog destrucctor called"<<std::endl;
	delete _brain;
	return; }

void Dog::makeSound() const{
	std::cout<<"Wouf Wouf Morron"<<std::endl;
}

void Dog::printThoughts(){
	std::string* b = this->_brain->getBrain();
	while (!(*b).empty())
		std::cout<<*b++<<std::endl;
}