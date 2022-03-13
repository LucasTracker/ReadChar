#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/*
 * This is a simple program that converts a decimal value
 * in a ASCII value if possible
 * 
 * Developed by: Lucas Souza
 *
*/


int main(void){
	int c;

	// assign the value in C
	scanf("%d", &c);
	
	// print the value of c in hexadecimal format
	printf("%#04x \n", c);

	// print the value of c of according the ASCII table
	printf("%c\n", toascii(c));

	return 0;
}
