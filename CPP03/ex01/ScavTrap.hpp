/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvodak <lvodak@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 15:18:33 by lvodak            #+#    #+#             */
/*   Updated: 2024/06/25 17:50:29 by lvodak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP_
#define SCAVTRAP_HPP_

#include "ClapTrap.hpp"

// Class declaration
class ScavTrap : public ClapTrap {
	public:
		ScavTrap();
		ScavTrap(std::string name);
		ScavTrap(std::string name, int hp, int eng, int dmg);
		ScavTrap(const ScavTrap &other);
		ScavTrap &operator=(const ScavTrap &rhs);
		~ScavTrap();
		void guardGate();
		void attack(const std::string& target);

	private:
		bool _keeperMode;
};

#endif // SCAVTRAP_HPP_
