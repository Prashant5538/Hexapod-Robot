//This is the complete code for the development of Hexapod robot 

#include <Servo.h>
							// a maximum of three servo objects can be created
Servo myservo; 				// create servo object to control a servo
Servo myservo1;
Servo myservo2;

int pos = 0; 				// variable to store the left servo position
int pos1 = 0; 				// variable to store the right servo position
int middle = 0; 			// variable to store the middle servo position


void setup()
{
	myservo.attach(9); 			// attaches the servo on pin 9 to the servo object
	myservo1.attach(11); 		// attaches the servo on pin 11 to the servo object
	myservo2.attach(13); 		// attaches the servo on pin 13 to the servo object
}


void loop()
{
	for(pos = 75; pos < 105; pos += 1) 				// goes from 75 degrees to 105 degrees
	{ 												// in steps of 1 degree
		myservo.write(pos); 						// tell servo to go to position in variable 'pos'
		delay(15); 									// waits 15ms for the servo to reach the position
	}
	
	for(pos = 105; pos>=76; pos-=1) 				// goes from 105 degrees to 76 degrees
	{
		myservo.write(pos); 						// tell servo to go to position in variable 'pos'
		delay(15); 									// waits 15ms for the servo to reach the position
	}
	
	for(middle = 100; middle < 130; middle += 1) 	// goes from 100 degrees to 130 degrees
	{ 												// in steps of 1 degree
		myservo2.write(middle); 					// tell servo to go to position in variable 'pos'
		delay(15); 									// waits 15ms for the servo to reach the position
	}
	
	for(pos1 = 75; pos1 < 105; pos1 += 1) 			// goes from 75 degrees to 105 degrees
	{ 												// in steps of 1 degree
		myservo1.write(pos1); 						// tell servo to go to position in variable 'pos'
		delay(15); 									// waits 15ms for the servo to reach the position
	}
	
	for(pos1 = 105; pos1>=76; pos1-=1) 				// goes from 105 degrees to 76 degrees
	{
		myservo1.write(pos1); 						// tell servo to go to position in variable 'pos'
		delay(15); 									// waits 15ms for the servo to reach the position
	}
	
	for(middle = 130; middle>=101; middle-=1) 		// goes from 130 degrees to 101 degrees
	{
		myservo2.write(middle); 					// tell servo to go to position in variable 'pos'
		delay(15); 									// waits 15ms for the servo to reach the position
	}
	
}