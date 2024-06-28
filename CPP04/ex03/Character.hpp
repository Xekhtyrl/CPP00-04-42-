/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvodak <lvodak@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 16:19:59 by lvodak            #+#    #+#             */
/*   Updated: 2024/06/20 21:16:12 by lvodak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP_
#define CHARACTER_HPP_

#include "ICharacter.hpp"
#include "AMateria.hpp"
// Class declaration
class Character : public ICharacter
{
public:
	Character();
	Character(std::string name);
	Character(const Character &other);
	Character &operator=(const Character &rhs);
	~Character();
	std::string const &getName() const;
	void equip(AMateria* m);
	void unequip(int idx);
	void use(int idx, ICharacter& target);

private:
	std::string _name;
	AMateria*	_materia[4]; //?
};

#endif // CHARACTER_HPP_
