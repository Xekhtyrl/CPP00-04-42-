/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvodak <lvodak@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 20:10:20 by lvodak            #+#    #+#             */
/*   Updated: 2024/06/25 19:07:05 by lvodak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

// Default constructor
DiamondTrap::DiamondTrap() : _name("DefaultDT"){
	FragTrap::_HP		= 100;
	ScavTrap::_energy	= 50;
	FragTrap::_atkDmg	= 30;
	std::cout<<"Default Constructor >>\"IT'S AALIIIIIIIIIIIIVE\" *an abomination has been created*"<<std::endl;
	return; }

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"){
	_name = name;
	FragTrap::_HP		= 100;
	ScavTrap::_energy	= 50;
	FragTrap::_atkDmg	= 30;
	std::cout<<"Constructor >>\"IT'S AALIIIIIIIIIIIIVE\" *an abomination has been created*"<<std::endl;
	return; }
DiamondTrap::DiamondTrap(const DiamondTrap &other) {
	std::cout<<"DiamondTrap copied"<<std::endl;
	this->_name = other._name;
	this->FragTrap::_HP	 = other._HP;
	this->ScavTrap::_energy = other._energy;
	this->FragTrap::_atkDmg = other._atkDmg;
	this->ClapTrap::_name = other._name + "_clap_name";
	return;
}
DiamondTrap &DiamondTrap::operator=(const DiamondTrap &rhs) {
	std::cout<<"DiamondTrap copied(ass. ovr.)"<<std::endl;
	this->_name = rhs._name;
	this->FragTrap::_HP	 = rhs._HP;
	this->ScavTrap::_energy = rhs._energy;
	this->FragTrap::_atkDmg = rhs._atkDmg;
	this->ClapTrap::_name = rhs._name + "_clap_name";
	return *this;
}
// Default destructor
DiamondTrap::~DiamondTrap() {
	std::cout<<_name<<" has been downgrade from his hybrid status of DiamondTrap"<<std::endl;
	return; }

void DiamondTrap::whoAmI(){
	std::cout<<"I am DiamondTrap "<<_name<<", part Scav, part Frag, and here is my inferior ClapTrap name, "<<ClapTrap::_name<<std::endl;
}

std::string DiamondTrap::getName(){
	return (_name);
}

int	DiamondTrap::getHP(){
	return(_HP);
}

int	DiamondTrap::getEng(){
	return(_energy);
}

int	DiamondTrap::getDmg(){
	return(_atkDmg);
}