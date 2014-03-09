#pragma once

#include <cstdint>

#include "MonoObject.h"

class MonoGarbageCollector
{
public:
	MonoGarbageCollector();
	~MonoGarbageCollector();

	void Initialize();
	void Collect(int generation);
	int GetMaxGeneration();
	int GetGeneration(MonoObject* object);
	int GetCollectionCount(int generation);
	void AddMemoryPressure(int64_t value);
	int64_t GetUsedSize();
	int64_t GetHeapSize();
	bool IsGarbageCollectorThread();
};

