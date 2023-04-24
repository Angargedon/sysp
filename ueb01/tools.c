#include <stdio.h>

void enter(int howManyTimes){
	for(int i=0;i<howManyTimes;i++){
		printf("\n");
	}
}

void printLine(char style,int lenght){
	for(int i=0;i<lenght;i++){
		printf("%c", style);
	}
}
