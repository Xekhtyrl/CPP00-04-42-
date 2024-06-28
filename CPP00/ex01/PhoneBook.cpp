/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvodak <lvodak@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/02 20:46:44 by lvodak            #+#    #+#             */
/*   Updated: 2024/06/03 15:02:43 by lvodak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "PhoneBook.hpp"

// Default constructor
PhoneBook::PhoneBook() {
	return;
}

// Copy constructor
PhoneBook::PhoneBook(const PhoneBook &other) {
  *this = other;
  return;
}

void	PhoneBook::AddContact(Contact New, int Place){
	this->_Phonebook[Place % 8] = New;
}

void	PhoneBook::DisplayPhoneBook(){
	std::string var;
	std::cout<<"_____________________________________________"<<std::endl;
	std::cout<<"| INDEX    | 1ST NAME | LST NAME | NCK NAME |"<<std::endl;
	for (int i = 0; i < 8; i++)
	{
		for (int j = 0; j < 4; j++){
			std::cout<<"|";
			if (j == 0)
				std::cout<<i<<"         ";
			else {
				if (j == 1)
					var = _Phonebook[i].GetFirstName();
				else if (j == 2)
					var = _Phonebook[i].GetLastName();
				else if (j == 3)
					var = _Phonebook[i].GetNickname();
				if (var.size() > 9)
					std::cout<<var.substr(0, 9)<<".";
				else {
					std::cout<<var;
					for (int k = 0; k < (int)(10 - var.size()); k++)
						std::cout<<" ";
				}
			}
		}
		std::cout<<"|"<<std::endl;
	}
}

void	PhoneBook::GetContactAtIndex(int index){
	std::cout<<"First Name	: "<<_Phonebook[index].GetFirstName()<<std::endl;
	std::cout<<"Last Name	: "<<_Phonebook[index].GetLastName()<<std::endl;
	std::cout<<"Nickname	: "<<_Phonebook[index].GetNickname()<<std::endl;
	std::cout<<"Phone n˚	: "<<_Phonebook[index].GetPhoneNumber()<<std::endl;
	std::cout<<"Darkest Secret	: "<<_Phonebook[index].GetSecret()<<std::endl;
}