#include<stdio.h>
#include<stdlib.h>
int sequential_search(int a[],int key,int n);
int main()
{
	int a[50],n,key,i;
	
	printf("No. Of Elements: \n");
	scanf("%d",&n);
	
	printf("\n Enter %d numbers:",n);
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	printf("Elements to be searched:");
	scanf("%d",&key);
	i=sequential_search(a,key,n);
	if(i==-1)
	printf("\n Not Found");
	else
	printf("\n Found at location=%d",i+1);
	
}
int sequential_search(int a[],int key,int n)
{
	int i;
	i=0;
	while(i<n && key!=a[i])
	i++;
	
	if(i<n)
	return(i);
	return(-1);
}
