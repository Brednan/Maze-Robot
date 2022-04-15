// 
// 
// 

#include "obstacle_sensor.h"

void ObstacleSensor::check_for_obstacle() {
	long duration;

	digitalWrite(TRIG, LOW);
	delayMicroseconds(2);

	digitalWrite(TRIG, HIGH);
	delayMicroseconds(10);

	digitalWrite(TRIG, LOW);

	duration = pulseIn(ECHO, HIGH);
	long inches = get_inches(duration);

	Serial.println("Distance (Inches): " + String(inches));
	delay(100);
}

long ObstacleSensor::get_inches(long duration) {
	return duration / 74 / 2;
}