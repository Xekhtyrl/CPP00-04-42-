/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvodak <lvodak@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/14 16:53:50 by lvodak            #+#    #+#             */
/*   Updated: 2024/06/14 17:24:42 by lvodak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP_
#define WRONGCAT_HPP_

#include "WrongAnimal.hpp"
// Class declaration
class WrongCat : public WrongAnimal {
 public:
  WrongCat();
  WrongCat(const WrongCat &other);
  WrongCat &operator=(const WrongCat &rhs);
  virtual ~WrongCat();
  void makeSound() const;

 private:
  
};

#endif // WRONGCAT_HPP_
