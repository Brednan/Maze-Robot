/*
 Name:		Maze_Robot.ino
 Created:	4/14/2022 1:11:46 PM
 Author:	brendan
*/

// the setup function runs once when you press reset or power the board
#include "obstacle_sensor.h"
#include "status_lights.h"

int echo_pin = 2,
int trig_pin = 3;
ObstacleSensor obstacle_sensor = ObstacleSensor(echo_pin, trig_pin);
void setup() {
	
}

// the loop function runs over and over again until power down or reset
void loop(){
	bool object_detected = obstacle_sensor.check_for_obstacle(5);
	Serial.println(String(object_detected));
}
