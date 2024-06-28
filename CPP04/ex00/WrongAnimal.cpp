/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvodak <lvodak@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/14 16:54:43 by lvodak            #+#    #+#             */
/*   Updated: 2024/06/14 17:04:19 by lvodak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

// Default constructor
WrongAnimal::WrongAnimal() { return; }

// Copy constructor
WrongAnimal::WrongAnimal(const WrongAnimal &other) {
  *this = other;
  return;
}

// Copy assignment overload
WrongAnimal &WrongAnimal::operator=(const WrongAnimal &rhs) {
  (void)rhs;
  return *this;
}

// Default destructor
WrongAnimal::~WrongAnimal() { return; }

std::string	WrongAnimal::getType() const{
	return (_type);
}

void WrongAnimal::makeSound() const{
	std::cout<<"*Default WrongAnimal Sound*"<<std::endl;
}