#include<bits/stdc++.h>
using namespace std;

int main()
{
	int T;
	cin>>T;
	
	while(T--)
	{
		long long n,value;
		cin>>n;
		value = pow(2,n) - 1;
		cout<<value<<endl;
	}
	return 0;
}
