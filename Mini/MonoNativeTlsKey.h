#pragma once

class MonoNativeTlsKey
{
private:
	bool _isInitialized = false;

public:
	MonoNativeTlsKey();
	~MonoNativeTlsKey();

	bool IsInitialized();
};
