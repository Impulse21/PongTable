/*
 Name:		LEDDriver.ino
 Created:	7/11/2016 6:18:13 PM
 Author:	dipao
*/

/* Total Pins: 13								*/

/* Columns (1-32)								*/
/* Shift Register 1: holds row 1-8 using Port B	*/
/* Shift Register 2: Holders row 9-12			*/
const int cDataPin	= 8;
const int cLatchPin = 9;
const int cClockPin = 10;

/* Rows (1-12)									*/
/*   - Rows 1-8: Shift Registers				*/
/*	 - Rows 9-12: Shift Register Q0, Q1, Q2		*/

const int rDataPin	= 13;
const int rLatchPin = 12;
const int rClockPin	= 11;


// the setup function runs once when you press reset or power the board
void setup() {
	// Set output pins
	pinMode(cDataPin, OUTPUT);
	pinMode(cLatchpin, OUTPUT);
	pinMode(cClockPin, OUTPUT);

	pinMode(rDataPin, OUTPUT);
	pinMode(rLatchPin, OUTPUT);
	pinMode(rClockPin, OUTPUT);
}

// the loop function runs over and over again until power down or reset
void loop() {
  
}

void displayPattern(int loops)
{

}