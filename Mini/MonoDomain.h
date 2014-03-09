#pragma once

#include <string>
#include <cstdint>

#include "MonoAssembly.h"
#include "MonoRuntimeInfo.h"

using namespace std;

class MonoDomain
{
public:
	static const string DefaultRuntimeVersion;

public:
	MonoDomain(void);
	~MonoDomain(void);

	static MonoDomain* Initialize(const string& domainName);
	static MonoDomain* InitializeFromAssembly(const string& domainName, const string& assemblyFilename);
	static MonoDomain* InitializeFromVersion(const string& domainName, const string& runtimeVersion);

private:
	static const MonoRuntimeInfo* CurrentRuntimeInfo;

private:
	static MonoDomain* InitializeInternal(const string& domainName, const string& assemblyFilename, const string& runtimeVersion);
	static MonoDomain* InitializeInternal(const string& domainName, const string& assemblyFilename, nullptr_t);
	static MonoDomain* InitializeInternal(const string& domainName, nullptr_t, const string& runtimeVersion);
};

