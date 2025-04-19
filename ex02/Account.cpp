/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athonda <athonda@student.42singapore.sg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 04:23:30 by athonda           #+#    #+#             */
/*   Updated: 2025/04/19 16:47:08 by athonda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>			// std::cout
#include <ctime>			// std::time_t, std::localtime()
#include "Account.hpp"

// intializing static variables
static int	_nbAccounts = 0;
static int	_totalAmount = 0;
static int	_totalNbDeposits = 0;
static int	_totalNbWithdrawals = 0;

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
~Account()

// private constructor (no need)
Account::Account(void)
{

}

// getter
static int	Account::getNbAccounts(void)
{
	return (_nbAccounts);
}

static int	Account::getTotalAmount(void)
{
	return (_totalAmount);
}

static int	Account::getNbDeposits(void)
{
	return (_totalNbDeposits);
}

static int	Account::getNbWithdrawals(void)
{
	return (_totalnbWithdrawals);
}

static void	Account::displayAccountsInfos(void)
{

}

// time set function
static void	Account::_displayTimestamp(void)
{
	std::time_t	now = std::time(NULL);
	std::tm *tm = std::localtime(&now);

	std::cout << "[";
	std::cout << std::setfill('0') << std::setw(4) << tm->tm_year + 1900;
	std::cout << "]";

}
