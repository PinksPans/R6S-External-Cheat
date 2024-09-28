
#pragma once
#include "stdafx.h"

class Input
{
public:
	static Input* GetInstance();

	void StartThread();
	void StopThread();

private:
	Input();
	~Input();

	static void MenuKeyMonitor();

	HANDLE m_hThread;

	static Input* m_pInstance;
};
