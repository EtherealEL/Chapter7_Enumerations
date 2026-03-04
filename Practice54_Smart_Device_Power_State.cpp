
#include <iostream>
using namespace std;


enum PowerState { Off, On, Sleep };

int main()
{
	//assign Sleep
	//switch

	PowerState device_state = Sleep;

	switch (device_state)
	{
	case Off:
		cout << "Device is off";
		break;
	case On:
		cout << "Device is On";
		break;
	case Sleep:
		cout << "Device is is sleep mode";
		break;
	}

	return 0;
}

