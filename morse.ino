#include "morseFlash.h" // Includes morseflash

void setup()
{
	pinMode(LED_BUILTIN, OUTPUT); // Sets LED_BUILTIN as OUTPUT
}

String message = "Hello, world!"; // A string to 

void loop()
{
	delay(2500); // Startup delay

	morseFlash::blinkStr(message, 250); // morse-ify a String called message.

	delay(10000); // End delay
}

// For more reference, view morseFlash.cpp
