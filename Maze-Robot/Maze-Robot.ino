/*
 Name:		Maze_Robot.ino
 Created:	4/14/2022 1:11:46 PM
 Author:	brendan
*/

// the setup function runs once when you press reset or power the board
#include "motor_controller.h"
#include "color_sensor.h"
#include "obstacle_sensor.h"
#include "status_lights.h"

const int ECHO_PIN = 2;
const int TRIG_PIN = 3;
const int R1 = 4;
const int R2 = 5;
const int L1 = 6;
const int L2 = 7;

ObstacleSensor obstacle_sensor = ObstacleSensor(ECHO_PIN, TRIG_PIN);
MotorController motor_controller = MotorController(R1, R2, L1, L2);

void setup() {
}

// the loop function runs over and over again until power down or reset
void loop(){
	//bool object_detected = obstacle_sensor.check_for_obstacle(7);
	int object_detected = obstacle_sensor.check_for_obstacle(7);
	Serial.println(String(object_detected));

	motor_controller.move_forward();
	delay(5000);
	motor_controller.stop();
	delay(2000);
}
