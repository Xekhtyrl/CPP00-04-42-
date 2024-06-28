/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvodak <lvodak@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 18:47:22 by lvodak            #+#    #+#             */
/*   Updated: 2024/06/20 21:17:14 by lvodak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICHARACTER_HPP_
#define ICHARACTER_HPP_

#include "AMateria.hpp"
// Class declaration
class AMateria;

class ICharacter
{
	public:
		virtual ~ICharacter() {}
		virtual std::string const &getName() const = 0;
		virtual void equip(AMateria* m) = 0;
		virtual void unequip(int idx) = 0;
		virtual void use(int idx, ICharacter &target) = 0;
};

#endif // ICHARACTER_HPP_
