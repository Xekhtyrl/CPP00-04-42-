/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvodak <lvodak@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 20:22:50 by lvodak            #+#    #+#             */
/*   Updated: 2024/06/28 20:21:43 by lvodak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

// Default constructor
Ice::Ice() { 
	_type = "ice";
	_used = false;
	return; }

// Copy constructor
Ice::Ice(const Ice &other)
{
	*this = other;
	_type = "ice";
	_used = false;
	return;
}

// Copy assignment overload
Ice &Ice::operator=(const Ice &rhs)
{
	(void)rhs;
	_type = "ice";
	_used = false;
	return *this;
}

// Default destructor
Ice::~Ice() { return; }

AMateria* Ice::clone() const{
	AMateria* newMateria = new Ice();
	return newMateria;
}
void Ice::use(ICharacter &target){
	if (_used)
		std::cout<<"Materia Already used"<<std::endl;
	else{
		std::cout<<"* shoots an ice bolt at "<<target.getName()<<" *"<<std::endl;
		_used = true;
	}
}