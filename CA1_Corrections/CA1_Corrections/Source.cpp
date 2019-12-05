//Andrew Teeters X00139120
#include <iostream>
#include "Account.h"
#include "Money.h"


int main()
{
	int a;
	float b;
	//Constructor test
	cout << "Constructor test" << endl;
	Money aMoney = Money();
	Money bMoney = Money(24, 55);
	Account cAccount = Account(12, 45);
	Account dAccount = Account(13, 4);
	Account eAccount = Account(14, 0);

	//Over Loaded << Money + Account
	cout << "OverLoaded << test" << endl;
	cout << aMoney;
	cout << bMoney;
	cout << cAccount;
	cout << dAccount;

	//Accessors + mutator test
	cout << "Accessor & Mutator test" << endl;
	cout << cAccount.getNum() << " " << cAccount.getBal() << endl;
	cout << "Please enter account number and balance" << endl;
	cin >> a;
	dAccount.setNum(a);
	cin >> b;
	dAccount.setBal(b);

	//OverLoaded >> Money + Account
	cout << "OverLoaded >> test" << endl;
	cin >> aMoney;
	cin >> bMoney;
	cin >> cAccount;
	cin >> dAccount;

	//percent method test
	cout << "Percent Method test" << endl;
	cout << aMoney.percent(12);
	cout << bMoney.percent(23);

	//get total accounts method test
	cout << "TotalAccounts test" << endl;
	cout << cAccount.getTotalAccounts() << endl;

	//overloaded + and - operator test
	cout << "OverLoaded + & - test" << endl;
	cout << aMoney + bMoney;
	cout << endl;
	cout << bMoney - aMoney;
	cout << endl;

	//Display Account Balance
	cout << "Display Account test" << endl;
	Account accounts[] = { cAccount, dAccount, eAccount };

	for (size_t i = 0; i < 3; i++)
	{
		cout << "$" << accounts[i].getBal() << endl;
	}







	return 0;
}

/*
	CONSTANT chocolate bar price = €1.50
	CONSTANT coupon per bar  = 1
	CONSTANT redeem number = 8
	variables
	other
	number of coupons

	input
	euro entered

	output
	number of chocolate bars

	algorithm:
		enter number of euro
		divide that by bar price and store number of bars + number of coupons
		divide number of coupons bought by number to redeem a bar and store in number of bars
		find modular of number of bars bought by number to redeem and store in coupons
		check to see if you have more coupons that redeem number
		if so repeat division and modular until total is below redeem number
		 out put number of bars bought and remaining coupons



*/