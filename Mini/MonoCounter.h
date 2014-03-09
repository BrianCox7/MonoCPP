#pragma once

#include <forward_list>

using namespace std;

class MonoCounter
{
public:
	static forward_list<MonoCounter*> Counters;

public:
	MonoCounter();
};

