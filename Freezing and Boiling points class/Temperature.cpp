#include "Temperature.h"



Temperature::Temperature()
{
}

void Temperature::setTemperature(int t)
{
	temp = t;

}

bool Temperature::isEthylFreezing()
{
	if (temp <= ethylFreezingTemperature)
	{
		return true;
	}

	else {
		return false;
	}


}

bool Temperature::isEthylBoiling()
{
	if (temp >= ethylBoilingTemperature)
	{
		return true;
	}

	else {
		return false;
	}


}

bool Temperature::isOxygenFreezing()
{
	if (temp <= oxygenFreezingTemperature)
	{
		return true;
	}

	else {
		return false;
	
	}
}


bool Temperature::isOxygenBoiling()
{
	if (temp >= oxygenBoilingTemperature)
	{
		return true;
	}

	else {
		return false;

	}
}

bool Temperature::isWaterFreezing()
{
	if (temp <= waterFreezingTemperature)
	{
		return true;
	}

	else {
		return false;

	}
}

bool Temperature::isWaterBoiling()
{
	if (temp >= waterBoilingTemperature)
	{
		return true;
	}

	else {
		return false;

	}
}


Temperature::~Temperature()
{
}
