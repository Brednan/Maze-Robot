/*
 Name:		Maze_Robot.ino
 Created:	4/14/2022 1:11:46 PM
 Author:	brendan
*/

// the setup function runs once when you press reset or power the board
#include "status_lights.h"
void setup() {

}

// the loop function runs over and over again until power down or reset
void loop() {
	Status_Lights light_controls = Status_Lights(0, 1, 2);
}
