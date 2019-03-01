#include "interactIO.h"

int main(void) {
	
	if(readSwitch1())
		writeLED1(true);
	else
		writeLED1(false);
	
	if(readSwitch2())
		writeLED2(true);
	else
		writeLED2(false);
	
	if(readSwitch3())
		writeLED3(true);
	else
		writeLED3(false);
	
	if(readSwitch4())
		writeLED4(true);
	else
		writeLED4(false);
}