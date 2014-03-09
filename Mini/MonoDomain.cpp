#include "MonoDomain.h"

// The most stable runtime version.
const string MonoDomain::DefaultRuntimeVersion = "v2.0.50727";

MonoDomain::MonoDomain(void)
{
}

MonoDomain::~MonoDomain(void)
{
}

MonoDomain* MonoDomain::Initialize(const string& domainName)
{
	return InitializeInternal(domainName, nullptr, DefaultRuntimeVersion);
}

MonoDomain* MonoDomain::InitializeFromAssembly(const string& domainName, const string& assemblyFilename)
{
	return InitializeInternal(domainName, assemblyFilename, nullptr);
}

MonoDomain* MonoDomain::InitializeFromVersion(const string& domainName, const string& runtimeVersion)
{
	return InitializeInternal(domainName, nullptr, runtimeVersion);
}

MonoDomain* MonoDomain::InitializeInternal(const string& domainName, const string& assemblyFilename, const string& runtimeVersion)
{
	return nullptr;
}

MonoDomain* MonoDomain::InitializeInternal(const string& domainName, const string& assemblyFilename, nullptr_t)
{
	return nullptr;
}

MonoDomain* MonoDomain::InitializeInternal(const string& domainName, nullptr_t, const string& runtimeVersion)
{
	static MonoDomain* domain = nullptr;
	MonoAssembly* assembly = nullptr;
	//const MonoRuntimeInfo* runtimes[

	if (domain != nullptr)
	{
		// Prevent InitializeInternal from being called more than once?
		// g_assert_not_reached();
	}

	// If Win32, avoid system error message boxes
	// SetErrorMode(SEM_FAILCRITICALERRORS | SEM_NOOPENFILEERRORBOX);

	// If NOT Win32, initialize emulated Windows threading and IO APIs
	// wapi_init();

	// If enabled, initialize performance counters
	// mono_perfcounters_init();

	// Register counters
	// mono_counters_register ("Max native code in a domain", MONO_COUNTER_INT|MONO_COUNTER_JIT, &max_domain_code_size);
	// mono_counters_register ("Max code space allocated in a domain", MONO_COUNTER_INT|MONO_COUNTER_JIT, &max_domain_code_alloc);
	// mono_counters_register ("Total code space allocated", MONO_COUNTER_INT|MONO_COUNTER_JIT, &total_domain_code_alloc);

	CurrentRuntimeInfo = &MonoRuntimeInfo::SupportedRuntimes[0];
	// Initialize GC base

	// Initialize/allocate native TLS

	// Initialize AppDomains mutex

	// Initialize metadata infrastructure

	// Initialize images

	// Initialize assemblies

	// Initialize classes

	// Initialize loader

	// Initialize reflection

	// Initialize runtime TLS



	return domain;
}