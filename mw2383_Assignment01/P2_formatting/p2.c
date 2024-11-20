#include <stdio.h>

int main(void){
    
	// given value in seconds
	int inputSeconds = 55536;

	// calculates remaining seconds after converting seconds to minutes
	int displaySeconds = inputSeconds % 60;

	// calculates total minutes
	int totalMinutes = (inputSeconds - displaySeconds)/60;
	
	// calculates remaining minutes after converting minutes to hours
	int displayMinutes = totalMinutes % 60;

	// calculates hours
	int displayHours = (totalMinutes - displayMinutes)/60;
	
	// outputs the time in format HH:MM:SS
	printf("%d:%d:%d", displayHours, displayMinutes, displaySeconds);

	return 0;
	
}


