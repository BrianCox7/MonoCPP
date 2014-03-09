#pragma once

#include "MonoNativeTlsKey.h"

class MonoWorkStealingQueue
{
private:
	static MonoNativeTlsKey _tlsKey;

public:
	static void Initialize();
	static void Cleanup();

public:
	MonoWorkStealingQueue();
	~MonoWorkStealingQueue();
};
