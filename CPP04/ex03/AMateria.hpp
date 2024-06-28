/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvodak <lvodak@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 18:44:32 by lvodak            #+#    #+#             */
/*   Updated: 2024/06/20 21:19:49 by lvodak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP_
#define AMATERIA_HPP_

#include <iostream>
#include "ICharacter.hpp"
// Class declaration
class ICharacter;
class AMateria
{
	protected:
		std::string _type;
		bool	_used;
	public:
		AMateria();
		AMateria(std::string const &type);
		AMateria(const AMateria &other);
		AMateria &operator=(const AMateria &rhs);
		virtual ~AMateria();
		std::string const &getType() const; // Returns the materia type
		virtual AMateria *clone() const = 0;
		virtual void use(ICharacter &target);
};

#endif // AMATERIA_HPP_
