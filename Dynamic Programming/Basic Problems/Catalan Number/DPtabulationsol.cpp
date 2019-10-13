#include <iostream>
using namespace std;
unsigned long int catalanDP(int n)
{
	unsigned long int lookup[n+1];
	lookup[0]=lookup[1]=1;
	for(int i=2;i<=n;i++)
	{
		lookup[i]=0;
		for(int j=0;j<i;j++)
		{
			lookup[i]+=lookup[j]*lookup[i-1-j];
		}
	}
	return lookup[n];
}

int main() {
	// your code goes here
	int n;
	cin>>n;
	cout<<catalanDP(n);
	return 0;
}
