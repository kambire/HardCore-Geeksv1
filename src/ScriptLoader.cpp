#include "ScriptMgr.h"
#include "HardcoreGeeksPlayerScript.h"

void AddHardcoreGeeksScripts()
{
    if (sConfigMgr->GetOption<bool>("HardcoreGeeks.Enable", false))
    {
        new HardcoreGeeksPlayerScript();
        LOG_INFO("module.hardcore-geeks", "Modo Hardcore Geeks activado!");
        LOG_INFO("module.hardcore-geeks", "- Muertes máximas: {}", sConfigMgr->GetOption<uint8>("HardcoreGeeks.MaxDeaths", 3));
        LOG_INFO("module.hardcore-geeks", "- Multiplicador XP: {}x", sConfigMgr->GetOption<float>("HardcoreGeeks.XPRate", 1.0f));
    }
}
