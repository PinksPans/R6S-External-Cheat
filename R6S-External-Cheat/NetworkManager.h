#pragma once
#include "Array.h"
#include "Entity.h"
#include "Offsets.h"

namespace Engine
{
	class NetworkManager
	{
	public:
		void Teleport(float xpos, float ypos, float zpos);
		uintptr_t* GetAddress(uintptr_t address);
		static NetworkManager* GetInstance();
	};

	class NetObject
	{
	public:
		float X; //0x0000 
		float Y; //0x0004 
		float Z; //0x0008 
		float Unknown1; //0x000C 
		float Unknown2; //0x0010 
		float Unknown3; //0x0014 
		float Unknown4; //0x0018 
		float Unknown5; //0x001C 
		float Unknown6; //0x0020 
		float Unknown7; //0x0024 
		char pad_0x0028[0x58]; //0x0028

	}; //Size=0x0080
}