/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvodak <lvodak@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/14 16:55:22 by lvodak            #+#    #+#             */
/*   Updated: 2024/06/28 20:21:00 by lvodak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

// Default constructor
WrongCat::WrongCat() { 
	this->_type = typeid(*this).name()+1;
	return; }

// Copy constructor
WrongCat::WrongCat(const WrongCat &other) {
  *this = other;
  this->_type = typeid(*this).name()+1;
  return;
}

// Copy assignment overload
WrongCat &WrongCat::operator=(const WrongCat &rhs) {
	(void)rhs;
	this->_type = typeid(*this).name()+1;
  return *this;
}

// Default destructor
WrongCat::~WrongCat() { return; }

void WrongCat::makeSound() const{
	std::cout<<"Ed... wardo... come and play with me"<<std::endl;
}