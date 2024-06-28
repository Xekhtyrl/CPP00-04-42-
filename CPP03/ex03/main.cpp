/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvodak <lvodak@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 22:43:29 by lvodak            #+#    #+#             */
/*   Updated: 2024/06/25 19:14:51 by lvodak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main(){
	DiamondTrap ClapT;
	DiamondTrap ClapT3("Horror");
	DiamondTrap ClapT2(ClapT3);
	std::cout<<"Name: "<<ClapT.getName()<<"\nHP: "<<ClapT.getHP()<<"\nEng: "<<ClapT.getEng()<<"\nDmg: "<<ClapT.getDmg()<<std::endl;
	ClapT = DiamondTrap("Not Scatman");
	ClapT.whoAmI();
	ClapT3.whoAmI();
	ClapT2.whoAmI();
	for (int i = 0; i < 10; i++){
		ClapT.attack("The Void");
		ClapT.takeDamage(95 + i);
		ClapT.beRepaired(99 - i);
		ClapT.guardGate();
	}
	ClapT2.highFivesGuys();
	ClapT3.highFivesGuys();
	for (int i = 0; i < 3; i++){
		ClapT2.attack("The Void");
		ClapT2.takeDamage(99);
		ClapT2.beRepaired(2147483647);
		ClapT2.guardGate();
		ClapT3.attack("The Void");
		ClapT3.takeDamage(90 + i);
		ClapT3.beRepaired(90 - i);
		ClapT3.guardGate();
	}
	ClapT.highFivesGuys();
}