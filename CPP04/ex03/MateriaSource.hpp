/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvodak <lvodak@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 16:18:51 by lvodak            #+#    #+#             */
/*   Updated: 2024/06/20 20:11:12 by lvodak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP_
#define MATERIASOURCE_HPP_

#include "IMateriaSource.hpp"
// Class declaration
class MateriaSource : public IMateriaSource
{
public:
	MateriaSource();
	MateriaSource(const MateriaSource &other);
	MateriaSource &operator=(const MateriaSource &rhs);
	~MateriaSource();
	void learnMateria(AMateria* src);
	AMateria* createMateria(std::string const & type);

private:
	AMateria* _materiaSource[4];
};

#endif // MATERIASOURCE_HPP_
