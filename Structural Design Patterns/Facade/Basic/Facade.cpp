#include "Facade.h"

Facade::Facade()
{
	m_pA = std::make_unique<A>();
	m_pB = std::make_unique<B>();
	m_pC = std::make_unique<C>();
}

Facade::~Facade()
{
}

void Facade::Use()
{
	m_pA->CallA();
	m_pB->CallB();
	m_pC->CallC();
}
