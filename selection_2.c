#include <stdio.h>
void selection_2(int arr[],int len)
{
	int i,j,temp;
	for(i=0;i<len;i++)
	{
		for(j=i+1;j<len;j++)
		{
			if(arr[j] < arr[i])
			{
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
}
