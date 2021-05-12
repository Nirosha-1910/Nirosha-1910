#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,i,flag=0;
	cin>>n;
	for(i=2;i<=sqrt(n);i++);
	{
		if(n%i==0)
		   flag=1;
	}
	if(flag==1)
	  cout<<"Its not a prime";
	else
	 cout<<"Its a prime";
}
