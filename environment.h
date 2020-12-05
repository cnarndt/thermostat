enum{
	POWER_OFF,
	POWER_ON
};

class ThermostatEnvironment
{
public:
	ThermostatEnvironment();
	~ThermostatEnvironment();

	void iteration();

	int		temperature;
	int		min_temperature;
	int		max_temperature;
	int		heat_power;
};
