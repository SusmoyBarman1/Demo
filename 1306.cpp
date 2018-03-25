#include<bits/stdc++.h>
using namespace std;

int main()
{
	int R,N,Case=1;
	
	while(cin>>R>>N &&R &&N)
	{
		int count=0,check = 1;
		if(N>=R)
			cout<<"Case "<<Case<<": "<<count<<endl;
		else
		{
			for(int i=1;i<27;i++)
			{
				count++;
				if((N*i + N)>=R)
				{
					cout<<"Case "<<Case<<": "<<count<<endl;
					check = 0;
					break;
				}
			}
			if(check)
				cout<<"Case "<<Case<<": "<<"impossible"<<endl;
		}
		Case++;
	}
	
	return 0;
}
