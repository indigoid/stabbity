#include "stringtab_test.h"

void setup() {
	Serial.begin(9600);
}

void loop() {
	for (int i = 1; i < 6; i++) {
		Serial.println(STABX_GET(i));
		delay( 1500 );
	}
}
