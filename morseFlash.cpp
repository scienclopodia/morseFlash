/*

morseFlash - An arduino library for flashing morse code (ITU ver.)

*/

#pragma once

#include "morseFlash.h"

namespace morseFlash
{
	void blinkLED(int durationStart, int durationEnd)
	{
		digitalWrite(LED_BUILTIN, HIGH);

		delay(durationStart);

		digitalWrite(LED_BUILTIN, LOW);

		delay(durationEnd);
	}

	void dot()
	{
		blinkLED(100, 250);
	}

	void bar()
	{
		blinkLED(1000, 250);
	}

	void space()
	{
		delay(500);
	}

	void blinkChar(char val)
	{
        char temp;
        
        if (val != '!' || val != '.' || val != ',' || val != '?')
        {
            temp = val
        }
        else
        {
		    char temp = tolower(val);
        }

		switch (temp)
		{
			case 'a':
				dot();
				bar();
				break;

			case 'b':
				bar();
				dot();
				dot();
				dot();
				break;

			case 'c':
				bar();
				dot();
				bar();
				dot();
				break;

			case 'd':
				bar();
				dot();
				dot();
				break;

			case 'e':
				dot();
				break;

			case 'f':
				dot();
				dot();
				bar();
				dot();
				break;

			case 'g':
				bar();
				bar();
				dot();
				break;

			case 'h':
				dot();
				dot();
				dot();
				dot();
				break;

			case 'i':
				dot();
				dot();
				break;

			case 'j':
				dot();
				bar();
				bar();
				bar();
				break;

			case 'k':
				bar();
				dot();
				bar();
				break;
			
			case 'l':
				dot();
				bar();
				dot();
				dot();
				break;

			case 'm':
				bar();
				bar();
				break;

			case 'n':
				bar();
				dot();
				break;

			case 'o':
				bar();
				bar();
				bar();
				break;

			case 'p':
				dot();
				bar();
				bar();
				dot();
				break;
			
			case 'q':
				bar();
				bar();
				dot();
				bar();
				break;
			
			case 'r':
				dot();
				bar();
				dot();
				break;
			
			case 's':
				dot();
				dot();
				dot();
				break;
			
			case 't':
				bar();
				break;

			case 'u':
				dot();
				dot();
				bar();
				break;
			
			case 'v':
				dot();
				dot();
				dot();
				bar();
				break;
			
			case 'w':
				dot();
				bar();
				bar();
				break;
			
			case 'x':
				bar();
				dot();
				dot();
				bar();
				break;
			
			case 'y':
				bar();
				dot();
				bar();
				bar();
				break;
			
			case 'z':
				bar();
				bar();
				dot();
				dot();
				break;

            case '.':
                dot();
				bar();
				dot();
				bar();
				dot();
				bar();
				break;

            case ',':
				bar();
				bar();
				dot();
				dot();
                bar();
				bar();
				break;

            case '?':
                dot();
				dot();
				bar();
				bar();
				dot();
				dot();
				break;

            case '!':
				bar();
				dot();
                bar();
				dot();
                bar();
				bar();
				break;
			case ' ':
				space();
			default:
				break;
		}
	}

	void blinkStr(String messageF, int duration)
	{
		for (int i = 0; i < messageF.length(); i++)
		{
			blinkChar(messageF.charAt(i));
			delay(duration);
		}
	}

}
