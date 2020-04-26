#include <amxx/api.h>
#include <$pluginprojectdirname$/rehlds_api.h>

AmxxStatus on_amxx_attach()
{
	if (!RehldsApi::init())
		return AmxxStatus::FuncNotPresent;

	return AmxxStatus::Ok;
}

void on_amxx_detach()
{
}
