#include<stdio.h>
Bin_search(int L[],int N,int itme)
{
	int l=0,u=N-1,m;
	while(l<=u)
	{
		m=(l+u)/2;
		if(itme==L[m]){
			printf("search succeful at index %d",m);
			return;
		}
		else if(itme>L[m])
		{
			l=m+1;
		}
		else
		{
			u=m-1;
		}
		
	}
	printf("search unsucceful");
}
int main()
{
	int A[]={1,2,3,4,5,6};
	Bin_search(A,6,3);
}
