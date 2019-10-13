//Memomization Method
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define max 100
int lookup[max];
void initialize()
{
	memset(lookup,-1,sizeof(lookup));
}
unsigned int catalan(int n)
{
	if(n<=1 && lookup[n]==-1)
	{
		return (lookup[n]=1);
	}
	unsigned long int res=0;
	for(int i=0;i<n;i++)
	{
		if(lookup[i]!=-1 && lookup[n-1-i]!=-1)
		{
			res+=lookup[i]*lookup[n-1-i];
		}
		else if(lookup[i]==-1 && lookup[n-1-i]==-1)
		{
			res+=catalan(i)*catalan(n-i-1);
		}
		else if(lookup[i]==-1)
		{
			res+=catalan(i)*lookup[n-1-i];
		}
		else
		{
			res+=lookup[i]*catalan(n-1-i);
		}
		
	}
	
	return res;
}
int main() {
	// your code goes here
	initialize();
	int n;
	cin>>n;
	cout<<catalan(n);
	return 0;
}
