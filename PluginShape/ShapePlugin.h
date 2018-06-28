#pragma once

#include <string>
#include "../PluginCore/PluginInstance.h"

class ShapePlugin : public PluginInstance
{
public:
	explicit ShapePlugin(const std::string &strName);
	~ShapePlugin(void);

	virtual bool Load();

	virtual bool UnLoad();

	//���ز�����֣�����׺����dll��
	virtual std::string GetFileName() const;

	//���ز�������֣�������׺
	virtual std::string GetDisplayName() const;
};
