//hw5-12.cpp - displays the total owed
//Created/revised by <your name> on <current date>

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	double itemPrice1 = 0.0;
	double itemPrice2 = 0.0;
	double amntOwed = 0.0;
	const double HLF_OFF = 0.5;

	cout << "Enter Item 1 Price: $";
	cin >> itemPrice1;
	cout << "Enter Item 2 Price: $";
	cin >> itemPrice2;

	if (itemPrice1 > itemPrice2)
		amntOwed = itemPrice1 + (itemPrice2 * HLF_OFF);
	else if (itemPrice2 > itemPrice1) 
		amntOwed = itemPrice2 + (itemPrice1 * HLF_OFF);
	else 
		amntOwed = itemPrice1 + (itemPrice2 * HLF_OFF);

	cout << fixed << setprecision(2);
	cout << "Amount Owed After Discount: $" << amntOwed << endl;

return 0;
}	//end of main function
