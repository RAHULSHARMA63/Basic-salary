#include<iostream>
using namespace std;
int main()
{
	float s,b,n=0;
	cout<<"enter your salary";
	cin>>s;
	if(s>=15000)
	{
		b=(s*10)/100;
		n=s+b;
		cout<<"your salary is:"<<s;
		cout<<"\nyour bonus is:"<<b;
		cout<<"\nyour net salary is:"<<n;
	}
	if(s>=10000&&s<15000)
	{
		b=(s*b)/100;
		n=s+b;
		cout<<"your salary is:"<<s;
		cout<<"\nyour bonus is:"<<b;
		cout<<"\nyour net salary is:"<<n;
	}
	if(s<10000)
	{
		b=(s*0)/100;
		n=s+b;
		cout<<"your salary is:"<<s;
		cout<<"\nyour bonus is:"<<b;
		cout<<"\nyour net salary is:"<<n;
	}
	return 0;

}
