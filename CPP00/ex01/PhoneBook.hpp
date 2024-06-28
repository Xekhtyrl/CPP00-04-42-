/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvodak <lvodak@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 17:25:24 by lvodak            #+#    #+#             */
/*   Updated: 2024/06/02 20:53:57 by lvodak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP_
#define PHONEBOOK_HPP_

#include "Contact.hpp"

// Class declaration
class PhoneBook {
	public:
		PhoneBook();
		PhoneBook(const PhoneBook &other);
		void AddContact(Contact New, int Place);
		void DisplayPhoneBook();
		void GetContactAtIndex(int index);
	
	private:
		Contact _Phonebook[8];
	 
};

#endif // PHONEBOOK_HPP_
