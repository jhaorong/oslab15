#include <stdio.h>
#include "lib_1.h"
int main()
{
	int arr[5] = {15,22,41,8,35};
	int i;
	int len = sizeof(arr)/sizeof(arr[0]);
	printf("before sort is:");
	for(i=0;i<5;i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\n");
	selection(arr,len);
	printf("after sort is:");
	for(i=0;i<5;i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\n");	
}
