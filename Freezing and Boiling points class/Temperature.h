#pragma once
class Temperature
{
public:
	Temperature();
	bool isEthylFreezing();
	bool isEthylBoiling();
	bool isOxygenFreezing();
	bool isOxygenBoiling();
	bool isWaterFreezing();
	bool isWaterBoiling();

	void setTemperature(int);
	~Temperature();

private:
	int ethylFreezingTemperature = -173;
	int ethylBoilingTemperature = 172;

	int oxygenFreezingTemperature = -362;
	int oxygenBoilingTemperature = -306;

	int waterFreezingTemperature = 32;
	int waterBoilingTemperature = 212;

	int temp;
};

