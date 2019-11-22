#include<stdio.h>
void bubble_sort(int arr[],int n);

int main()
{
	int i;
	int arr[]={6,5,3,4,2};
	bubble_sort(arr,5);
	for(i=0;i<5;i++)
	{
		printf("%d",arr[i]);
	}

}
void bubble_sort(int arr[],int n){
	int i,j,temp;
	for(i=0;i<4;i++)
	{
		for(j=0;j<5-i-1;j++)
		{
			if(arr[j]>arr[j+1])
			{
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
}

