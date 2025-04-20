#include "Account.hpp"

int	main(void)
{
	Account acc(100);
	Account::displayAccountsInfos();
	acc.checkAmount();
	acc.displayStatus();
	Account bcc(345);
	Account::displayAccountsInfos();
	bcc.checkAmount();
	bcc.displayStatus();
	Account ccc(72);
	Account::displayAccountsInfos();
	ccc.checkAmount();
	ccc.displayStatus();
	acc.makeDeposit(34);
	ccc.makeDeposit(324);
	bcc.makeDeposit(987);
	acc.makeDeposit(318873);
	Account::displayAccountsInfos();
	acc.makeWithdrawal(1);
	acc.makeWithdrawal(329843);
	acc.makeWithdrawal(34);
	bcc.makeWithdrawal(10);
	ccc.makeWithdrawal(100);
	ccc.makeWithdrawal(31431313);
	Account::displayAccountsInfos();



	return (0);
}