#pragma once

#include "Array.h"
#include "Entity.h"

namespace Engine
{
	class StatusManager
	{
	public:
		static StatusManager* GetInstance();
		bool IsIngame();
	};
}