#include <iostream>
#include <conio.h>
#include <iomanip>
#include <string>

using namespace std;

int main()
{
	string FirstName;
	cout << "Enter your First Name " << endl;
	cin >> FirstName;
	cout << "Hello, " << FirstName << ". Welcome Back\n" << endl;

	double netBalance;
	cout << fixed << showpoint;
	cout << setprecision(2);
	cout << "Input Net Balance shown in bill." << endl;
	cin >> netBalance;
	cout << "Your Net Balance is $" << netBalance << " Pesos.\n" << endl;

	double Payment;
	cout << fixed << showpoint;
	cout << setprecision(2);
	cout << "Enter the amount of your Payment " << endl;
	cin >> Payment;
	cout << "You paid $" << Payment << " Pesos.\n" << endl;

	int D1;
	cout << "Enter the number of days in the billing cycle. " << endl;
	cin >> D1;
	cout << "A total of " << D1 << " days are there in the billing cycle\n" << endl;

	int D2;
	cout << "Enter the number of days payment is made after billing. " << endl;
	cin >> D2;
	cout << "A total of " << D2 << " days have past after the payment\n" << endl;

	double averageDailyBalance;
	averageDailyBalance =  ((netBalance * D1) - (Payment * D2)) / D1;
	cout << fixed << showpoint;
	cout << setprecision(2);
	cout << "Your average Daily Balance is $" << averageDailyBalance << endl; 
	cout << "The interest rate per month is 0.0152. By applying this rate to your Daily Balance, \n" << endl;

	double Interest;
	Interest = (averageDailyBalance * 0.0152); 
	cout << fixed << showpoint;
	cout << setprecision(2);
	cout << "Your Interest is $" << Interest << " \n" << endl; 

	double finalDailyBalance;
	finalDailyBalance = (Interest + averageDailyBalance);
	cout << fixed << showpoint;
	cout << setprecision(2);
	cout << "Your Balance after a month is $" << finalDailyBalance << endl; 

	_getch();
	return 0;
}