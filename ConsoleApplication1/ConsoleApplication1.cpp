#include "stdafx.h"
#include "iostream"
using namespace std;


void yourChange(int change) {
	int dollar = change / 100;
	change %= 100;
	int quarter = change / 25;
	change %= 25;
	int dime = change / 10;
	change %= 10;
	int nickle = change / 5;
	change %= 5;


	cout << "Your change is:" << endl;
	if (dollar > 0) {
		cout << dollar << " Dollar(s)" << endl;
	}
	if (quarter > 0) {
		cout << quarter << " Quarter(s)" << endl;
	}
	if (dime > 0) {
		cout << dime << " Dime(s)" << endl;
	}
	if (nickle > 0) {
		cout << nickle << " Nickle(s)" << endl;
	}



}

int main() {
	float cost = 1;
	float credit = 1;
	float low;
	float additional;
	int creditcheck;
	int costcheck;
	int addcheck;



	while (true) {
		if (cost == 0) {
			cout << "Thank you for your purchase" << endl;
			return false;
		}

COST:
		cout << "Enter the price of your snack" << endl;
		cout << "$ ";
		cin >> cost;
		costcheck = (cost * 100);
		if (costcheck % 5) {
			cout << "Sorry pennies are not excepted" << endl;
			cout << endl;
			goto COST;
		}

	START:if (cost == 0) {
		cout << "Thank you for Your Purchase" << endl;
		break;
	}
		  CREDIT:
		  cout << "Please type how much money you would like to add" << endl;
		  cout << "$ ";
		  cin >> credit;
		  creditcheck = (credit * 100);
		  if (creditcheck % 5) {
			  cout << "Sorry pennies are not excepted" << endl;
			  cout << endl;
			  goto CREDIT;
		  }
		  





		  while (true) {


			  low = cost - credit;

			  if (cost <= credit)
			  {
				  cout << "Thank you. Your snack is now vending" << endl;

				  cout << endl;
				  if (cost == credit) {
					  cout << "No Change" << endl;
				  }
				  else {
					  yourChange((credit - cost) * 100);
				  }

				  cout << endl;

				  cout << "Would you like to purchance an additional snack?" << endl;
				  cout << "Enter the price of the next snack or 0 to Exit" << endl;

				  cin >> cost;

				  goto START;


			  }



			  else {

				  ADD:
				  cout << "You do not have sufficient change. You need $ " << low << " more" << endl;
				  cout << "Please type how much additional money you would like to add" << endl;
				  cin >> additional;
				  addcheck = (additional * 100);
				  if (addcheck % 5) {
					  cout << "Sorry pennies are not excepted" << endl;
					  cout << endl;
					  goto ADD;
				  }
				  credit = credit + additional;

			  }

		  }

	}




	return 0;
}
