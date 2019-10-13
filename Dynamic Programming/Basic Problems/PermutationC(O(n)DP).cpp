#include <iostream>
using namespace std;

int pc(int n,int k)
{
	int fact[n+1];
	fact[0]=1;
	for(int i=1;i<=n;i++)
	{
		fact[i]=fact[i-1]*i;
	}
	return fact[n]/fact[n-k];
}

int main() {
	int n;
	int k;
	cout<<pc(10,2);
	return 0;
}
