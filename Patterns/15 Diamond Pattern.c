#include<stdio.h>
int main()
{
	int n;
	printf("Enter rows: ");
	scanf("%d", &n);
	for(int i=0;i<n;i++)
	{
		for(int j=i; j<n-1; j++)
		printf(" ");
		for(int j=0; j<=2*i; j++)
		printf("*");
		printf("\n");
	}
	for(int i=n-1;i>=0;i--)
	{
		for(int j=i; j<n-1; j++)
		printf(" ");
		for(int j=0; j<=2*i; j++)
		printf("*");
		printf("\n");
	}
}
/* output
  *
 ***
*****
*****
 ***
  *
*/
