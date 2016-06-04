#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int count =0;
		int num;
		cin>>num;
		int a[num+1],b[num+1];
		a[0]=0;
		b[0]=0;
		for(int i=1;i<=num;i++)
			cin>>a[i];
		for(int i=1;i<=num;i++)
			cin>>b[i];
		for(int i=0;i<num;i++)
			if(a[i+1]-a[i] >= b[i+1])
				count++;
		cout<<count<<endl;			
	}
	return 0;
}
