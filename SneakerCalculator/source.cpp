/*StockX remodel of their seller fees.
* StockX Level 1 is 13%, Level 2 12.5%, Level 3 12%, Level 4 11.5%
* Goat has the same fee structure for sellers.
* - Added StockX minimum fees for accuracy selling under $100
*/

#include<iostream>
#include<cmath>
#include<iomanip>
#include<Windows.h>
#include<conio.h>
using namespace std;
int main()
{
	boolean run = true;
	double price, goat1, goat2 , stockx1, stockx2, stockx3, stockx4;

	system("Color 0A");			//Able to change command sys color
	cout << "Sneaker Calculator Goat / StockX made by KH#0870\nv0.06" << endl;
	cout << "Enter price for payout after fee: ";
	cin >> price;
	while (run)
	{
		cout << fixed << setprecision(2);
		goat1 = (price * 0.095) + 5;		//Goat sale is 9.5% + $5 per
		goat2 = (price - goat1) * 0.029;	//Goat cash out processing fee is 2.9%
		if (price > 100) {					//StockX fee over 100
			stockx1 = (price * 0.13);		//StockX sale is its level % + 3% processing
			stockx2 = (price * 0.125);
			stockx3 = (price * 0.12);
			stockx4 = (price * 0.115);
			cout << endl;
		}
		else {								//StockX minimum fee $9 + 3%
			stockx1 = (price * 0.03) + 9;
			stockx2 = (price * 0.03) + 9;
			stockx3 = (price * 0.03) + 9;
			stockx4 = (price * 0.03) + 9;
		}

		cout << left << setw(20) << "Goat Payout" << setw(20) << "StockX Level 1" << setw(20) << "Level 2" << setw(20) << "Level 3" << setw(20) << "Level 4" << endl;
		cout << left << setw(20) << (price - goat1) - goat2 << setw(20) << price - stockx1 << setw(20) << price - stockx2 << setw(20) << price - stockx3 << setw(20) << price - stockx4 << endl;

		cout << left << setw(20) << "\nTotal Fees:" << endl;
		cout << left << setw(20) << (price - ((price - goat1) - goat2)) << setw(20) << (price - (price - stockx1)) << setw(20) << (price - (price - stockx2)) << setw(20) << (price -(price - stockx3)) << setw(20) << (price - (price - stockx4)) << endl;;

		cout << endl;

		cout << "Enter price for payout after fee: ";
		cin >> price;
	}

	system("pause");
	return 0;
}
