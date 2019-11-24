#include "Account.h"
#include <iostream>
using namespace std;

int Account::totalAccounts = 0;

int Account::getNum()
{
	return accountNumber;
}

float Account::getBal()
{
	return accountBalance;
}

void Account::setNum(int num)
{
	accountNumber = num;
}

void Account::setBal(float bal)
{
	accountBalance = bal;
}

int Account::getTotalAccounts()
{
	return totalAccounts;
}

Account::Account(int num, float bal) {
	accountNumber = num;
	accountBalance = bal;
	totalAccounts++;
}

Account::~Account()
{
	totalAccounts--;
	accountNumber = 0;
	accountBalance = 0;
}

ostream& operator<<(ostream& outputStream, const Account& bAccount)
{
	outputStream << bAccount.accountNumber << " $" << bAccount.accountBalance << endl;
	return outputStream;
}

istream& operator>>(istream& inputStream,  Account& bAccount)
{
	cout << "please enter account number" << endl;
	inputStream >> bAccount.accountNumber;
	cout << "please enter accountBalance" << endl;
	inputStream >> bAccount.accountBalance;
	return inputStream;
}
