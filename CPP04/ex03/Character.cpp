/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvodak <lvodak@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 20:27:22 by lvodak            #+#    #+#             */
/*   Updated: 2024/06/27 17:05:31 by lvodak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

// Default constructor
Character::Character() { 
	_name = "[no_name]";
	for (int i = 0; i < 4; i++){
		_materia[i] = NULL;
	}
	return; }

Character::Character(std::string name){
	_name = name;
	for (int i = 0; i < 4; i++){
		_materia[i] = NULL;
	}
}
// Copy constructor
Character::Character(const Character &other)
{
	*this = other;
	_name = other._name;
	for (int i = 0; i < 4; i++){
		if (other._materia[i] == NULL)
			_materia[i] = NULL;
		else
			_materia[i] = other._materia[i]->clone();
	}
	return;
}

// Copy assignment overload
Character &Character::operator=(const Character &rhs)
{
	(void)rhs;
	_name = rhs._name;
	for (int i = 0; i < 4; i++){
		if (rhs._materia[i] == NULL)
			_materia[i] = NULL;
		else
			_materia[i] = rhs._materia[i]->clone();
	}
	return *this;
}

// Default destructor
Character::~Character() {
	for (int i = 0; i < 4; i++){
		if (_materia[i]){
			delete _materia[i];
			_materia[i]=NULL;}
	}
	return; }

std::string const &Character::getName() const{
	return (_name);
}
void Character::equip(AMateria *m){
	for (int i = 0; i < 4; i++){
		if (!_materia[i])
			return (std::cout<<"Materia equiped"<<std::endl,(void)(_materia[i] = m));
	}
	std::cout<<"No slot left for Materia"<<std::endl;
	delete m;
}
void Character::unequip(int idx){
	if (idx > 3 || !_materia[idx])
		std::cout<<"No Materia at index"<<std::endl;
	else{
		delete _materia[idx];
		_materia[idx] = NULL;
		std::cout<<"Materia unequiped"<<std::endl;
	}
}
void Character::use(int idx, ICharacter &target){
	if (idx > 3 || !_materia[idx])
		std::cout<<"No Materia at index"<<std::endl;
	else
		_materia[idx]->use(target);
}