/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvodak <lvodak@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 15:27:08 by lvodak            #+#    #+#             */
/*   Updated: 2024/06/25 18:00:20 by lvodak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

// Default constructor
ScavTrap::ScavTrap() : ClapTrap("Default", 100, 50, 20){
	std::cout<<"ClapTrap evolve to... I'm the ScavTrap, Ski-bi dibby dib yo da dub dub"<<std::endl;
	_keeperMode = false;
	// ClapTrap("Default ScavTrap", 100, 50, 20);
	return; }

ScavTrap::ScavTrap(std::string name) : ClapTrap(name, 100, 50, 20){
	std::cout<<"ClapTrap evolve to... I'm the ScavTrap, Ski-bi dibby dib yo da dub dub"<<std::endl;
	_keeperMode = false;
	// ClapTrap("Default ScavTrap", 100, 50, 20);
	return; }
ScavTrap::ScavTrap(std::string name, int hp, int eng, int dmg) : ClapTrap(name, hp, eng, dmg) { 
	std::cout<<"ClapTrap evolve to... I'm the ScavTrap, Ski-bi dibby dib yo da dub dub"<<std::endl;
	_keeperMode = false;
	// ClapTrap(name, hp, eng, dmg);
	return; }

// Copy constructor
ScavTrap::ScavTrap(const ScavTrap& other) : ClapTrap(other){
	std::cout<<"ScavTrap copied"<<std::endl;
	*this = other;
	_keeperMode = false;
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
	if (this->_energy && this->_HP)
	{
		std::cout<<_name<<" attacks "<<target<<" causing " <<this->_atkDmg<<" points of damage!"<<std::endl;
		std::cout<<"Ba-da-ba-da-ba-be bop bop bodda bope"<<std::endl;
	if (!this->_atkDmg)
			std::cout<<"0 Damage!?! You suck balls!!!"<<std::endl;
		this->_energy--;
	}
	else if (!this->_HP)
		std::cout<<RED<<_name<<" has 0HP left!\n"<<_name<<" is dead!!"<<NC<<std::endl;
	else
		std::cout<<_name<<" has 0 energy left!\n"<<_name<<" can't do anything except contemplate his imminent doom!!"<<std::endl;
}
// Default destructor
ScavTrap::~ScavTrap() { 
	std::cout<<this->getName()<<" regress to a basic ClapTrap (Desctruct)"<<std::endl;
	return; }

void ScavTrap::guardGate() {
	if (!getHP())
		std::cout<<RED<<getName()<<" has 0HP left!\n"<<getName()<<" is dead and can't (de)activated Gate Keeper Mode!!"<<NC<<std::endl;
	else if (!this->_keeperMode) {
		_keeperMode = true;
		std::cout<<getName()<<" activated Gate Keeper Mode"<<std::endl;
	}
	else {
		_keeperMode = false;
		std::cout<<getName()<<" deactivated Gate Keeper Mode"<<std::endl;
	}
}