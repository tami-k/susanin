/*
 * MyClass.h
 *
 * Created: 7/5/2017 7:37:38 PM
 * Author: amazing
 */ 

#ifndef _MYCLASS_h
#define _MYCLASS_h

#if defined(ARDUINO) && ARDUINO >= 100
	#include "Arduino.h"
#else
	#include "WProgram.h"
#endif

class Main
{
 private:


 public:
	void setup();
	void loop();
};

extern Main myClass;

#endif

