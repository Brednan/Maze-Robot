// 
// 
// 

#include "status_lights.h"
void Status_Lights::turn_off_lights() {
	digitalWrite(GREEN_PIN, LOW);
	digitalWrite(RED_PIN, LOW);
	digitalWrite(YELLOW_PIN, LOW);
}                                                     

void Status_Lights::moving_status() {
	digitalWrite(GREEN_PIN, HIGH);
	digitalWrite(RED_PIN, LOW);
	digitalWrite(YELLOW_PIN, LOW);
}

void Status_Lights::object_detected() {
	digitalWrite(RED_PIN, HIGH);
	digitalWrite(GREEN_PIN, LOW);
	digitalWrite(YELLOW_PIN, LOW);
}

void Status_Lights::scanning_status() {
	digitalWrite(YELLOW_PIN, HIGH);
	digitalWrite(GREEN_PIN, LOW);
	digitalWrite(RED_PIN, LOW);
}
