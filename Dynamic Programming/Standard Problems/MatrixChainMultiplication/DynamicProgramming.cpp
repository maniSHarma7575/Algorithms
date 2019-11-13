#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int matrixchain(vector<int> p,int n)
{
	int dp[n][n];
	for(int i=1;i<n;i++)
	{
		dp[i][i]=0;
	}
	int j,k,q;
	for(int l=2;l<n;l++)
	{
		for(int i=1;i<n-l+1;i++)
		{
			j=i+l-1;
			dp[i][j]=INT_MAX;
			for(int k=i;k<j;k++)
			{
				q=dp[i][k]+dp[k+1][j]+p[i-1]*p[k]*p[j];
				if(dp[i][j]>q)
				{
					dp[i][j]=q;
				}
			}
		}
	}
	return dp[1][n-1];
	
	
	
}

int main() {
	int n,a;
	cin>>n;
	vector<int> p;
	for(int i=0;i<n;i++)
	{
		cin>>a;
		p.push_back(a);
	}
	cout<<matrixchain(p,n);
	return 0;
}
