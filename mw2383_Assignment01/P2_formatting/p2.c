#include <stdio.h>

int main(void){
    
	int inputSeconds = 55536;
	int displaySeconds = inputSeconds % 60;
	int totalMinutes = (inputSeconds - displaySeconds)/60;
	int displayMinutes = totalMinutes % 60;
	int displayHours = (totalMinutes - displayMinutes)/60;
	
	printf("%d:%d:%d", displayHours, displayMinutes, displaySeconds);

	return 0;
	
}


