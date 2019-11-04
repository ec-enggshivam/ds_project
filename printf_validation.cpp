#include<stdio.h>


int main()
{
	int a = 10;
	float b = 20;
	char c = 'A';
	
	printf("Normal Case:\na: %d, b: %f, c: %c\n\n",a,b,c);

	//printf("c printed with string format(percent-s):\na: %d, b: %f, c: %s\n\n",a,b,c); //crashes program

	printf("b is float but printed as int:\na: %d, b: %d, c: %c\n\n",a,b,c);

	printf("c is skipped, not passed:\na: %d, b: %f, c: %c\n\n",a,b); // c is skipped, not passed

	printf("c is skipped, not passed and printing with percent-s(string format):\n \
 a: %d, b: %f, c: %s\n\n",a,b); // c is skipped, not passed
 
	printf("a is int but priting as float:\na: %f, b: %f, c: %c\n\n",
							 		 		 				 a,b,c); //a is int but priting as float
	printf("c is char but printing as float:\na: %d, b: %f, c: %f\n\n",
							 									 a,b,c); //c is char but priting as float
	printf("b is float but printing as char:\na: %d, b: %c, c: %c\n\n",
							 			 		 a,b,c); //b is float but printing as char
	
	printf("Integer division typecast to float but printed with precent-d(int format):\n \
	result: %d\n\n",(float)a/10);

	printf("Integer division typecast to float but printed with precent-f(float format):\n \
	result: %f\n\n",(float)a/10);

	printf("Integer division typecast to float but printed with percent-c(char format):\nresult: %c\n\n",(float)a/10);
	printf("Integer division but printed with percent-c(char format):\nresult: %c\n\n",a/10);
	
	return 0;
}
