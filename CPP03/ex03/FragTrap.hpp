/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvodak <lvodak@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 17:48:45 by lvodak            #+#    #+#             */
/*   Updated: 2024/06/13 17:37:12 by lvodak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP_
#define FRAGTRAP_HPP_

#include "ClapTrap.hpp"

// Class declaration
class FragTrap : virtual public ClapTrap {
	public:
		FragTrap();
		FragTrap(std::string name);
		FragTrap(const FragTrap &other);
		FragTrap &operator=(const FragTrap &rhs);
		~FragTrap();
		void highFivesGuys(void);

	private:
};

#endif // FRAGTRAP_HPP_
