#include "Input.h"
#include "Keyboard.h"
#include <iostream>
#include <thread>
#include"AccelAdapter.h"
#include <cstdlib>
#include <ctime>

void Game(Input* pInput)
{
	using namespace std;

	int count{ 5 };

	while (count != 0)
	{
		std::cout << "========================\n";
		if (pInput->Up())
		{
			std::cout << "Pitch Up\n";
		}
		else if (pInput->Down())
		{
			std::cout << "Pitch Down\n";
		}
		else
		{
			std::cout << "Plane is level\n";
		}

		if (pInput->Left())
		{
			std::cout << "Plane is turning left\n";
		}
		else if (pInput->Right())
		{
			std::cout << "Plane is turning right\n";
		}
		else
		{
			std::cout << "Plane is flying straight\n";
		}

		std::cout << "\n";
		std::this_thread::sleep_for(1s);
		--count;
	
	}
}

int main()
{
	srand(time(0));

	Keyboard k;

	AccelAdapter a;

	std::cout << "Using Keyboard input\n";
	Game(&k);

	std::cout << "\nUsing Accelerometer input\n";
	Game(&a);


	return 0;
}