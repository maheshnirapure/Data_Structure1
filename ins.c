#include<stdio.h>
int main()
{
	int A[]={24,5,25,6};
	int i;
	bubble_sort(A,4);
	for(i=0;i<=3;i++)
	{
		printf("%d ",A[ i ]);
	}
}
void bubble_sort(int A[],int n)
{
	int r,i,temp;
	for(r=1;r<=n-1;r++){
		for(i=0; i<=n-1-r; i++)
		{
			if(A[i]>A[i+1])
			{
				temp = A[i];
				A[i]=A[i+1];
				A[i+1]=temp;
			}
		}
	}
}
