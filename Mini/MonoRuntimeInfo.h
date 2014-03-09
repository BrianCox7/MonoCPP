#pragma once

#include <string>
#include <array>
#include <vector>
#include <cstdint>

using namespace std;

class AssemblyVersionSet
{
public:
	AssemblyVersionSet(uint16_t major, uint16_t minor, uint16_t build, uint16_t revision);

private:
	uint16_t _major;
	uint16_t _minor;
	uint16_t _build;
	uint16_t _revision;
};

class MonoRuntimeInfo
{
public:
	static const vector<MonoRuntimeInfo> SupportedRuntimes;

	MonoRuntimeInfo(const string& runtimeVersion, const string& frameworkVersion, const vector<AssemblyVersionSet>& assemblyVersionSets);

private:
	string _runtimeVersion;
	string _frameworkVersion;
	vector<AssemblyVersionSet> _assemblyVersionSets;
};
