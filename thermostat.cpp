//clayton arndt
//cs201
//12/2/2020
#include <iostream>
#include "simulator.h"

using namespace std;

int main(int argc, char* argv[])
{	
	int min_temperature, max_temperature;

	cout << "Please enter an min temperature value: ";
	cin >> min_temperature;

	cout << "Please enter an max temperature value: ";
	cin >> max_temperature;

	if (max_temperature <= min_temperature)
	{
		printf("Must be max temperature greater than min temperature.\n");
		return 0;
	}

	// create a thermostat simulator
	ThermostatSimulator simulator = ThermostatSimulator(min_temperature, max_temperature);

	printf("Heater power on.\n");
	simulator.run();
	return 0;
}

