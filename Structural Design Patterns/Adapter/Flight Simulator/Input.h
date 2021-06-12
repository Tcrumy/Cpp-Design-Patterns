#pragma once

// **********************************************************
// This class is an input interface that can be adapted from*
// Making input an inteface allows adapters to be made so   *
// input can be received from any input source such as      *
// keyboard, joystick, gamepad, gyro etc                    *
//***********************************************************

class Input
{

public:

	//*****************************************************
	// These four member methods represent the methods for*
	// controlling the plane                              *
	//*****************************************************
	virtual bool Up() = 0;
	virtual bool Down() = 0;
	virtual bool Left() = 0;
	virtual bool Right() = 0;


	virtual ~Input() = default;
};

