// obstacle_sensor.h

#ifndef _OBSTACLE_SENSOR_h
#define _OBSTACLE_SENSOR_h

#if defined(ARDUINO) && ARDUINO >= 100
	#include "arduino.h"
#else
	#include "WProgram.h"
#endif


#endif

class ObstacleSensor {
public:
	int TRIG;
	int ECHO;

	ObstacleSensor(int echo, int trig) {
		TRIG = trig;
		ECHO = echo;

		pinMode(TRIG, OUTPUT);
		pinMode(ECHO, INPUT);
	}

	bool check_for_obstacle(int min_distance);
	
	long get_inches(long duration);
};