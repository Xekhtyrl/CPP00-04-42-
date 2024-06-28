/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvodak <lvodak@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 20:18:54 by lvodak            #+#    #+#             */
/*   Updated: 2024/06/27 17:06:04 by lvodak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

// Default constructor
Cure::Cure() { 
	_type = "cure";
	_used = false;
	return; }

// Copy constructor
Cure::Cure(const Cure &other)
{
	*this = other;
	_type = "cure";
	_used = false;
	return;
}

// Copy assignment overload
Cure &Cure::operator=(const Cure &rhs)
{
	(void)rhs;
	_type = "cure";
	_used = false;
	return *this;
}

// Default destructor
Cure::~Cure() { return; }

AMateria* Cure::clone() const{
	AMateria* newMateria = new Cure();
	return newMateria;
}
void Cure::use(ICharacter &target){
	if (_used)
		std::cout<<"Materia Already used"<<std::endl;
	else{
		std::cout<<"* heals "<<target.getName()<<"’s wounds *"<<std::endl;
		_used = true;
	}
}