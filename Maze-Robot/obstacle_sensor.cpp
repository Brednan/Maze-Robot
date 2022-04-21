// 
// 
// 

#include "obstacle_sensor.h"

bool ObstacleSensor::check_for_obstacle(int min_distance) {
	long duration;

	digitalWrite(TRIG, LOW);
	delayMicroseconds(2);

	digitalWrite(TRIG, HIGH);
	delayMicroseconds(10);

	digitalWrite(TRIG, LOW);

	duration = pulseIn(ECHO, HIGH);
	long inches = get_inches(duration);

	Serial.println(String(inches));
	delay(100);

	if (min_distance > inches) {
		return true;
	}
	else {
		return false;
	}
}

long ObstacleSensor::get_inches(long duration) {
	return duration / 74 / 2;
}