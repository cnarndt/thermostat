#include "environment.h"

class ThermostatAgent
{
public:
	ThermostatAgent();
	~ThermostatAgent();

	void	think();
	void	act(ThermostatEnvironment *e);
	int		perceive(ThermostatEnvironment e);

};