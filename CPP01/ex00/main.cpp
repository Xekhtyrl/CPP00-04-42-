/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvodak <lvodak@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 14:53:59 by lvodak            #+#    #+#             */
/*   Updated: 2024/06/10 16:00:32 by lvodak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*	newZombie( std::string name );
void randomChump( std::string name );

int	main(){
	Zombie *uno;
	Zombie *zwei;
	Zombie *three;

	uno = newZombie("Pam Ortes");
	zwei = newZombie("Rob");
	three = newZombie("Pav Ivan");
	uno->announce();
	zwei->announce();
	three->announce();
	delete uno;
	delete zwei;
	delete three;

	randomChump("Rand Homme");
	randomChump("Rand Femme");
	randomChump("Rand Autre");
}