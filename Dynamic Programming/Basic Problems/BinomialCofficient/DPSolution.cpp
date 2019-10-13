#include <iostream>
using namespace std;

int bc(int n,int k)
{
	int c[n+1][k+1];
	for(int i=0;i<=n;i++)
	{
		for(int j=0;j<=min(i,k);j++)
		{
			if(j==i || j==0)
			{
				c[i][j]=1;
			}
			else
			{
				c[i][j]=c[i-1][j-1]+c[i-1][j];
			}
		}
	}
	return c[n][k];
	
}

int main() {
	int n;
	int k;
	cout<<bc(10,8);
	return 0;
}
