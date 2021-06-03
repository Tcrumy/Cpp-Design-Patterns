#pragma once
#include <thread>
#include <chrono>
#include <mutex>

// The counter class is a singleton class. It's purpose is 
// to set and increment count. It's constructor is only
// accessible through the static instance() method.
class Counter
{
private:
	
	int _count;

	//***************************************************************
	// The counter constructor is private to prevent access unless  *
	// through the instance method. The constructor will set _count *
	// to 0.                                                        *
	//***************************************************************
	Counter();

	std::mutex _lock;

public:
	
	//***************************************************************
	// This instace method is the only way to access the constructor*
	// for this class. It accepts no arguments. It returns a Counter*
	// reference.												    *
	//***************************************************************
	static Counter& instance();

	//***************************************************************
	// The incCount method accepts no arguments. This method will   *
	// increment the _count variable by 1, and will make the thread *
	// sleep for 20 milliseconds each time it is called. This method*
	// will return nothing                                          *
	//***************************************************************
	void incCount();

	//***************************************************************
	// The setCount method is a mutator for the _count variable. It *
	// accepts an integer argument. This argument will be assined to*
	// the _count variable. This method returns nothing             *
	//***************************************************************
	void setCount(int);

	//***************************************************************
	// The get method is an accessor for the _count variable. This  *
	// method accepts no arguments. This method will return an      *
	// integer.                                                     *
	//***************************************************************
	int get() const;
};

