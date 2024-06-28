/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvodak <lvodak@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 20:10:18 by lvodak            #+#    #+#             */
/*   Updated: 2024/06/21 15:02:52 by lvodak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP_
#define DIAMONDTRAP_HPP_

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
class ScavTrap;
// Class declaration
class DiamondTrap : public FragTrap, public ScavTrap{
	public:
		DiamondTrap();
		DiamondTrap(std::string name);
		DiamondTrap(const DiamondTrap &other);
		DiamondTrap &operator=(const DiamondTrap &rhs);
		~DiamondTrap();
		using ScavTrap::attack;
		void whoAmI();

		std::string getName();
		int	getHP();
		int	getEng();
		int	getDmg();

	private:
		std::string _name;
};

#endif // DIAMONDTRAP_HPP_
