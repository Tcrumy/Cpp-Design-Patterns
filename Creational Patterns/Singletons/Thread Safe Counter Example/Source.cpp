#include <iostream>
#include "Counter.h"
#include "IncCounter.h"
#include <thread>
#include "CounterTest.h"

//*********************************************************
// The inc_counter function will accept no arguments. It  *
// will call the Counter classes .incCount() method 50    *
// times. The function will return nothing.               *
//*********************************************************
void inc_counter();

int main()
{
	// Perform unit testing
	CounterTest tester;

	if (!tester.testCase1())
	{
		exit(EXIT_FAILURE);
	}

	if (!tester.testCase2())
	{
		exit(EXIT_FAILURE);
	}

	if (!tester.testCase3())
	{
		exit(EXIT_FAILURE);
	}

	if (!tester.testCase4())
	{
		exit(EXIT_FAILURE);
	}

	// Reset _count to 0 after unit test
	Counter::instance().setCount(0);

	// The goal of each thread is to call increment on the
	// the Counter class' _count data member 50 times
	std::thread thread1(inc_counter); 
	std::thread thread2(&IncCounter::execute, 50);
	
	thread1.join();
	thread2.join();
	
	std::cout <<"Count is now: " << Counter::instance().get() << std::endl;	

	return 0;
}

//*************************
// inc_counter() function *
//*************************
void inc_counter()
{
	// Call the Counter class incCount() method 50 times
	for (int count = 0; count < 50; count++)
	{
		Counter::instance().incCount();
	}
}

