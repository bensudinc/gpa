#include<stdio.h>
void analyzeArray(int array[]);
void PerformQuantumAnalytics(int array[]);
int main()
{
	int arr[7];
	int num,num2,i,j,sum,q;
	double ave;
	printf("Enter 7 quantum elements:\n");
	for(i=0;i<7;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Enter the index of the Quantium element to be modified:\n");
	scanf("%d",&num);
	if(num%2==0)
	{
		num2=arr[num]*2;
		arr[num]=num2;
	}
	else
	{
		num2=arr[num]/2;
		arr[num]=num2;
	}
	printf("Newly generated Quantium:\n ");
	for(i=0;i<7;i++)
	{
		printf("%d\n",arr[i]);
	}
	analyzeArray(arr);
	for(i=0;i<7;i++)
	{
		for(j=i+1;j<7;j++)
		{
			if(arr[i]>arr[j])
			{
				q=arr[i];
				arr[i]=arr[j];
				arr[j]=q;
			}
		}
	}
	printf("Sorted elements:\n");
	for(i=0;i<7;i++)
	{
		printf("%d",arr[i]);
	}
	PerformQuantumAnalytics(arr);
	
	
	
}
void analyzeArray (int array[])
{
	int sum=0,i;
	float ave;
	for(i=0;i<7;i++)
	{
		sum+=array[i];
	}
	ave=sum/7.0;
	printf("Average value of the modified elements:%.2f\n",ave);
}
void PerformQuantumAnalytics(int array[])
{
	int calc, c=2;
	while(c<array[0])
	{
	if(array[0]%c==0)
	{
		calc++;
	}
	c++;
}
	if(calc==0)
	{
		printf("The first element in the sorted array is a prime number");
	}
	else
	{
		printf("The first element in the sorted array is not a prime number");
	}
}

