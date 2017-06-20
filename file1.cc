#include <stdio.h>

void file1()
{
	float num1, num2;
	float result;

	printf("insert two integer : ");
	scanf("%f %f", &num1, &num2);

	result = num1 + num2;
	printf("%f + %f = %f\n",num1,num2,result);
	
	result = num1 - num2;
	printf("%f - %f = %f\n",num1,num2,result);
	
	result = num1 * num2;
	printf("%f * %f = %f\n",num1,num2,result);
	
	result = num1 / num2;
	printf("%f / %f = %f\n",num1,num2,result);
			
	result = num1 % num2;
	printf("%f %% %f = %f\n",num1,num2,result);
}
