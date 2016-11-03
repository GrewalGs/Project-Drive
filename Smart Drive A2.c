#pragma config(I2C_Usage, I2C1, i2cSensors)
#pragma config(Sensor, I2C_1,  X2Encoder,      sensorQuadEncoderOnI2CPort,    , AutoAssign)
#pragma config(Sensor, I2C_2,  Y1Encoder,      sensorQuadEncoderOnI2CPort,    , AutoAssign)
#pragma config(Sensor, I2C_3,  X1Encoder,      sensorQuadEncoderOnI2CPort,    , AutoAssign)
#pragma config(Motor,  port2,           X1,            tmotorVex393, openLoop, reversed)
#pragma config(Motor,  port3,           X2,            tmotorVex393, openLoop, reversed)
#pragma config(Motor,  port4,           Y1,            tmotorVex393, openLoop, reversed)
#pragma config(Motor,  port5,           Y2,            tmotorVex393, openLoop)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

task main()
{
	int X = 1630;
	int Y = 630;
	int Speed = 127;
//	int encoder = 0

	SensorValue[X1Encoder] = 0;
	SensorValue[X2Encoder] = 0;
	SensorValue[Y1Encoder] = 0;



	while(true){

		//Move to desired X coordinate
		if (SensorValue[X1Encoder] < X){
		motor[X1] = Speed;
		motor[X2] = Speed;
		}

		//Move to desired X coordinate
		if (SensorValue[X1Encoder] > X){
		motor[X1] = 0;
		motor[X2] = 0;
		}

		//Move to desired Y coordinate
		if (SensorValue[Y1Encoder] > -Y){
		motor[Y1] = Speed;
		motor[Y2] = Speed;
		}

		//Move to desired Y coordinate
		if (SensorValue[Y1Encoder] < -Y){
		motor[Y1] = 0;
		motor[Y2] = 0;
		}


	}
}