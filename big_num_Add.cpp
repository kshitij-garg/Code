#include<iostream>
#include<string.h>
using namespace std;
void pad(char a[],char b[],int len1,int len2);
int main()
{
	char num1[1000],num2[1000],num3[1000];
	cin>>num1;
	cin>>num2;
	int i,j,k,len,len1,len2,carry;
	len1=strlen(num1);
	len2=strlen(num2);
	if(len1>len2)
	len=len1;
	else
	len=len2;	
	for(int l=0;l<len;l++)
	num3[l]='0';
	for(i=0;i<len;i++)
	{
		carry=0;
		j=num1[i]-'0';
	//	cout<<"j="<<j<<endl;
		k=num2[i]-'0';
	//	cout<<"k="<<k<<endl;
		num3[i]=((j+k)%10)+'0';
		carry = (j+k)/10;
		cout<<"carry="<<carry<<endl;
		num3[i+1]+=carry;
	}
	cout<<num3<<endl;
	return 0;
}
void pad(char a[],char b[],int len1,int len2)
{
	int i,small,big;
	char str[1000];
	if(len1 > len2)
	{
		for(i=len2;i<len1;i++)
		{
			a[i]=0;
		}
	}
	else
	{
		small = len1;
		big = len2;
	}
	for(i=big-1;i>=small;i--)
	
	
}
