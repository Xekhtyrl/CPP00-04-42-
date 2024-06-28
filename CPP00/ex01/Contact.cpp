/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvodak <lvodak@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/02 19:16:25 by lvodak            #+#    #+#             */
/*   Updated: 2024/06/10 19:32:28 by lvodak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Contact.hpp"

Contact::Contact(){
	return;
}
void Contact::CreateContact(){
	std::cout<<"First Name: ";
	std::cin>>this->_FirstName;
	if (std::cin.eof())
		return ;
	std::cout<<"Last Name: ";
	std::cin>>this->_LastName;
	if (std::cin.eof())
		return ;
	std::cout<<"Nickname: ";
	std::cin>>this->_Nickname;
	if (std::cin.eof())
		return ;
	std::cout<<"PhoneNumber: ";
	std::cin>>this->_PhoneNumber;
	if (std::cin.eof())
		return ;
	std::cout<<"Darkest Secret: ";
	std::cin>>this->_DarkestMostEverUndisclosedUntoldSecret;
	if (std::cin.eof())
		return ;
	return;
}

Contact::Contact(const Contact &other) {
  *this = other;
  return;
}

std::string Contact::GetFirstName(){
	return (this->_FirstName);
}
std::string Contact::GetLastName(){
	return (this->_LastName);
}
std::string Contact::GetNickname(){
	return (this->_Nickname);
}
std::string Contact::GetPhoneNumber(){
	return (this->_PhoneNumber);
}
std::string Contact::GetSecret(){
	return (this->_DarkestMostEverUndisclosedUntoldSecret);
}