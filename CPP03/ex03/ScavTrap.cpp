/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvodak <lvodak@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 15:27:08 by lvodak            #+#    #+#             */
/*   Updated: 2024/06/25 19:12:07 by lvodak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

// Default constructor
ScavTrap::ScavTrap() {
	std::cout<<"ClapTrap evolve to... I'm the ScavTrap, Ski-bi dibby dib yo da dub dub"<<std::endl;
	// if (this->_HP == 10)
	this->_HP = 120;
	this->_energy = 50;
	this->_atkDmg = 20;
	_keeperMode = false;
	return; }
ScavTrap::ScavTrap(std::string name) : ClapTrap(name){
	std::cout<<"ClapTrap evolve to... I'm the ScavTrap, Ski-bi dibby dib yo da dub dub"<<std::endl;
	this->_name = name;
	this->_HP = 120;
	this->_energy = 50;
	this->_atkDmg = 20;
	_keeperMode = false;
	return; }

// Copy constructor
ScavTrap::ScavTrap(const ScavTrap& other) : ClapTrap(other){
	std::cout<<"ScavTrap copied"<<std::endl;
	_keeperMode = false;
	*this = other;
	return;
}

// Copy assignment overload
ScavTrap &ScavTrap::operator=(const ScavTrap &rhs) {
	std::cout<<"ScavTrap copied(ass. ovr.)"<<std::endl;
	this->_name = rhs._name;
	this->_HP = rhs._HP;
	this->_energy = rhs._energy;
	this->_atkDmg = rhs._atkDmg;
	this->_keeperMode = false;
	return *this;
}

void ScavTrap::attack(const std::string& target) {
	ClapTrap::attack(target);
	std::cout<<"Ba-da-ba-da-ba-be bop bop bodda bope"<<std::endl;
}
// Default destructor
ScavTrap::~ScavTrap() { 
	std::cout<<this->_name<<" regress to a basic ClapTrap (Desctruct)"<<std::endl;
	return; }

void ScavTrap::guardGate() {
	if (!_HP)
		std::cout<<RED<<_name<<" has 0HP left!\n"<<_name<<" is dead and can't (de)activated Gate Keeper Mode!!"<<NC<<std::endl;
	else if (!this->_keeperMode) {
		_keeperMode = true;
		std::cout<<_name<<" activated Gate Keeper Mode"<<std::endl;
	}
	else {
		_keeperMode = false;
		std::cout<<_name<<" deactivated Gate Keeper Mode"<<std::endl;
	}
}
