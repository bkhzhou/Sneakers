#include<iostream>
#include<cmath>
#include<iomanip>
#include<Windows.h>
#include<conio.h>
using namespace std;
int main()
{
	double price, goat1, goat2 , stockx1, stockx2, stockx3, stockx4;

	system("Color 0A");
	cout << "Sneaker Calculator Goat / StockX made by KH#0870" << endl;
	cout << "Enter price for payout after fee: ";
	cin >> price;
	while (price > 0)
	{
		cout << fixed << setprecision(2);
		goat1 = (price * 0.095) + 5;
		goat2 = (price - goat1) * 0.029;
		stockx1 = (price * 0.125);
		stockx2 = (price * 0.12);
		stockx3 = (price * 0.115);
		stockx4 = (price * 0.11);
		cout << endl;

		cout << left << setw(20) << "Goat Payout" << setw(20) << "StockX Level 1" << setw(20) << "StockX Level 2" << setw(20) << "StockX Level 3" << setw(20) << "StockX Level 4" << endl;

		cout << left << setw(20) << (price - goat1) - goat2 << setw(20) << price - stockx1 << setw(20) << price - stockx2 << setw(20) << price - stockx3 << setw(20) << price - stockx4 << endl;

		cout << endl;

		cout << "Enter price for payout after fee: ";
		cin >> price;


	}

	system("pause");
	return 0;
}
