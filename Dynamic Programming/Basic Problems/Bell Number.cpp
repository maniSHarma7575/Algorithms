#include <iostream>
using namespace std;
int bellNumber(int n)
{
	int lookup[n+1][n+1];
	lookup[0][0]=1;
	for(int i=1;i<=n;i++)
	{
		lookup[i][0]=lookup[i-1][i-1];
		for(int j=1;j<=i;j++)
		{
			lookup[i][j]=lookup[i-1][j-1]+lookup[i][j-1];
		}
	}
	return lookup[n][0];
}
int main() {
	// your code goes here
	int n;
	cin>>n;
	cout<<bellNumber(n);
	return 0;
}
