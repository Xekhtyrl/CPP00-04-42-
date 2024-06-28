/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvodak <lvodak@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 19:12:15 by lvodak            #+#    #+#             */
/*   Updated: 2024/06/20 21:20:25 by lvodak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

// Default constructor
MateriaSource::MateriaSource() { return; }

// Copy constructor
MateriaSource::MateriaSource(const MateriaSource &other)
{
	*this = other;
	return;
}

// Copy assignment overload
MateriaSource &MateriaSource::operator=(const MateriaSource &rhs)
{
	(void)rhs;
	return *this;
}

// Default destructor
MateriaSource::~MateriaSource() { 
	for (int i = 0; i < 4; i++)
		if (this->_materiaSource[i])
			delete this->_materiaSource[i];
	return; }

void MateriaSource::learnMateria(AMateria* src){
	for (int i = 0; i < 4; i++)
		if (!this->_materiaSource[i])
			return ((void)(this->_materiaSource[i] = src));
	std::cout<<"No space left for Materia"<<std::endl;
}

AMateria* MateriaSource::createMateria(std::string const & type){
	AMateria *newMateria;
	for (int i = 0; i < 4; i++)
		if (!type.compare(this->_materiaSource[i]->getType()))
			return (newMateria = (*_materiaSource[i]).clone());
	std::cout<<"No Materia with that name were found"<<std::endl;
	return NULL;
}