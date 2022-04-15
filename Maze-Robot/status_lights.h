// status_lights.h

#ifndef _STATUS_LIGHTS_h
#define _STATUS_LIGHTS_h

#if defined(ARDUINO) && ARDUINO >= 100
	#include "arduino.h"
#else
	#include "WProgram.h"
#endif


#endif

class Status_Lights {
	int GREEN_PIN;
	int RED_PIN;
	int YELLOW_PIN;
	Status_Lights(int green_pin, int red_pin, int yellow_pin) {
		GREEN_PIN = green_pin;
		RED_PIN = red_pin;
		YELLOW_PIN = yellow_pin;

		pinMode(GREEN_PIN, INPUT);
		pinMode(RED_PIN, INPUT);
		pinMode(YELLOW_PIN, INPUT);
	}
	void turn_off_lights();
};