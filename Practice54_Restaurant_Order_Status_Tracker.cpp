#include <iostream>
#include <string>
using namespace std;

enum OrderStatus
{
	Placed,
	Cooking,
	Ready,
	Delivered
};



int main()
{
	string user_input;
	OrderStatus current_stat;


	cout << "\tEnter the Order Status:\n\n Placed\n Cooking\n Ready\n Delivered\n";
	cin >> user_input;


	if (user_input == "Placed")
		current_stat = Placed;
	else if (user_input == "Cooking")
		current_stat = Cooking;
	else if (user_input == "Ready")
		current_stat = Ready;
	else if (user_input == "Delivered")
		current_stat = Delivered;
	else
	{
		cout << "Invalid entry!!";
		return 0;
	}

	//switch 

	switch (current_stat)
	{
	case Placed:
		cout << "Your order has been PLACED.";
		break;

	case Cooking:
		cout << "We have STARTED COOKING your food.";
		break;
	case Ready:
		cout << "Your food is READY and on the way.";
		break;
	case Delivered:
		cout << "Your order had been DELIVERED, enjoy!";
		break;
	}

	return 0;

}
