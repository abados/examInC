
#include <stdio.h>
#include <stdlib.h> 
#include <string.h>
#pragma warning(disable:4996)


// {} what between the {} is the mistake.

int main_1() {
	 
	int a = 4;//{ b = 7}; //b is undifined in this way because ; is cutting the line - so need a spicific type aging or to change ; to , .
	int b = 7;
	float c;

	//{scanf("%f", c); } // original line: & is missing!
	scanf("%f", &c);

	//{if (5 = c)} // original line: the order of the if is wrong and we need another equal sign.

	if (c == 5)
		//print("%f", c);//the funcation is printf and not print
		printf("%f", c);

}



