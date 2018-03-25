#include<bits/stdc++.h>
using namespace std;

int check(string year,int div)
{
	int n = 0;
	for(int i=0;year[i]!='\0';i++)
	{
		n = (n*10 + (year[i] - '0'))%div;
	}
	if(n==0)
		return 0;
	else 
		return 1;
}

int main()
{
	string year;
	int x=0;
	
	while(cin>>year)
	{
		if(x) cout<<endl;
		x = 1;
		int l,f;
		l=f=0;
		
		if(check(year,4)==0 && check(year,100)!=0 || check(year,400)==0)
		{
			cout<<"This is leap year."<<endl;
			l = f = 1;
		}
		if(check(year,15)==0)
		{
			cout<<"This is huluculu festival year."<<endl;
			f= 1;
		}
		if(check(year,55)==0 && l==1)
			cout<<"This is buluculu festival year."<<endl;
		if(f==0)
			cout<<"This is an ordinary year."<<endl;
	}
	return 0;
}
