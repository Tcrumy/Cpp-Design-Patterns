#pragma once
#include <random>


//**********************************************************************
// The Accelerometer class simulates input from a gyro on a            *
// smartphone/other control device. It will require and adapter for    *
// the input class in order to utilize the Input inteface. Otherwise   *
// this class would require extensive modification in order to generate*
// the expected user interface                                         *
//**********************************************************************
class Accelerometer
{

	int num = rand();

	//*****************************************************
	// m_Engine data member will be used to  generate     *
	// random numbers to return from the GetHorizontalAxis*
	// and GetVerticalAxis methods                        *
	//*****************************************************
	std::default_random_engine m_Engine{ num };

public:

	//******************************************************************
	// The GetHorizontalAxis and GetVerticalAxis methods will return   *
	// two random values from -10 to 10 which will indicate which      *
	// direction the plane is piched\turning.                          *
	//******************************************************************

	//*******************************************************************
	// Two positive values mean the plane is turning right, one         *
	// number <= 0 and one number > 0 means the plane is flying straight*
	// two negative numbers mean the plane is turning left              *
	//*******************************************************************
	double GetHorizontalAxis();
	
	//*******************************************************************
	// Two positive values mean the plane is pitched up, one            *
	// number <= 0 and one number > 0 means the plane is flying level   *
	// two negative numbers mean the plane is pitched down              *
	//*******************************************************************
	double GetVerticalAxis();


	virtual std::pair<int, int> Initialize();
};

