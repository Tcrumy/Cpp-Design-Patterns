#pragma once
#include "Flyweight.h"

class ConcreteFlyweight : public Flyweight
{
	int* m_pIntrinsicState{};

public:
	ConcreteFlyweight(int* mPIntrinsicState) : m_pIntrinsicState{ mPIntrinsicState }
	{}
	
	void Operation(int extrinsic) override;

};

