#include <stdio.h>
int line = 0;

int main(void){
	main:
	line++;
	printf("this is the line + %d\n", line);
	goto main;
}
