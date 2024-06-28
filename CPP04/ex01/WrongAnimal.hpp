/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvodak <lvodak@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/14 16:51:50 by lvodak            #+#    #+#             */
/*   Updated: 2024/06/14 17:27:11 by lvodak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP_
#define WRONGANIMAL_HPP_

#include <iostream>
// Class declaration
class WrongAnimal {
 public:
  WrongAnimal();
  WrongAnimal(const WrongAnimal &other);
  WrongAnimal &operator=(const WrongAnimal &rhs);
  virtual ~WrongAnimal();
  std::string getType() const;
  void makeSound() const;

 protected:
  std::string _type;
};

#endif // WRONGANIMAL_HPP_
