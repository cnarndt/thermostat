#include "agent.h"

class ThermostatSimulator
{
public:
	ThermostatSimulator(int min, int max);
	~ThermostatSimulator();

    [[noreturn]] void run();
	void askOwner();

	ThermostatEnvironment	environment;
	ThermostatAgent			agent;	
};