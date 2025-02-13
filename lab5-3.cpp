//lab5-2.cpp - displays the total amount due
//Created/revised by <your name> on <current date>

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	const double DISC_RATE1 = 0.1;
	const double DISC_RATE2 = 0.05
	const double SHIP_RATE1 = 0.99;
	const double SHIP_RATE2 = 4.99;
	double amountOwed = 0.0;
	double discount = 0.0;
	char member = ' ';

	cout << "Amount owed before any shipping and discount: ";
	cin >> amountOwed;
	cout << "Premier club member Y / N ";
	cin >> member;

	if (toupper(member) == 'Y')
		discount = amountOwed * DISC_RATE1;
	else
		discount = amountOwed * DISC_RATE2
	
	amountOwed -= discount

	if (amountOwed >= 100.0)
		amountOwed += SHIP_RATE1;
	else
		amountOwed += SHIP_RATE2;

	cout << fixed << setprecision(2);
	cout << "Amount owed after shipping and or discounts: " << amountOwed << endl;

return 0;
}	//end of main function
