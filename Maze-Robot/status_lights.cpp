// 
// 
// 

#include "status_lights.h"
void Status_Lights::turn_off_lights() {
	digitalWrite(GREEN_PIN, LOW);
	digitalWrite(RED_PIN, LOW);
	digitalWrite(YELLOW_PIN, LOW);
}
