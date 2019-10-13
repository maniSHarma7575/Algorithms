#include <iostream>
using namespace std;

int bc(int n,int k)
{
	if(k==0 || k==n)
	{
		return 1;
	}
	else
	{
		return bc(n-1,k-1)+bc(n-1,k);
	}
}

int main() {
	int n;
	int k;
	cout<<bc(7,3);
	return 0;
}
