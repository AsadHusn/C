#include<stdio.h>
int main()
{	
	FILE *out = fopen("test.txt", "r");
	//	skip first character
	char c = fgetc(out);
	//	check pointer is at end of file
	if (feof(out))
	{
		printf("eof");
	}
}
