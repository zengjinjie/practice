#include<stdio.h>
int a[101];

void quicksort(int left,int right)
{
	int i,j,key,t;
	i=left;
	j=right;
	if(left>right)
		return;
	key=a[i];
	while(i!=j)
	{
		while(a[j]>=key&&i<j)
			j--;
		while(a[i]<=key&&i<j)
			i++;
		if(i<j)
		{
			t=a[i];
			a[i]=a[j];
			a[j]=t;
		}
	}
	a[left]=a[i];
	a[i]=key;
	quicksort(left,i-1);
	quicksort(i+1,right);
}

int main()
{
	int n;
	char flag;
	int i;
	printf("Tell us how many numbers you want to sort\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
		scanf("%d",&a[i]);
	printf("We will do quicksort immudiately\n");
	quicksort(1,n);
	for(i=1;i<=n;i++)
		printf("%d\t",a[i]);
	printf("\n");
	return 0;
}