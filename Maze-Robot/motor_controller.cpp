// 
// 
// 

#include "motor_controller.h"

void MotorController::stop() {
	digitalWrite(R1, LOW);
	digitalWrite(R2, LOW);
	digitalWrite(L1, LOW);
	digitalWrite(L2, LOW);
}

void MotorController::move_forward() {
	digitalWrite(R1, HIGH);
	digitalWrite(R2, LOW);
	digitalWrite(L1, HIGH);
	digitalWrite(L2, LOW);
}