#include <iostream>

class Bank
{
	char name[30];
	int n;
	int balance;
	int amount;
	int count = 0;

public:
	void getvalue()
	{
		std::cout << " Enter your name : ";
		std::cin >> name;

		std::cout << " Enter your account number : ";
		std::cin >> n;

		std::cout << " Enter your balance : ";
		std::cin >> balance;

		std::cout << "   " << std::endl;
	}
	
	void amountdeposit();
	
	void displayamount();
	
	void display();
};
void Bank::amountdeposit()
{
	std::cout << " What amount would you like to add : ";
	std::cin >> amount;
}	

void Bank::displayamount()
{
	std::cout <<" Your amount : " << amount << std::endl;
}


void Bank::display()
{
	std::cout << " Your name is " << name << std::endl;
	std::cout << " Your account number is " << n << std::endl;
	
	std::cout << " Your total is " << balance+amount << std::endl;
}

const int s = 10;

int main()
{
	Bank customer[s];

	for (int i = 0; i < s; i++)
	{
		customer[i];
	}
	int x;
	int a;
	do
	{
		std::cout << "    " << std::endl;

		std::cout << " Press " << 1 << " for assigning initial values" << std::endl;
		
		std::cout << " Press " << 2 << " for depositing amount" << std::endl;
		
		std::cout << " Press " << 3 << " for withdrawing an amount after checking the balance" << std::endl;
		
		std::cout << " Press " << 4 << " for displaying your name and balance" << std::endl;
		
		std::cout << " Press " << 5 <<" for ending further modifications"<< std::endl;
		
		std::cout << " " << std::endl;

		std::cout << " Enter which customer number do you belong to : " << std::endl;
		std::cin >> a;

		std::cout << " Enter your option : ";
		std::cin >> x;

		switch (x)
		{
		case 1: customer[a].getvalue(); break;
		
		case 2:customer[a].amountdeposit(); break;
		
		case 3:customer[a].displayamount(); break;
		
		case 4:customer[a].display(); break;
		
	
		}

	} while (x != 5);
}
