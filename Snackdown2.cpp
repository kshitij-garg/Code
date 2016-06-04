#include<iostream>
using namespace std;
long long int max(long long a ,long long b);
long long int maxArraySum(long long a[],int size);
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long int max_sum=0,size;
		int num;
		cin>>num;
		size =num-1;
		signed long long int a[num],temp[num];
		for(int i=0;i<num;i++)
			cin>>a[num];
		max_sum = maxArraySum(a,num);
		cout<<"Initial max sum ="<<max_sum<<endl;
		for(int i=0;i<num;i++)
		{
			//new array creation by removing 1 element
			for(int j=0;j<i;j++)
			temp[j]=a[j];
			for(int j=i+1;j<size;j++)
			temp[j]=a[j];
			max_sum = max(max_sum , maxArraySum(temp,size));
		}
		cout<<max_sum<<endl;
	}
	return 0;
}
long long int max(long long a ,long long b)
{
	if(a>b)
	return a;
	return b;
}
long long int maxArraySum(long long a[],int size)
{
	long long max_so_far =0,max_ending_here =0;
	for (int i = 0; i < size; i++)
    {
        max_ending_here = max_ending_here + a[i];
        if (max_ending_here < 0)
            max_ending_here = 0;
        if (max_so_far < max_ending_here)
            max_so_far = max_ending_here;
    }
    return max_so_far;
}

