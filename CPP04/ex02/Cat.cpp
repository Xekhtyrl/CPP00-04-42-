/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvodak <lvodak@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/13 21:37:32 by lvodak            #+#    #+#             */
/*   Updated: 2024/06/27 16:58:20 by lvodak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Cat.hpp"
#include <typeinfo>
// Default constructor
Cat::Cat() {
	std::cout<<"Cat constructor called"<<std::endl;
	this->_type = typeid(*this).name()+1;
	_brain = new Brain();
	_brain->implementThought("1st idea: conquer the world and enslave (officialy) the human race");
	_brain->implementThought("2nd idea: eradicate those stupid dogs");
	_brain->implementThought("3rd idea: ask... I mean order the human to feed me");
	_brain->implementThought("3.5 idea; and pet me, mostly my belly so I can attack him by surprise... hé hé hé");
	_brain->implementThought("4th idea: in progress...");
	return; }

// Copy constructor
Cat::Cat(const Cat &other) {
  *this = other;
  this->_type = typeid(*this).name()+1;
  _brain = new Brain((Brain&)(other._brain));
  return;
}

// Copy assignment overload
Cat &Cat::operator=(const Cat &rhs) {
  this->_type = typeid(*this).name()+1;
  _brain = new Brain((Brain&)(rhs._brain));
  return *this;
}

// Default destructor
Cat::~Cat() {
	std::cout<<"Cat destrucctor called"<<std::endl;
	delete _brain;
	return; }

void Cat::makeSound() const{
	std::cout<<"Miaou Miaou Motherfucker"<<std::endl;
}

void Cat::printThoughts(){
	std::string* b = this->_brain->getBrain();
	while (!(*b).empty())
	// for (int i = 0; i < 100; i++)
		// if (!b[i].empty())
			std::cout<<*b++<<std::endl;
}