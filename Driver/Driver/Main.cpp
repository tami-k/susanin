/*
 * MyClass.cpp
 *
 * Created: 7/5/2017 7:37:38 PM
 * Author: amazing
 */ 

#include "Main.h"

const int LED = 13;

void Main::setup()
{
pinMode(LED, OUTPUT);     
}

void Main::loop()
{
digitalWrite(LED, HIGH);
delay(1000);
digitalWrite(LED, LOW);
delay(1000);
}

Main myClass;

