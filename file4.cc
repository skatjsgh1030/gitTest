#include <stdio.h>

void file4()
{
	int i = 1;
	int a = 0;

	printf("insert any integer : ");
	scanf("%d",&a);

	while(i<=a)
	{ 
		printf("^^\n");
		i++;
	}
}
