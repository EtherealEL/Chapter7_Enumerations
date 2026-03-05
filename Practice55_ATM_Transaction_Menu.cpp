#include<string>
#include <iostream>
using namespace std;


enum TransactionType
{
	Deposit,
	Withdraw,
	CheckBalance,
	Exit
};





int main()
{

	string user_input;
	TransactionType transaction;

	cout << "\tEnter Transaction Keyword \nDeposit \nWithdraw \nCheckBalance \nExit\n";
	cin >> user_input;


	if (user_input == "Deposit")
		transaction = Deposit;
	else if (user_input == "Withdraw")
		transaction = Withdraw;
	else if (user_input == "CheckBalance")
		transaction = CheckBalance;
	else if (user_input == "Exit")
		transaction = Exit;
	else
	{
		cout << "Invalid entry!!";
		return 0;
	}



	switch (transaction)
	{
	case Deposit:
		cout << "Ready for deposit...";
		break;
	case Withdraw:
		cout << "Withdraw...";
		break;
	case CheckBalance:
		cout << "Current Balance: ";
		break;
	case Exit: 
		cout << "Thank you...ATM will now close out your session...";
		break;
	}

	return 0;


}

