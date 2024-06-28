/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvodak <lvodak@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 20:42:56 by lvodak            #+#    #+#             */
/*   Updated: 2024/06/07 21:56:40 by lvodak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

// Default constructor
Harl::Harl() { return; }

// Default destructor
Harl::~Harl() { return; }

void Harl::debug(void){
	std::cout<<"[DEBUG]\nHARL DOES NOT CARE ABOUT DEBUG!!! HARL WANT FOOD"<<std::endl;
}

void Harl::info(void){
	std::cout<<"[INFO]\nHarl hungry, that means Harl want food, feed me meat"<<std::endl;
}

void Harl::warning(void){
	std::cout<<"[WARNING]\nHARL HAS NO FOOD, HARL IS HANGRY!!!"<<std::endl;
}

void Harl::error(void){
	std::cout<<"[ERROR]\nNO FOOD!?! HARL EAT YOU AND THEN EAT YOUR MANAGER"<<std::endl;
}

void Harl::complain( std::string level ){
	std::string HarlCase[] = {"DEBUG", "INFO", "WARNING", "ERROR", "other"};
	void (Harl::*ptrToFct)(void) = NULL;
	int	i;
	for (i = 0; i < 5; i++)
		if (!HarlCase[i].compare(level))
			break;
	switch (i)
	{
		case (0):
			ptrToFct = &Harl::debug;
			(this->*ptrToFct)();
			i++;
		case (1):
			ptrToFct = &Harl::info;
			(this->*ptrToFct)();
			i++;
		case (2):
			ptrToFct = &Harl::warning;
			(this->*ptrToFct)();
			i++;
		case (3):
			ptrToFct = &Harl::error;
			(this->*ptrToFct)();
			break;
		default:
			std::cout<<"*some other kind of inaudible complaints*"<<std::endl;
			break;
	}
}
