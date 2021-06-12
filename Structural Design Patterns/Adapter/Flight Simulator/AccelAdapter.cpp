#include "AccelAdapter.h"

bool AccelAdapter::Up()
{

	//************************************************
	// To use composition, comment out the line below*
	// and uncomment the line below that             *
	//************************************************
	return GetVerticalAxis() > 0;
    //return m_Accel.GetVerticalAxis() > 0;
}

bool AccelAdapter::Down()
{
	//************************************************
	// To use composition, comment out the line below*
	// and uncomment the line below that             *
	//************************************************
	return GetVerticalAxis() < 0;
	//return m_Accel.GetVerticalAxis() < 0;
}

bool AccelAdapter::Left()
{
	//************************************************
	// To use composition, comment out the line below*
	// and uncomment the line below that             *
	//************************************************
	return GetHorizontalAxis() < 0;
	//return m_Accel.GetHorizontalAxis() < 0;
}

bool AccelAdapter::Right()
{
	//************************************************
	// To use composition, comment out the line below*
	// and uncomment the line below that             *
	//************************************************
	return GetHorizontalAxis() > 0;
	//return m_Accel.GetHorizontalAxis() > 0;
}

//***********************************************
// Comment out this method if using composition *
//************************************************
std::pair<int, int> AccelAdapter::Initialize()
{
	return { -1,1 };
}
