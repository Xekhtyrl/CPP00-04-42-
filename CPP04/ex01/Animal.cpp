/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvodak <lvodak@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/13 21:30:32 by lvodak            #+#    #+#             */
/*   Updated: 2024/06/27 16:54:40 by lvodak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

// Default constructor
Animal::Animal() {
	_type = "[no type]";
	std::cout<<"Cat constructor called"<<std::endl;
	return; }

// Copy constructor
Animal::Animal(const Animal &other) {
  *this = other;
  this->_type = typeid(*this).name()+1;
  return;
}

// Copy assignment overload
Animal &Animal::operator=(const Animal &rhs) {
  (void)rhs;
  this->_type = typeid(*this).name()+1;
  return *this;
}

// Default destructor
Animal::~Animal() { 
	std::cout<<"Animal destrucctor called"<<std::endl;
	return; }

std::string	Animal::getType() const{
	return (_type);
}

void Animal::makeSound() const{
	std::cout<<"*Default Animal Sound*"<<std::endl;
}