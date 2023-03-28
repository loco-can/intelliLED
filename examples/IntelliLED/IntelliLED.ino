/*
 * IntelliLED example
 *
 * The IntelliLED library allows the use of LEDs
 * with on/off states but also  blinking and flashing.
 * The blink and flash rates can be set up in milliseconds.
 *
 */


#include <intelliled.h>

// init led1
INTELLILED led1;
INTELLILED led2;

// init led2 and asign port
INTELLILED led3(9);

// init dual led at ports 10 and 11
// the led has common gnd
INTELLILED dual_led(10, 11);

void setup() {

	// asign port for led 1
	led1.begin(7);
	led1.begin(8);

	// set led1 status to on
	led1.off();

	// set led2 status to blink at 1000ms
	led2.blink(1000);

	// set led1 status to flash at 500ms
	led3.flash(500);

	// set led4 red > orange > green
	led4.color(INTELLILED_RED);
	led4.on();
	delay(500);

	led4.color(INTELLILED_ORANGE);
	delay(500);

	led4.color(INTELLILED_GREEN);
	delay(500);

	// blink led 4 red/green
	led4.color(INTELLILED_RED);
	led4.offColot(INTELLILED_GREEN);
	led4.blink(1000);
}


void loop() {

	// update leds
	led1.update();
	led2.update();
	led3.update();
	led4.update();
}