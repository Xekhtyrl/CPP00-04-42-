/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvodak <lvodak@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 20:22:07 by lvodak            #+#    #+#             */
/*   Updated: 2024/06/20 21:10:25 by lvodak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP_
#define ICE_HPP_

#include "AMateria.hpp"
// Class declaration
class Ice : public AMateria{
	public:
		Ice();
		Ice(const Ice &other);
		Ice &operator=(const Ice &rhs);
		~Ice();
		AMateria *clone() const;
		void use(ICharacter& target);

	private:
};

#endif // ICE_HPP_
