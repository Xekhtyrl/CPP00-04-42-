/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvodak <lvodak@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 17:25:18 by lvodak            #+#    #+#             */
/*   Updated: 2024/06/13 20:06:23 by lvodak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP_
#define CONTACT_HPP_

#include <iostream>

// Class declaration
class Contact {
	public:
		Contact();
		Contact(const Contact &other);
		void CreateContact();
		std::string GetFirstName();
		std::string GetLastName();
		std::string GetNickname();
		std::string GetPhoneNumber();
		std::string GetSecret();

	private:
		std::string _FirstName;
		std::string _LastName;
		std::string _Nickname;
		std::string	_PhoneNumber;
		std::string	_DarkestMostEverUndisclosedUntoldSecret;
		  
};

#endif // CONTACT_HPP_

