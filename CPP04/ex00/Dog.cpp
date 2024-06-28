/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvodak <lvodak@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/13 21:56:35 by lvodak            #+#    #+#             */
/*   Updated: 2024/06/28 20:20:56 by lvodak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

// Default constructor
Dog::Dog() {
	this->_type = typeid(*this).name()+1;
	return; }
// Copy constructor
Dog::Dog(const Dog &other) {
  *this = other;
  this->_type = typeid(*this).name()+1;
  return;
}

// Copy assignment overload
Dog &Dog::operator=(const Dog &rhs) {
	(void)rhs;
  this->_type = typeid(*this).name()+1;
  return *this;
}

// Default destructor
Dog::~Dog() { return; }

void Dog::makeSound() const{
	std::cout<<"Wouf Wouf Morron"<<std::endl;
}