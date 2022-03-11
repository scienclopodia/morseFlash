/*

morseFlash - An arduino library for flashing morse code (ITU ver.)

*/

namespace morseFlash
{
	void blinkLED(int durationStart, int durationEnd);
	void dot();
	void bar();
	void space();
	void blinkChar(char val);
	void blinkStr(String messageF, int duration);
}