/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvodak <lvodak@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 20:51:27 by lvodak            #+#    #+#             */
/*   Updated: 2024/06/20 20:53:56 by lvodak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

// Default constructor
AMateria::AMateria() { return; }

// Copy constructor
AMateria::AMateria(const AMateria &other)
{
	*this = other;
	return;
}

// Copy assignment overload
AMateria &AMateria::operator=(const AMateria &rhs)
{
	(void)rhs;
	return *this;
}

// Default destructor
AMateria::~AMateria() { return; }

std::string const &AMateria::getType() const{
	return _type;
}
 void AMateria::use(ICharacter &target){
	std::cout<<"Nothing to be used on "<<target.getName()<<std::endl;
}