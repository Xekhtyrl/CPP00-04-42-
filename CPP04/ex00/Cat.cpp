/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvodak <lvodak@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/13 21:37:32 by lvodak            #+#    #+#             */
/*   Updated: 2024/06/28 20:20:52 by lvodak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Cat.hpp"
#include <typeinfo>
// Default constructor
Cat::Cat() {
	this->_type = typeid(*this).name()+1;
	return; }

// Copy constructor
Cat::Cat(const Cat &other) {
	this->_type = typeid(*this).name()+1;
  *this = other;
  return;
}

// Copy assignment overload
Cat &Cat::operator=(const Cat &rhs) {
	(void)rhs;
  this->_type = typeid(*this).name()+1;
  return *this;
}

// Default destructor
Cat::~Cat() { return; }

void Cat::makeSound() const{
	std::cout<<"Miaou Miaou Motherfucker"<<std::endl;
}