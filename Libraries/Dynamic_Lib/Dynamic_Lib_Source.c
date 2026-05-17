#include "Dynamic_Header.h"
void rev(int num)
{
	int rem = 0, sum = 0;
	while (num != 0)
	{
		rem = num % 10;
		sum = sum * 10 + rem;
		num = num / 10;
	}
	printf("Reverse : %d", sum);
}