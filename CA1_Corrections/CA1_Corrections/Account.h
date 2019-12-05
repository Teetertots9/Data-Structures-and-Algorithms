#ifndef ACCOUNT_H
#define ACCOUNT_H
#pragma once
#include <iostream>
using namespace std;

class Account {

	friend ostream& operator <<(ostream& outputStream, const Account& bAccount);
	friend istream& operator >> (istream& inputStream, Account& bAccount);

public:
	int getNum();
	float getBal();

	void setNum(int num);
	void setBal(float bal);

	static int getTotalAccounts();

	Account(int num, float bal);
	~Account();

private:
	static int totalAccounts;
	int accountNumber;
	float accountBalance;
};

#endif // !ACCOUNT_H

