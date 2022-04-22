#include<stdio.h>
#include "bubble.h"
#include "selection.h"
#include "insertion.h"
#include "quick.h"
#include "merge.h"
#include "heap.h"

int main()
{
    short a[] = {5,4,3,2,1,10,9,8,7,6};
    short size = sizeof(a)/sizeof(short);
    
    
    heap(a,size);
    
    
    for(short i=0;i<size;i++)
    {
    	printf("%i\t",a[i]);
	}
}
