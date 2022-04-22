#include<stdio.h>

int main()
{
	int i,j;
	i = 0;
	while(i<6)
	{
		j=0;
		while(j<=i)
		{
			printf("%d ",j*j);
			j++;
		}
		printf("\n");
		i++;
	}
}
