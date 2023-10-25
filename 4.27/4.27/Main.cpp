#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a, b, c;


	for (a = 1; a <= 500; a++)
	{
		for (b = a+1; b <= 500; b++)
		{
			for (c=b+1;c<=500;c++)
			{
				if ((a*a) + (b*b) == c * c)
					if(a<b<c)
						printf("%d %d %d\n",a,b,c); 
			}
		}
	}

	return 0;
}