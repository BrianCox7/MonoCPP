#include "MonoRuntimeInfo.h"

// Define runtimes supported by this JIT.
const vector<MonoRuntimeInfo> MonoRuntimeInfo::SupportedRuntimes =
{
	MonoRuntimeInfo("v2.0.50215", "2.0", { AssemblyVersionSet(2, 0, 0, 0), AssemblyVersionSet(8, 0, 0, 0), AssemblyVersionSet(3, 5, 0, 0), AssemblyVersionSet(3, 0, 0, 0) }),
	MonoRuntimeInfo("v2.0.50727", "2.0", { AssemblyVersionSet(2, 0, 0, 0), AssemblyVersionSet(8, 0, 0, 0), AssemblyVersionSet(3, 5, 0, 0), AssemblyVersionSet(3, 0, 0, 0) }),
	MonoRuntimeInfo("v4.0.30319", "4.5", { AssemblyVersionSet(4, 0, 0, 0), AssemblyVersionSet(10, 0, 0, 0), AssemblyVersionSet(4, 0, 0, 0), AssemblyVersionSet(4, 0, 0, 0) }),
	MonoRuntimeInfo("v4.0.30128", "4.0", { AssemblyVersionSet(4, 0, 0, 0), AssemblyVersionSet(10, 0, 0, 0), AssemblyVersionSet(4, 0, 0, 0), AssemblyVersionSet(4, 0, 0, 0) }),
	MonoRuntimeInfo("v4.0.20506", "4.0", { AssemblyVersionSet(4, 0, 0, 0), AssemblyVersionSet(10, 0, 0, 0), AssemblyVersionSet(4, 0, 0, 0), AssemblyVersionSet(4, 0, 0, 0) }),
	MonoRuntimeInfo("moonlight", "2.1", { AssemblyVersionSet(2, 0, 5, 0), AssemblyVersionSet(9, 0, 0, 0), AssemblyVersionSet(3, 5, 0, 0), AssemblyVersionSet(3, 0, 0, 0) })
};

MonoRuntimeInfo::MonoRuntimeInfo(const string& runtimeVersion, const string& frameworkVersion, const vector<AssemblyVersionSet>& assemblyVersionSets) :
_runtimeVersion(runtimeVersion), _frameworkVersion(frameworkVersion), _assemblyVersionSets(assemblyVersionSets)
{
}