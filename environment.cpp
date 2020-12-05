#include <stdio.h>
#include "environment.h"

ThermostatEnvironment::ThermostatEnvironment()
{

}

ThermostatEnvironment::~ThermostatEnvironment()
{

}

void ThermostatEnvironment::iteration()
{
	if (heat_power == POWER_ON)	// if heat power on
	{
		temperature += 1;	// increase temperature
		printf("Temperature increased +1.\n");
	}
	else if (heat_power == POWER_OFF)	// if heat power off
	{
		temperature -= 1;	// decrease temperature
		printf("Temperature decreased -1.\n");
	}
}