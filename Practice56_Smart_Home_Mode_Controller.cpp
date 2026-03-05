#include<string>
#include <iostream>
using namespace std;

enum HomeMode
{
	Home = 1,
	Away = 2,
	Night = 3,
	Vacation = 4
};



int main()
{

	int mode_input;

	cout << "\tEnter security pin code 1 - 4: \n\nHome(1) \nAway(2) \nNight(3) \nVacation(4)";
	cin >> mode_input;

	if (mode_input < 1 || mode_input > 4)
	{
		cout << "INVALID INPUT!";
		return 0;
	}

	HomeMode current_mode = (HomeMode)mode_input;

	switch (current_mode)
	{
	case Home:
		cout << "Home mode activated... system on standby mode..";
		break;
	case Away:
		cout << "Away mode activated... system on away mode..";
		break;
	case Night:
		cout << "Night mode activated... system on night mode..";
		break;
	case Vacation:
		cout << "Vacation mode activated... system on vacation mode..";
		break;




	}

	return 0;

}
