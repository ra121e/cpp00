/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athonda <athonda@student.42singapore.sg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 04:23:30 by athonda           #+#    #+#             */
/*   Updated: 2025/04/19 17:55:23 by athonda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>			// std::cout
#include <ctime>			// std::time_t, std::localtime()
#include <iomanip>			// std::setw, std::setfill()
#include "Account.hpp"

// intializing static variables
int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

// Constructor
Account::Account(int initial_deposit) :
	_accountIndex(_nbAccounts),
	_amount(initial_deposit),
	_nbDeposits(0),
	_nbWithdrawals(0)
{
	_nbAccounts++;
	_totalAmount = _totalAmount + initial_deposit;

	_displayTimestamp();
	std::cout << "index" << _accountIndex << ";";
	std::cout << "amount" << _amount << ";";
	std::cout << "created" << std::endl;
}

// destructor
Account::~Account(void)
{}

// private constructor (no need)
Account::Account(void)
{}

// getter
int	Account::getNbAccounts(void)
{
	return (_nbAccounts);
}

int	Account::getTotalAmount(void)
{
	return (_totalAmount);
}

int	Account::getNbDeposits(void)
{
	return (_totalNbDeposits);
}

int	Account::getNbWithdrawals(void)
{
	return (_totalNbWithdrawals);
}

void	Account::displayAccountsInfos(void)
{
	_displayTimestamp();
	std::cout << "accounts:" << _nbAccounts << ";";
	std::cout << "total:" << _totalAmount << ";";
	std::cout << "deposits:" << _totalNbDeposits << ";";
	std::cout << "withdrawals:" << _totalNbWithdrawals;
	std::cout << std::endl;
}

// time set function
void	Account::_displayTimestamp(void)
{
	std::time_t	now = std::time(NULL);
	std::tm *tm = std::localtime(&now);

	std::cout << "[";
	std::cout << std::setfill('0') << std::setw(6) << tm->tm_year + 1900;
	std::cout << "]";

}
