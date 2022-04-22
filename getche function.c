//getche display the value but getch dont
#include<stdio.h>
#include<conio.h>
int main()
{
	char c;
	printf("Enter character : ");
	c = getch();
	
	printf("\nEnter character : ");
	c = getche();
	
//	print
	printf("\n---output---\n");
	printf("You entered = %c\n",c);
}
