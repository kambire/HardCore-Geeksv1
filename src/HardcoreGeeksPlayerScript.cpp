#include "HardcoreGeeksPlayerScript.h"
#include "DatabaseEnv.h"
#include "World.h"

// Cambiar todas las referencias de "Hardcore" a "HardcoreGeeks"
bool HardcoreGeeksPlayerScript::IsHardcoreEnabled()
{
    return sConfigMgr->GetOption<bool>("HardcoreGeeks.Enable", false) &&
           sConfigMgr->GetOption<bool>("HardcoreGeeks.ApplyToAllClasses", true);
}

// En todos los métodos, cambiar sConfigMgr->GetOption calls:
// Ejemplo en OnPlayerDeath:
if (deaths >= sConfigMgr->GetOption<uint8>("HardcoreGeeks.MaxDeaths", 3))

// Y en ApplyPermanentDeath:
std::istringstream iss(sConfigMgr->GetOption<std::string>("HardcoreGeeks.MessageColor", "255 0 0"));
