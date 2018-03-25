#include<bits/stdc++.h>
using namespace std;

int main()
{
	//freopen("input.txt","r",stdin);
	//freopen("output.txt","w",stdout);
	
	unsigned long long num;
	string arr = "0123456789ABCDEFGHIJKLMNOPQRSTUV";
	
	while(cin>>num)
	{
		if(num==0)
		{
			cout<<0<<endl;
			break;
		}
		string num1;
		int count,sum,power;
		count=sum=power=0;
		
		while(num)
		{
			num1 += arr[num%32];
			num /= 32;
		}
		reverse(num1.begin(),num1.end());
		cout<<num1<<endl;
	}
	return 0;
}
