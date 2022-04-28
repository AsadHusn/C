#include<stdio.h>
typedef struct Person{
	int roll;
	char name[20];
}P;

int main()
{
	P s;
	s.roll = 12;
	sprintf(s.name,"Asad");
	
	printf("roll = %d\n",s.roll);
	printf("name = %s\n",s.name);
}

