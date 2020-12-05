#include <iostream>
#include "simulator.h"
#include <windows.h>


using namespace std;

ThermostatSimulator::ThermostatSimulator(int min, int max)
{
	agent = ThermostatAgent();

	environment = ThermostatEnvironment();
	environment.min_temperature = min;
	environment.max_temperature = max;
	environment.temperature = min;
	environment.heat_power = POWER_ON;	
}

ThermostatSimulator::~ThermostatSimulator()
{

}

void ThermostatSimulator::askOwner()
{	
	cout << "Please enter an min temperature value: ";
	cin >> environment.min_temperature;

	cout << "Please enter an max temperature value: ";
	cin >> environment.max_temperature;

	if (environment.max_temperature <= environment.min_temperature)
	{
		printf("Must be max temperature greater than min temperature.\n");
		askOwner();
	}
}

[[noreturn]] void ThermostatSimulator::run()
{
	int count = 1;
	while (1)
	{
		// change temperature
		environment.iteration();

		// get heater temperature
		agent.perceive(environment);

		// decide agent act
		agent.think();

		// power on/off heater
		agent.act(&environment);

		// askOwner every 10 iteration
		if (count % 10 == 0)
			askOwner();
		count++;
		Sleep(100);
	}
}