/*StockX remodel of their seller fees.
* StockX Level 1 is 13%, Level 2 12.5%, Level 3 12%, Level 4 11.5%, Level 5 11% (Includes Processing Fees)
* Goat has the same fee structure for sellers.
* - Added Quick ship bonus, Successful ship bonus
* - Fixed fee structures, shipping cost, added level 5 stockx
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
	double price, goat1, goat2 , stockx1, stockx2, stockx3, stockx4, stockx5;
	char quickship, shipbonus;

	system("Color 0A");			//Able to change command sys color
	cout << "Sneaker Calculator Goat / StockX made by KH#0870\nv0.07" << endl;
	cout << "Quick ship bonus '-1%'? (Y/N): ";
	cin >> quickship;
	cout << "Successful ship bonus '-1%'? (Y/N): ";
	cin >> shipbonus;
	cout << "Enter price for payout after fee: ";
	cin >> price;
	while (run)
	{
		cout << fixed << setprecision(2);
		goat1 = (price * 0.095) + 5;		//Goat sale is 9.5% + $5 per
		goat2 = (price - goat1) * 0.029;	//Goat cash out processing fee is 2.9%
		if (price > 100 && quickship == 'y' && shipbonus == 'y') {	//one or the other
			stockx1 = (price * 0.11) + 4;
			stockx2 = (price * 0.105) + 4;
			stockx3 = (price * 0.10) + 4;
			stockx4 = (price * 0.095) + 4;
			stockx5 = (price * 0.09) + 4;
			cout << endl;
		} else if (price > 100 && (quickship == 'y' || shipbonus == 'y')) {	//both giving extra 2%
			stockx1 = (price * 0.12) + 4;
			stockx2 = (price * 0.115) + 4;
			stockx3 = (price * 0.11) + 4;
			stockx4 = (price * 0.105) + 4;
			stockx5 = (price * 0.10) + 4;
			cout << endl;
		} else if (price > 100 && quickship == 'n' && shipbonus == 'n') {					//StockX fee over 100
			stockx1 = (price * 0.13) + 4;		//StockX sale is its level % + 3% processing + $4 standard shipping (new)
			stockx2 = (price * 0.125) + 4;
			stockx3 = (price * 0.12) + 4;
			stockx4 = (price * 0.115) + 4;
			stockx5 = (price * 0.11) + 4;
			cout << endl;
		} else {								//StockX minimum fee $9 + 3% + $4 standard shipping (new)
			stockx1 = (price * 0.03) + 9 + 4;
			stockx2 = (price * 0.03) + 9 + 4;
			stockx3 = (price * 0.03) + 9 + 4;
			stockx4 = (price * 0.03) + 9 + 4;
			stockx5 = (price * 0.03) + 9 + 4;
		}

		cout << left << setw(20) << "Goat Payout" << setw(20) << "StockX Level 1" << setw(20) << "Level 2" << setw(20) << "Level 3" << setw(20) << "Level 4" << setw(20) << "Level 5" << endl;
		cout << left << setw(20) << (price - goat1) - goat2 << setw(20) << price - stockx1 << setw(20) << price - stockx2 << setw(20) << price - stockx3 << setw(20) << price - stockx4 << setw(20) << price - stockx5 << endl;

		cout << left << setw(20) << "\nTotal Fees:" << endl;
		cout << left << setw(20) << (price - ((price - goat1) - goat2)) << setw(20) << (price - (price - stockx1)) << setw(20) << (price - (price - stockx2)) << setw(20) << (price -(price - stockx3)) << setw(20) << (price - (price - stockx4)) << setw(20) << (price - (price - stockx5)) << endl;;

		cout << endl;

		cout << "Enter price for payout after fee: ";
		cin >> price;
	}

	system("pause");
	return 0;
}
