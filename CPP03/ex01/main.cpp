/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvodak <lvodak@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 22:43:29 by lvodak            #+#    #+#             */
/*   Updated: 2024/06/25 18:06:00 by lvodak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main(){
	ScavTrap ClapT;
	ScavTrap ClapT3("Carlos");
	ScavTrap ClapT2(ClapT3);
	ClapT = ScavTrap("The Scavman");
	for (int i = 0; i < 10; i++){
		ClapT.attack("The Void");
		ClapT.guardGate();
		ClapT.takeDamage(2147483648);
		ClapT.beRepaired(2);
	}
	for (int i = 0; i < 3; i++){
		ClapT3.attack("The Void");
		ClapT3.takeDamage(2);
		ClapT3.beRepaired(2);
		ClapT2.attack("The Void");
		ClapT2.takeDamage(2);
		ClapT2.beRepaired(2);
		ClapT2.guardGate();
		ClapT3.guardGate();
	}
}