#include<stdio.h>
#include<stdlib.h>
int main()
{
	int len;
	printf("Enter the length of the array:  ");
	scanf("%d", &len);                                  
	
	int array[len];
	for (int i=0;i<len;i++)
	{
		printf("Array[%d]=",i);
		scanf("%d", &array[i]);                                                  
	}
	printf("\n");
	printf("The Numbers in the array are: \n");
	for (int i=0;i<len;i++)
	{
	printf("Array[%d]=%d\n",i,array[i]);
	}
	return 0;
}
		
		
