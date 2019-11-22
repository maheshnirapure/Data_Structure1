#include<stdio.h>
Sec(int L[],int N,int item){
	int k,flag=1;
	for(k=0;k<=N-1;k++){
		if(L[k]==item)
		{
			flag=0;
			printf("search succeful");
		}
		
	}
	if(flag==1){
			printf("search unsucceful");
		}
}
int main()
{
	int A[]={1,2,4,5,6,2};
	Sec(A,6,6);
}
