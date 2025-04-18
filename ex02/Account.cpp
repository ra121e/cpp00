/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athonda <athonda@student.42singapore.sg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 04:23:30 by athonda           #+#    #+#             */
/*   Updated: 2025/04/18 21:35:14 by athonda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>			// std::cout
#include "Account.hpp"

// Constructor
Account::Account(int initial_deposit)
{
	_nbAccounts++;
	_totalAmount = _totalAmount + initial_deposit;
	_totalNbDeposits++;
	_totalNbWithdrawals = 0;
}

// destructor
~Account()

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