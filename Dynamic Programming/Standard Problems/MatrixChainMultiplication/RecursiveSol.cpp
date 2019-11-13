#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int matrixchain(vector<int> p,int i,int j)
{
	if(i==j)return 0;
	int k,count;
	int min=INT_MAX;
	for(k=i;k<j;k++)
	{
		count=matrixchain(p,i,k)+matrixchain(p,k+1,j)+p[i-1]*p[k]*p[j];
		if(count<min)
		{
			min=count;
		}
	}
	return min;
	
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
	cout<<matrixchain(p,1,n-1);
	return 0;
}
