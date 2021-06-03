#pragma once
class Singleton
{
	Singleton() = default;
	static Singleton m_Instance;
	int counter{};
public:
	static Singleton& Instance();
	void displayCount();
	void incrementCount();

	
};

