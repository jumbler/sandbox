
#include <stdio.h>

// 
void fun1(int *c)
{
	*c++;	
}

main()
{
	int val=0;
	fun1(&val);
	printf("Hello world\n");
}

