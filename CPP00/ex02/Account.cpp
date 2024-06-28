/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvodak <lvodak@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 17:11:14 by lvodak            #+#    #+#             */
/*   Updated: 2024/06/04 17:15:49 by lvodak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <stdio.h>

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

int	Account::getNbAccounts(void){
	return (_nbAccounts);
}
int	Account::getTotalAmount(void){
	return (_totalAmount);
}
int	Account::getNbDeposits(void){
	return (_totalNbDeposits);
}
int	Account::getNbWithdrawals(void){
	return (_totalNbWithdrawals);
}

void	Account::_displayTimestamp( void ){
	time_t time = std::time(0);

	std::cout<<"["<<time<<"]";
}

Account::Account(int initial_deposit ) {
	_accountIndex = _nbAccounts;
	_nbAccounts++;
	_totalAmount += initial_deposit;
	_amount = initial_deposit;
	_nbDeposits = 0;
	_nbWithdrawals = 0;

	_displayTimestamp();
	std::cout<<" index:"<<_accountIndex<<";amount:"<<_amount<<";created"<<std::endl;
	return;
}

Account::~Account() {
	_nbAccounts--;
	_totalAmount -= _amount;
	_totalNbDeposits -= _nbDeposits;
	_totalNbWithdrawals -= _nbWithdrawals;

	_displayTimestamp();
	std::cout<<" index:"<<_accountIndex<<";amount:"<<_amount<<";closed"<<std::endl;
	return;
}

void Account::displayAccountsInfos(void){
	_displayTimestamp();
	std::cout<<" accounts:"<<_nbAccounts<<";total:"<<_totalAmount<<"deposits:"
		<<_totalNbDeposits<<";withdrawals:"<<_totalNbWithdrawals<<std::endl;
}

void	Account::makeDeposit( int deposit ){
	_amount += deposit;
	_totalAmount += deposit;
	_nbDeposits += 1;
	_totalNbDeposits += 1;
	_displayTimestamp();
	std::cout<<" index:"<<_accountIndex<<"p_amount:"<<_amount - deposit<<";deposit"<<deposit
		<<";amount:"<< _amount<<";nb_deposits:"<<_nbDeposits<<std::endl;
}
bool	Account::makeWithdrawal( int withdrawal ){
	if (withdrawal > _amount)
	{
		_displayTimestamp();
		std::cout<<" index:"<<_accountIndex<<";p_amount:"<<_amount - withdrawal<<";withdrawal"
			<<withdrawal<<";amount:"<< _amount<<";nb_withdrawals:refused"<<std::endl;
		return (false);
	}
	_amount -= withdrawal;
	_totalAmount -= withdrawal;
	_nbWithdrawals += 1;
	_totalNbWithdrawals += 1;
	_displayTimestamp();
	std::cout<<" index:"<<_accountIndex<<";p_amount:"<<_amount - withdrawal<<";withdrawal"
		<<withdrawal<<";amount:"<< _amount<<";nb_withdrawals:"<<_nbWithdrawals<<std::endl;
	return (true);
}
int		Account::checkAmount( void ) const{
	return (_amount);
}
void	Account::displayStatus( void ) const{
	_displayTimestamp();
	std::cout<<" index:"<<_accountIndex<<";amount:"<<_amount<<";deposits:"
		<<_nbDeposits<<";withdrawals:"<<_nbWithdrawals<<std::endl;
}