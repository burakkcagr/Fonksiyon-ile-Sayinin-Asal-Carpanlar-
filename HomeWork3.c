#include <stdio.h>

void isprime(int val);

int main(void)
{

	int val;

	printf("Bir sayi giriniz:");
	scanf("%d", &val);

	isprime(val);

	return 0;
}

void isprime(int val)
{
	
	for (int i = 2; i <= val; ++i)
	{
		if (val % i == 0)
		{
			val /= i;
			printf("%d ", i);
			--i;
		}
		
	}
}
