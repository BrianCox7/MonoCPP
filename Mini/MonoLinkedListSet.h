#pragma once

#include <cstdint>

class MonoLinkedListSet
{
public:
	MonoLinkedListSet();
	~MonoLinkedListSet();

	bool Find(/* MonoThreadHazardPointers*, */ uintptr_t key);
	bool Insert(/* MonoThreadHazardPointers*, */ MonoLinkedListSetNode* node);
	bool Remove(/* MonoThreadHazardPointers*, */ MonoLinkedListSetNode* node);

public:
	static MonoLinkedListSet* Create(/* FreeNodeFunction* */);
};

class MonoLinkedListSetNode
{
public:
	MonoLinkedListSetNode();
};