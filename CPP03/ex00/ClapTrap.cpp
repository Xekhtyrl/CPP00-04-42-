/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvodak <lvodak@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 21:51:52 by lvodak            #+#    #+#             */
/*   Updated: 2024/06/25 18:29:01 by lvodak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

// Default constructor
ClapTrap::ClapTrap(){ 
	_name = "Default CT";
	_HP = 10;
	_energy = 10;
	_atkDmg = 0;
	std::cout<<"Default: has been created >> "<<_HP<<" (HP); "<<_energy<<" (eng); "<<_atkDmg<<" (Atk); "<<"(Def. constrct)"<<std::endl;
	return;
}

ClapTrap::ClapTrap(std::string name){ 
	_name = name;
	_HP = 10;
	_energy = 10;
	_atkDmg = 0;
	std::cout<<_name<<": has been created >> "<<_HP<<" (HP); "<<_energy<<" (eng); "<<_atkDmg<<" (Atk); "<<"(Def. constrct)"<<std::endl;
	return;
}

ClapTrap::ClapTrap(std::string name, int hp, int eng, int dmg){
	_name = name;
	_HP = hp;
	_energy = eng;
	_atkDmg = dmg;
	std::cout<<_name<<": has been created >> "<<_HP<<" (HP); "<<_energy<<" (eng); "<<_atkDmg<<" (Atk); "<<"(Dtl constrct)"<<std::endl;
	return;
}
// Copy constructor
ClapTrap::ClapTrap(const ClapTrap &other) {
	*this = other;
	_name = other._name;
	_HP = other._HP;
	_energy = other._energy;
	_atkDmg = other._atkDmg;
	std::cout<<_name<<": has been created >> "<<_HP<<" (HP); "<<_energy<<" (eng); "<<_atkDmg<<" (Atk); "<<"(Cpy. constrct)"<<std::endl;
	return;
}

// Copy assignment overload
ClapTrap &ClapTrap::operator=(const ClapTrap &rhs) {
	if (this != &rhs){
		_name = rhs._name;
		_HP = rhs._HP;
		_energy = rhs._energy;
		_atkDmg = rhs._atkDmg;
		std::cout<<_name<<": has been created >> "<<_HP<<" (HP); "<<_energy<<" (eng); "<<_atkDmg<<" (Atk); "<<"(Cpy ass. overload)"<<std::endl;
	}
	return *this;
}

// Default destructor
ClapTrap::~ClapTrap() {
	std::cout<<_name<<": has been removed from existence!"<<std::endl;
	return;}

void ClapTrap::attack(const std::string& target){
	if (this->_energy && this->_HP)
	{
		std::cout<<_name<<" attacks "<<target<<" causing " <<this->_atkDmg<<" points of damage!"<<std::endl;
		if (!this->_atkDmg)
			std::cout<<"0 Damage!?! You suck balls!!!"<<std::endl;
		this->_energy--;
	}
	else if (!this->_HP)
		std::cout<<RED<<_name<<" has 0HP left!\n"<<_name<<" is dead!!"<<NC<<std::endl;
	else
		std::cout<<_name<<" has 0 energy left!\n"<<_name<<" can't do anything except contemplate his imminent doom!!"<<std::endl;
}
void ClapTrap::takeDamage(unsigned int amount){
	std::cout<<_name<<" took "<<amount<<" point of damage!"<<std::endl;
	if (amount > (unsigned int)_HP){
		std::cout<<RED<<_name<<" has 0HP left!\n"<<_name<<" is dead!!"<<NC<<std::endl;
		this->_HP = 0;
	}
	else{
		this->_HP -= amount;
		std::cout<<_name<<" has "<<this->_HP<<"HP left!"<<std::endl;
	}
}
void ClapTrap::beRepaired(unsigned int amount){
	if (this->_energy && this->_HP)
	{
		std::cout<<GREEN<<_name<<" got "<<amount<<" amount of HP back!"<<NC<<std::endl;
		if (_HP + amount < INT32_MAX)
			this->_HP += amount;
		else
			this->_HP = INT32_MAX;
		std::cout<<_name<<" has "<<this->_HP<<"HP left!"<<std::endl;
		this->_energy--;
	}
	else if (!this->_HP)
		std::cout<<RED<<_name<<" has 0HP left!\n"<<_name<<" is dead!!"<<NC<<std::endl;
	else
		std::cout<<_name<<" has 0 energy left!\n"<<_name<<" can't do anything except contemplate his imminent doom!!"<<std::endl;
}

std::string ClapTrap::getName(){
	return (this->_name);
}

int	ClapTrap::getHP(){
	return(this->_HP);
}