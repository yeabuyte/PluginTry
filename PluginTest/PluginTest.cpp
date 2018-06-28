#include <stdio.h>

#include "../PluginCore/PluginInstance.h"
#include "../PluginCore/PluginManager.h"

void main()
{
	PluginManager &pluManager = PluginManager::GetInstance();
	int errCode;
	PluginInstance *pInstance = pluManager.Load("PluginShape_d",errCode);
	pInstance = pluManager.Load("PluginShape_d",errCode);

	printf("%s,%d\n",pInstance->GetFileName().c_str(),errCode);

	pluManager.UnLoad("PluginShape_d");
	printf("%d\n",pluManager.GetAllPlugins().size());
	getchar();

}