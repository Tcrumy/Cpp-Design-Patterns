#pragma once
#include "Input.h"
#include "Accelerometer.h";

//****************************************************************
// The AccelAdapter class adapts the Accelerometer implementation*
// to the Input interface. This is accomplished via inheritance  *
// but can be done through composition as well. In order to use  *
// composition, the necessary changes have been commented on in  *
// this header as well as the implementaion of AccelAdapter      *
//****************************************************************

class AccelAdapter : public Input, public Accelerometer
{
	//***************************************************
	// If using composition, uncomment the Accelerometer*
	// data member, comment out the inheritance of      *
	// Accelerometer and the Initialize member method   *
	//***************************************************
	//Accelerometer m_Accel{};

public:
	bool Up() override;
	bool Down() override;
	bool Left() override;
	bool Right() override;

	//**********************************************
	// Comment out Initialize if using composition *
	//**********************************************
	std::pair<int, int> Initialize() override;

};

