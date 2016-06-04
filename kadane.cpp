#include<iostream>
using namespace std;
 
long long int maxSubArraySum(long long int a[], int size)
{
   long long int max_so_far = a[0];
   long long int curr_max = a[0];
 
   for (int i = 1; i < size; i++)
   {
        curr_max = max(a[i], curr_max+a[i]);
        max_so_far = max(max_so_far, curr_max);
   }
   return max_so_far;
}
long long int max(long long int a ,long long int b)
{
	if(a>b)
	return a;
	return b;
}

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int num;
		cin>>num;
   		long long int a[num],temp[num]; 
   		for (int i=0;i<num;i++)
		cin>>a[i];
   		long long int max_sum = maxSubArraySum(a,num);
   		for(int i=0;i<num;i++)
   		{
   			if(a[i]<0)
   			{
   				for(int j=0;j<i;j++)
   					temp[j]=a[j];
   				for(int j=i+1;j<num;j++)
   					temp[j-1]=a[j];
   				max_sum = max(max_sum,maxSubArraySum(temp,num-1));
			}
		}
		cout<<max_sum<<endl;
	}
   return 0;
}
