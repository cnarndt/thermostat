#include <stdio.h>
#include "agent.h"

ThermostatAgent::ThermostatAgent()
{

}

ThermostatAgent::~ThermostatAgent()
{

}

void ThermostatAgent::think()
{
	printf("Think agent.\n");
}

void ThermostatAgent::act(ThermostatEnvironment* e)
{
	if (e->temperature >= e->max_temperature)
	{
		printf("=========================================\n");
		printf("Max Temperature!\n");
		e->heat_power = 0;
		printf("Heater power off.\n");
		printf("=========================================\n");
	}
	else if (e->temperature <= e->min_temperature)
	{
		printf("=========================================\n");
		printf("Min Temperature!\n");
		e->heat_power = 1;
		printf("Heater power on.\n");
		printf("=========================================\n");
	}	
}

int ThermostatAgent::perceive(ThermostatEnvironment e)
{
	printf("Temperature : %d\n", e.temperature);
	
	return e.temperature;
}