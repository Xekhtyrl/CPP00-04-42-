/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvodak <lvodak@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 14:53:59 by lvodak            #+#    #+#             */
/*   Updated: 2024/06/10 16:00:59 by lvodak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name );

int	main(){
	int	n = 10;
	Zombie *horde = zombieHorde(n, "Pav Ivan");

	for (int i = 0; i < n; i++)
		horde[i].announce();
	delete[] horde;
}