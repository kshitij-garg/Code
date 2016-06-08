#include<iostream>
using namespace std;
int main()
{
	char arr[26];
	for(int i=0;i<26;i++)
		arr[i] = 'a'+i;
	int t;
	cin>>t;
	while(t--)
	{
		int num;
		cin>>num;
		if(num == 0)
			return -1;
		for(int i=0;i<num;i++)
			cout<<arr[i%26];
		cout<<endl;
	}
	return 0;
}


