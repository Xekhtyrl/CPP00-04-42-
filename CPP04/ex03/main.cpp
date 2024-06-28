/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvodak <lvodak@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 16:17:36 by lvodak            #+#    #+#             */
/*   Updated: 2024/06/21 16:22:51 by lvodak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"

int main()
{
	IMateriaSource *src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	ICharacter *me = new Character("me");
	AMateria *tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	ICharacter *bob = new Character("bob");
	me->use(0, *bob);
	me->use(0, *bob);
	me->unequip(0);
	me->use(0, *bob);
	me->use(1, *bob);
	me->use(1, *bob);
	me->unequip(1);
	me->use(1, *bob);
	for (int i = 0; i<2; i++){
		tmp = src->createMateria("ice");
		me->equip(tmp);}
	for (int i = 0; i<3; i++){
		tmp = src->createMateria("cure");
		me->equip(tmp);}
	delete bob;
	delete me;
	delete src;
	system("leaks Materia");
	return 0;
}