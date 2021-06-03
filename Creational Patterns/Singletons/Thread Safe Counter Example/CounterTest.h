#pragma once
#include "Counter.h"
#include <iostream>
#include "IncCounter.h"

//***********************************************************
// The CounterTest class is a class for testing the Counter *
// class. It will have three test cases that will serve as  *
// the unit test. Each test method will set _count to 0     *
// before starting the test so the state of the class is    *
// known. Test will be done in Arrange/Act/Assert pattern   *
//***********************************************************
class CounterTest
{
public:

	//*****************************************************
	// The testCase1() method will accept no arguments. A *
	// Counter instance will be created, incremented once *
	// and the counter.get() method will be checked to    *
	// ensure that Counter _count is currently 1. If this *
	// is the case, true will be returned, otherwise a    *
	// message will be displayed stating test case 1      *
	// failed, and then false will be returned.           *
	//*****************************************************
	bool testCase1();

	//*****************************************************
	// The testCase2() method will accept no arguments.   *
	// Three Counter instances will be created, the first *
	// two will be incremented and the last one will call *
	// its .get() method and checked that it is 3. If this*
	// is the case, true will be returned, otherwise a    *
	// message will be displayed stating test case 2      *
	// failed, and then false will be returned.           *
	//*****************************************************
	bool testCase2();

	//*********************************************************
	// The testCase3() method will accept no arguments.       *
	// One Counter instance will be created and incremented   *
	// 40 times. Counter::Instance() will be incremented      *
	// once. instance1 will be checked to ensure that .get()  *
	// returns 41. If this is the case, true will be          *
	// returned, otherwise a message will be displayed        *
	// that test case 3 has failed, and false will be returned*
	//*********************************************************
	bool testCase3();

	//*********************************************************
	// The testCase4() method will accept no arguments. Two   *
	// instances of Counter will be created. instance1 and    *
	// instance2 will be incremented, IncCounter::execute(2)  *
	// will be called, and instance2 will be incremented once *
	// again. instance1 and instance2 _count data member will *
	// be checked for equality. If this is the case, true will*
	// be returned, otherwise a message will be displayed that*
	// test case 4 has failed and false will be returned      *
 	//*********************************************************
	bool testCase4();
};

