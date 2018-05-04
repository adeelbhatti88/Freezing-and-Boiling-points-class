#include <iostream>
#include <string>

#include "Temperature.h"

using namespace std;

void printTemp(Temperature t)
{

	if (t.isEthylFreezing())
	{
		cout << "Ethyl Alcohol will Freeze at this Temperature." << endl;
	}

	if (t.isOxygenFreezing())
	{
		cout << "Oxygen will Freeze at this Temperature.\n" << endl;
	}

	if (t.isWaterFreezing())
	{
		cout << "Water will Freeze at this Temperature.\n" << endl;
	}

	if (t.isEthylBoiling())
	{
		cout << "Ethyl Alcohol will Boil at this Temperature.\n" << endl;
	}

	if (t.isOxygenBoiling())
	{
		cout << "Oxygen will Boil at this Temperature.\n" << endl;
	}

	if (t.isWaterBoiling())
	{
		cout << "Water will Boil at this Temperature.\n" << endl;
	}

	
}

int main()
{
	int temporaryTemperature;
	Temperature temp;

	cout << "Please Enter a Temperature: " << endl;
	cin >> temporaryTemperature;

	temp.setTemperature(temporaryTemperature);

	printTemp(temp);
	
	return 0;
}