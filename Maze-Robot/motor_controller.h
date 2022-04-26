// motor_controller.h

#ifndef _MOTOR_CONTROLLER_h
#define _MOTOR_CONTROLLER_h

#if defined(ARDUINO) && ARDUINO >= 100
	#include "arduino.h"
#else
	#include "WProgram.h"
#endif


#endif

class MotorController
{
private:
	int R1;
	int R2;
	int L1;
	int L2;

public:
	MotorController(int R_1, int R_2, int L_1, int L_2) {
		pinMode(13, OUTPUT);
		digitalWrite(13, HIGH);
		pinMode(12, OUTPUT);
		digitalWrite(12, HIGH);

		R1 = R_1;
		R2 = R_2;
		L1 = L_1;
		L2 = L_2;

		pinMode(R1, OUTPUT);
		pinMode(R2, OUTPUT);
		pinMode(L1, OUTPUT);
		pinMode(L2, OUTPUT);
	}

	void move_forward();
	void stop();
};