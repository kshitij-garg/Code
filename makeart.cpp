#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int num;
		cin>>num;
		int a[num],b[10];
		for(int i=0;i<10;i++)
			b[i]=0;
		for (int i=0;i<num;i++)
		{
			cin>>a[i];
			b[a[i]]=1;
		}
		//long int sum =0;
		int flag = 0,count =0;
		for(int i=0;i<10;i++)
			if(b[i] !=0)
				count++;
		//cout<<"Count="<<count<<endl;
		count--;
		if(num!=3)
		{
			if((num-3)>=count)
				cout<<"Yes"<<endl;
			else
				cout<<"No"<<endl;
		}
		if(num==3)
		{
			if((a[0] == a[1]) && (a[0]==a[2]))
				cout<<"Yes"<<endl;
			else
				cout<<"No"<<endl;
		}
	}
	return 0;
}
