/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvodak <lvodak@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 17:25:21 by lvodak            #+#    #+#             */
/*   Updated: 2024/06/10 19:31:39 by lvodak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <stdio.h>
#include "Contact.hpp"
#include "PhoneBook.hpp"

void	print_input_querry(){
	std::cout<<"\033[0;36m\x1b[1m\nPhoneBook Available Options are:\n- ADD\n- SEARCH\n- EXIT\033[0m"<<std::endl;
}

void	input_ADD(int *i, PhoneBook *PhBook){
	Contact Contact;
	
	Contact.CreateContact();
	if (!Contact.GetFirstName().size() || !Contact.GetLastName().size() || !Contact.GetPhoneNumber().size()
		|| !Contact.GetNickname().size() || !Contact.GetSecret().size())
		return ((void)(std::cout<<"\033[0;31m\x1b[1mAll Field Should be Completed\033[0m"<<std::endl));
	else
		std::cout<<"\033[0;32m\x1b[1mContact Created and added\033[0m"<<std::endl;
	(*PhBook).AddContact(Contact, *i);
	(*i)++;
	print_input_querry();
}

void	input_SEARCH(int *i, PhoneBook *PhBook){
	std::string str;

	(*PhBook).DisplayPhoneBook();
	std::cout<<"Type the index that refers to the contact you seek to look for:"<<std::endl;
	std::cin>>str;
	if (std::cin.eof())
			return ;
	if (!isdigit(str[0]) || strlen(str.c_str()) > 1)
		std::cout<<"\033[0;31m\x1b[1mWrong input!\033[0m"<<std::endl;
	else if (atoi(str.c_str()) >= *i)
		std::cout<<"No Data found at index "<<str<<std::endl;
	else
		(*PhBook).GetContactAtIndex(atoi(str.c_str()));
	print_input_querry();
}

int	execute_input(std::string input, int *i, PhoneBook *PhBook){
	if (input.compare(0, input.size(), "ADD") == 0)
		input_ADD(i, PhBook);
	else if (input.compare(0, input.size(), "SEARCH") == 0)
		input_SEARCH(i, PhBook);
	else if (input.compare(0, input.size(), "EXIT") == 0)
		return (std::cout<<"History Browser erased ;)!"<<std::endl, 1);
	else if (input.size()){
		std::cout<<"\033[0;31m\x1b[1mWRONG INPUT!\033[0m"<<std::endl;
		print_input_querry();
	}
	return (0);
}

int main(){
	std::string str;
	int			i = 0;
	PhoneBook	NotFacebook;

	std::cout<<"\n\033[0;36m\x1b[1mPhoneBook Available Options are:\n- ADD\n- SEARCH\n- EXIT\033[0m"<<std::endl;
	while (1){
		getline(std::cin, str);
		if (std::cin.eof())
			break ;
		if (execute_input(str, &i, &NotFacebook))
			break ;
		else
			str.clear();
	}
	return (0);
}
